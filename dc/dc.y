
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

/*%left  '+' '-' '*' '/'*/

%%


/* 3+31 * 2 /3 +2 */

exps: {printf("empty\n");}
    | exps factor ';' {printf("exp:: f ;"); printf("value=%d\n", $2);}
    ;

factor: NUM {$$=$1;}
      | '|' factor {abs($2);}
      | '(' factor ')' {$$=$2;}
      | factor '+' factor {$$=$1+$3;}
      | factor '-' factor {$$=$1-$3;}
      | factor '*' factor {$$=$1*$3;}
      | factor '/' factor {$$=$1/$3;}
      ;
%%

void yyerror(char *s)
{
    printf("error:%d %s", yylineno, s);
}
