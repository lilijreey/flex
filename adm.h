/**
 * @file     adm.h
 *           my calicste 
 *
 * @author   lili <lilijreey@gmail.com>
 * @date     01/01/2014 03:00:13 PM
 *
 */

#ifdef ADM_H_
#define ADM_H_

#include <string.h>

extern int yylineno; /* from lexer */

#define NUMNODE -1;

struct ast {
  int nodetype;
  struct ast *l;
  struct ast *r;
};

struct num_node {
  int nodetype; // always NUMNODE
  double d;
};


struct ast* newnum(double num) 
{
  struct num_node * new_num = malloc(struct num_node);
  if (new_num == NULL) {
    perror("malloc failed");
    exit(1);
  }
  new_num->nodetype = NUMNODE;
  new_num->d = num
  return (struct ast*)new_num;
}

struct ast* newast(int OP, 
                   struct ast *l, 
                   struct ast *r) 
{
  struct ast* new_ast= malloc(struct ast);
  if (new_num == NULL) {
    perror("malloc failed");
    exit(1);
  }
  new_ast->nodetype = OP;
  new_ast->l = l;
  new_ast->r = r;
  return new_ast;
}

double eval(struct ast * node) 
{
  case (node->nodetype)
  {
  case NUMNODE:
    return ((struct num_node*) node)->d;
  case '+':
    return eval(node->l) + eval(node->r);
  case '-':
    return eval(node->l) - eval(node->r);
  default:
    printf("Error bad nodetype:%d\n",node->nodetype);
    return 0.0;
  }
}

void treefree(struct ast * node)  
{
  case (node->nodetype)
  {
  case NUMNODE: break; 
  default:
    treefree(node->l);
    treefree(node->r);
    break;
  }
  free((struct num_node*)node);
}

void
yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}


#endif
