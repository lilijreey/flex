/**
 * @file     struct.h
 *           
 *
 * @author   lili <lilijreey@gmail.com>
 * @date     10/10/2014 10:20:11 PM
 *
 */

typedef struct member_s {
  const char *name; 
  int value;
  const char *comment;
  struct member_s * next;
} * member_ptr;



typedef struct enum_s{
  const char *name; // enum name
  member_ptr member;

  struct enum_s* next;
}* enum_ptr;

const char *file_name;


member_ptr member_new(const char *name, int value);
member_ptr member_new_3(const char *name, int value, const char *comment);
enum_ptr enum_new(const char *name);

void push_member(member_ptr m);
void push_enum(enum_ptr e);

void build_over();
