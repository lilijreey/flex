%{
#include <stdio.h>
#include "adm.h"

%}

%union 
{
struct ast *a;
double d;
}

%token <d> NUMBER
%token EOL

%type <a> exp term


%%

calclist: /*nothing*/
        | calclist exp EOL {
          printf(">>>=%4.4d\n", eval($2));
          freeast($2);
          printf("> "); }

        | calclist EOL { printf("empty > ");}
        ;

exp: term '+' exp {$$ = newast('+', $1, $3);}
   | term '-' exp {$$ = newast('-', $1, $3);}
   | term
   ;

term: NUMBER { $$ = newnum($1);}
    ;
%%

int
main()
{
  printf("> "); 
  return yyparse();
}
