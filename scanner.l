/* --------------------------------------------------------------------------
   BNF
   configuration = setting-list | EMPTY
   setting-list = setting | setting-list setting
   setting = NAME (":" | "=") value ("," | EMPTY)
   value = scalar-value | array | map
   value-list = value | value-list "," value | value-list "\n" value
   scalar-value = BOOLEAN | INTEGER | FLOAT | STRING
   scalar-value-list = scalar-value | scalar-value-list "," scalar-value | scalar-value-list "\n" scalar-value
   array = "[" (scalar-value-list | EMPTY) "]"
   map = "{" (value-list | empty) "}"
   empty =

   ----------------------------------------------------------------------------
*/

%option nounistd
%option reentrant
%option noyywrap
%option yylineno
%option nounput
%option bison-bridge
%option header-file="scanner.h"
%option outfile="lex.yy.c"
%option extra-type="struct scan_context *"

%{

#ifdef _MSC_VER
#pragma warning (disable: 4996)
#endif

#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "grammar.h"
#include "wincompat.h"
#include "parsectx.h"
#include "scanctx.h"

#define YY_NO_INPUT // Suppress generation of useless input() function

%}

true              true
false             false
name              [A-Za-z_][A-Za-z0-9_]*
integer           [-+]?[0-9]+
hex               0[Xx][0-9A-Fa-f]+
hexchar           \\[Xx][0-9A-Fa-f]{2}
float             ([-+]?([0-9]*)?\.[0-9]*([eE][-+]?[0-9]+)?)|([-+]?([0-9]+)(\.[0-9]*)?[eE][-+]?[0-9]+)
comment           (#|\/\/).*$
include_open      ^[ \t]*@include[ \t]+\"

%x COMMENT STRING INCLUDE

%%

\/\*              { BEGIN COMMENT; }
<COMMENT>\*\/     { BEGIN INITIAL; }
<COMMENT>.        { /* ignore */ }
<COMMENT>\n       { /* ignore */ }

\"                { BEGIN STRING; }
<STRING>[^\"\\]+  { scanctx_append_string(yyextra, yytext); }
<STRING>\\n       { scanctx_append_string(yyextra, "\n"); }
<STRING>\\r       { scanctx_append_string(yyextra, "\r"); }
<STRING>\\t       { scanctx_append_string(yyextra, "\t"); }
<STRING>\\f       { scanctx_append_string(yyextra, "\f"); }
<STRING>\\\\      { scanctx_append_string(yyextra, "\\"); }
<STRING>\\\"      { scanctx_append_string(yyextra, "\""); }
<STRING>{hexchar} {
                    char c[2] = { (char)(strtol(yytext + 2, NULL, 16) & 0xFF),
                                  0 };
                    scanctx_append_string(yyextra, c);
                  }
<STRING>\\        { scanctx_append_string(yyextra, "\\"); }
<STRING>\"        {
                    yylval->sval = scanctx_take_string(yyextra);
                    BEGIN INITIAL;
                    return(TOK_STRING);
                  }

{include_open}    { BEGIN INCLUDE; }
<INCLUDE>[^\"\\]+ { scanctx_append_string(yyextra, yytext); }
<INCLUDE>\\\\     { scanctx_append_string(yyextra, "\\"); }
<INCLUDE>\\\"     { scanctx_append_string(yyextra, "\""); }
<INCLUDE>\"       {
                    const char *error;
                    FILE *fp = scanctx_push_include(yyextra,
                                                    (void *)YY_CURRENT_BUFFER,
                                                    &error);
                    if(fp)
                    {
                      yyin = fp;
                      yy_switch_to_buffer(
                        yy_create_buffer(yyin, YY_BUF_SIZE, yyscanner),
                        yyscanner);
                    }
                    else
                    {
                      yyextra->config->error_text = error;
                      yyextra->config->error_file = scanctx_current_filename(
                        yyextra);
                      yyextra->config->error_line = libconfig_yyget_lineno(
                        yyscanner);
                      return TOK_ERROR;
                    }
                    BEGIN INITIAL;
                  }

\n|\r|\f          { /* ignore */ }
[ \t]+            { /* ignore */ }

\=|\:             { return(TOK_EQUALS); }
,                 { return(TOK_COMMA); }
\{                { return(TOK_GROUP_START); }
\}                { return(TOK_GROUP_END); }
{true}            { yylval->ival = 1; return(TOK_BOOLEAN); }
{false}           { yylval->ival = 0; return(TOK_BOOLEAN); }
{name}            { yylval->sval = yytext; return(TOK_NAME); }
{float}           { yylval->fval = atof(yytext); return(TOK_FLOAT); }
{integer}         { yylval->ival = atoi(yytext); return(TOK_INTEGER); }
{hex}             {
                    yylval->ival = strtoul(yytext, NULL, 16);
                    return(TOK_HEX);
                  }
\[                { return(TOK_ARRAY_START); }
\]                { return(TOK_ARRAY_END); }
\(                { return(TOK_LIST_START); }
\)                { return(TOK_LIST_END); }
;                 { return(TOK_SEMICOLON); }
{comment}         { /* ignore */ }
.                 { return(TOK_GARBAGE); }

<<EOF>>           {
                    YY_BUFFER_STATE buf = (YY_BUFFER_STATE)scanctx_pop_include(
                      yyextra);
                    if(buf)
                    {
                      yy_delete_buffer(YY_CURRENT_BUFFER, yyscanner);
                      yy_switch_to_buffer(buf, yyscanner);
                    }
                    else
                      yyterminate();
                  }
