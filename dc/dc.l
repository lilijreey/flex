
%option noyywrap nounput noinput yylineno
%{

#include<stdio.h>
#include<stdlib.h>
#include"dc.tab.h"

%}


%%

"+" {return yytext[0];}
"-" {return yytext[0];}
"*" {return yytext[0];}
"/" {return yytext[0];}
"|" {return yytext[0];}
";" {return yytext[0];}
"("|")" {return yytext[0];}
[0-9]+ {yylval.i = atoi(yytext); return NUM;}
\n {}
[ \t] {}
. {printf("unmatch char %s", yytext); yyterminate();}

%%

