/**
 * @file     struct.c
 *           
 *
 * @author   lili  <lilijreey@gmail.com>
 * @date     11/10/14 11:10:51
 *
 */
#include <stdlib.h>
#include <libgen.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdbool.h>
#include "struct.h"

extern int yylineno;

static FILE *fp;

static enum_ptr  head_e = NULL;
//static enum_ptr  last_e = NULL;

//static member_ptr member = NULL;
static member_ptr head_m = NULL;
//static member_ptr last_m = NULL;

// hash is gread
bool push_and_check_member_name_is_redefined(const char *name)
{
    static const char *member_name_tab[4096] = {0};
    static size_t count=0;
    size_t i=0;

    for (; i < count; ++i) {
        if (0 == strcmp(name, member_name_tab[i]))
            return true;
    }
    member_name_tab[count++] = name;
    return false;
}


member_ptr
member_new(const char *name, int value)
{
    if (push_and_check_member_name_is_redefined(name)) {
        printf("line[%d] member %s = %d redefined\n",  yylineno, name, value);
        exit(1);
    }
    return member_new_3(name, value, "");
}

member_ptr
member_new_3(const char *name, int value, const char *comment)
{
//    printf("member_new %s %d \n", name, value);
    member_ptr p=(member_ptr)malloc(sizeof(struct member_s));
    assert(p);

    p->name = strdup(name);
    p->value = value;
    p->comment = strdup(comment);
    p->next = NULL;

    assert(p->name);
    assert(p->name);
    return p;
}


enum_ptr
enum_new(const char *name)
{
    enum_ptr p=(enum_ptr)malloc(sizeof(struct enum_s));
    assert(p);

    p->name = strdup(name);
    p->member= head_m; // link to members

    head_m = NULL;
    return p;
}

// push a new enum member
void push_member(member_ptr m) 
{
    // first member
//    printf("push_member %s\n", m->name);
    m->next = head_m;
    head_m = m;
}

void push_enum(enum_ptr e)
{
    e->next = head_e;
    head_e = e;
}

void print_enum(enum_ptr e)
{
    printf("Enum %s {\n", e->name);
    member_ptr m = e->member;
    while (m != NULL) {
        printf("\t %s = %d %s\n", m->name, m->value, m->comment);
        m = m->next;
    }
    printf("}\n");
}

void show_all()
{
    enum_ptr e = head_e;
    while (e != NULL) {
        print_enum(e);
        e = e->next;
    } 
}

void check_value_is_repeat__(enum_ptr e)
{
    int value_tab[1000] = {0};
    int count=0, i, j;

    //XXX hash
    member_ptr m = e->member;
    while (m != NULL) {
        value_tab[count++] = m->value;
        m = m->next;
    }

    m = e->member;
    while (m != NULL) {
        j=0;
        for (i=0; i < count; ++i) {
            if (value_tab[i] == m->value) {
                j +=1;
                if (j>=2) {
                    printf("member %s=%d value repeat\n", m->name, m->value);
                    exit(1);
                }
            }
        }
        m = m->next;
    }
}

// check value 
void check_value_is_repeat()
{
    enum_ptr e = head_e;
    while (e != NULL) {
        check_value_is_repeat__(e);
        e = e->next;
    } 
}

// 一个enum 中name 不能重名，value不能重复
void semantic_analyzer()
{
    check_value_is_repeat();
}

/* 
%% Enum XXX Begin
-define(TASK, 'TASK')
-define(FEO, 3).
-define(FJEO, 2).
-define(OFE, 4).
%% Enum XXX End
*/

void gen_enum_hrl(enum_ptr e)
{
    fprintf(fp, "%% Enum %s begin\n", e->name);
    fprintf(fp, "-define(%s, '%s')\n", e->name, e->name);
    member_ptr m = e->member;
    while (m != NULL) {
        fprintf(fp, "-define(%s, %d). %s\n", m->name, m->value, m->comment);
        m = m->next;
    }
    fprintf(fp, "%% Enum %s end\n\n", e->name);
}


static void remove_suffix (char *name, const char *suffix)
{
  char *np;
  const char *sp;

  np = name + strlen (name);
  sp = suffix + strlen (suffix);

  while (np > name && sp > suffix)
    if (*--np != *--sp)
      return;
  if (np > name)
    *np = '\0';
}


void gen_hrl()
{
    char fname[256];
    char *fn = strdup(file_name);
    remove_suffix(fn, ".enum");
    snprintf(fname, 255, "%s_enum.hrl", basename(fn));

//    printf("hrl file %s\n", fname);
    
    fp = fopen(fname, "w");
    assert(fp != NULL);

    fprintf(fp, "%%%%%% Do not edit it.\n");
    fprintf(fp, "%%%%%% Auto Generate by config_pp autotools.\n\n\n");

    enum_ptr e = head_e;
    while (e != NULL) {
        gen_enum_hrl(e);
        e = e->next;
    } 
    
    if (-1 == fclose(fp))
        perror("fclose ");
    fp = NULL;
}


/*
 * to_s/1
 * is_valid/1
 * all/1
 * size/1
 * 
 */

void gen_to_s(enum_ptr e)
{
    member_ptr m = e->member;
    while (m != NULL) {
        fprintf(fp, "to_s_%s(?%s) -> %d;\n", e->name, m->name, m->value);
        m = m->next;
    }
    fprintf(fp, "to_s_%s(_) -> unknown.\n\n", e->name);
}

// HACK range >xx <xx
void gen_is_valid(enum_ptr e)
{
    member_ptr m = e->member;
    while (m != NULL) {
        fprintf(fp, "is_valid_%s(?%s) -> true;\n", e->name, m->name);
        m = m->next;
    }
    fprintf(fp, "is_valid_%s(_) -> false.\n\n", e->name);
}

void gen_all(enum_ptr e)
{
    int i=1;
    member_ptr m = e->member;
    fprintf(fp, "all_%s() -> [%d", e->name, m->value);
    while (m->next != NULL) {
        fprintf(fp, ", %d", m->next->value),
        m = m->next;
        i++;
    }
    fprintf(fp, "].\n");

    fprintf(fp, "count_%s() -> %d.\n\n", e->name, i);
}


void gen_enum_erl(enum_ptr m)
{
    gen_to_s(m);
    gen_all(m);
    gen_is_valid(m);
}

void gen_erl() 
{
    char fname[256];
    char *fn = strdup(file_name);
    remove_suffix(fn, ".enum");
    snprintf(fname, 255, "%s_enum.erl", basename(fn));

//    printf("hrl file %s\n", fname);
    
    fp = fopen(fname, "w");
    assert(fp != NULL);

    fprintf(fp, "%%%%%% Do not edit it.\n");
    fprintf(fp, "%%%%%% Auto Generate by config_pp autotools.\n\n");
    fprintf(fp, "-module(%s_enum).\n", fn);
    fprintf(fp, "-compile([export_all]).\n\n");
    fprintf(fp, "-include(\"%s_enum.hrl\").\n", fn);

    enum_ptr e = head_e;
    while (e != NULL) {
        gen_enum_erl(e);
        e = e->next;
    } 
    
    fclose(fp);
    fp=NULL;
}


void gen_code()
{
    gen_hrl();
    gen_erl();
}

void build_over()
{
    //    show_all();
    semantic_analyzer();
    gen_code();
}

