
%{

#include<stdio.h>
#include<stdlib.h>
#define p(x) printf(x "\n")

void yyerror(char *);
extern int yylineno;
int yylex(void);

%}

%union{
 int i;
}

%token <i> NUM
%type <i> term
%type <i> factor
%type <i> factor_1

/*%left  '+' '-' '*' '/'*/

%%


/* 3+31 * 2 /3 +2 */

exps: {printf("empty\n");}
    | exps factor ';' {printf("exp:: f ;"); printf("value=%d\n", $2);}
   ;

/* 左结合性被表达为 xxx : xxx op other */
factor: factor_1 {p("f:: f1"); $$=$1;}
      | factor '+' factor_1 {p("f:: f + f1"); $$=$1 + $3;}
      | factor '-' factor_1 {p("f:: f - f1"); $$=$1 - $3;}
      ;

factor_1: factor_1 '*' term {p("f:: f* t"); $$=$1 * $3;}
        | factor_1 '/' term {p("f:: f/ t"); $$=$1 / $3;}
        | term {p("f1:: term"); $$=$1;}
      ;

term: NUM {p("t:: num"); $$ =$1;}
    | '|' NUM {p("t:: | NUM"); $$=abs($2);}
    ;

%%

void yyerror(char *s)
{
    printf("error:%d %s", yylineno, s);
}
