%{
#include "stdio.h"
#include "string.h"
#include "struct.h"
#include "enum_pp.tab.h"

/*#ifdef debug*/
/*#define(debug(S), printfS)*/
/*#endif*/

%}


%option noyywrap nounput yylineno

NAME [a-zA-Z][_a-zA-Z0-9]*
VAL ([1-9][0-9]*)
    

%%

#.* {
       /*printf("comment %s\n", yytext); */
}
{NAME} {
    /*printf("name %s\n", yytext);*/
        yylval.c= strdup(yytext);
        return NAME;}
{VAL}  {
    /*printf("val %s\n", yytext); */
        yylval.i = atoi(yytext);
        return VAL;}
\n     {return NL;}
"=" |
"{" |
"}" {
    /*printf("%c ", yytext[0]);*/
    return yytext[0]; /*yacc use '=' respect this token*/}
%.* {
       yylval.c=strdup(yytext);
       return COMMENT;}
[ \t] {}
. {printf("unmatch char:%s\n", yytext); yyterminate(); /* TODO error handle */}


%%

/*
<<EOF>> {printf("file EOF\n"); return F_EOF;}

int main(int argc, char *argv[])
{
  if(argc > 1) {
    if(!(yyin = fopen(argv[1], "r"))) {
      perror(argv[1]);
      return (1);
    }
  }

  yylex();
  fclose(yyin);

  return 0;
}
*/



void yyerror(char const *s)
{
  fprintf (stderr, "line %d %s\n", yylineno, s);
}

int main(int argc, char *argv[])
{
  if(argc > 1) {
    if(!(yyin = fopen(argv[1], "r"))) {
      perror(argv[1]);
      return (1);
    }
  }

  file_name = argv[1];
  yyrestart(yyin);
  yyparse();

  fclose(yyin);

  return 0;
}
