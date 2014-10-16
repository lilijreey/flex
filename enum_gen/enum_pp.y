%{
#include <stdio.h>
#include "struct.h"

#define YYDEBUG 1
int is_in_enum=0;

%}

%union{
 enum_ptr e;
 member_ptr m;
 char *c;
 int i;
}

%token <c> NAME
%token <i> VAL
%token <c> COMMENT

%token NL 

%type <e> enums
%type <e> enum
%type <m> member 
%type <m> members
%start start


%%



/*左规约*/

start: enums {build_over();}

enums: {
        /*printf("REDUCE\n\t top enpty\n");*/
       }/*why need first is comment? */
     | NL enums {
          /*printf("REDUCE \n\t enums :: NL enums\n");*/
        }
     | enum enums {
          /*printf("REDUCE \n\t enums :: enum enums");*/
          push_enum($1);
       }
     ;

enum: NAME NL '{' NL members '}' NL {
            /*printf("REDUCE \n\t enum :: NAME NL { NL members } NL\n"); */
                                      $$=enum_new($1);}
    ;

members: member {
        /*printf("REDUCE \n\t members :: member\n"); */ push_member($1);
          }
       | NL members {
                 /*printf("REDUCE \n\t members :: NL member\n");*/
                    }
       | member members {
                 /*printf("REDUCE \n\t members :: member members\n"); */
                 push_member($1);
                    }
      ;

member:  NAME '=' VAL NL {
                      /*printf("REDUCE \n\t member :: NAME =  VAL NL\n");*/
                      $$ = member_new($1, $3);
                         }
      |  NAME '=' VAL COMMENT NL {
                       /*printf("REDUCE \n\t member :: NAME =  VAL COM NL\n"); */
                       $$ = member_new_3($1, $3, $4);
                        }
      ;


%%

