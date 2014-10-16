/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 10 "lpmysql.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

 

#line 74 "lpmysql.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "lpmysql.tab.h".  */
#ifndef YY_YY_LPMYSQL_TAB_H_INCLUDED
# define YY_YY_LPMYSQL_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 17 "lpmysql.y" /* yacc.c:355  */

char *filename;

typedef struct YYLTYPE {
  int first_line;
  int first_column;
  int last_line;
  int last_column;
  char *filename;
} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1

# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)                                                            \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	  (Current).filename     = YYRHSLOC (Rhs, 1).filename;	        \
	}								\
      else								\
	{ /* empty RHS */						\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	  (Current).filename  = NULL;					\
	}								\
    while (0)

#line 137 "lpmysql.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    USERVAR = 263,
    ASSIGN = 264,
    OR = 265,
    XOR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
    NOT = 272,
    BETWEEN = 273,
    COMPARISON = 274,
    SHIFT = 275,
    MOD = 276,
    UMINUS = 277,
    ADD = 278,
    ALL = 279,
    ALTER = 280,
    ANALYZE = 281,
    AND = 282,
    ANY = 283,
    AS = 284,
    ASC = 285,
    AUTO_INCREMENT = 286,
    BEFORE = 287,
    BIGINT = 288,
    BINARY = 289,
    BIT = 290,
    BLOB = 291,
    BOTH = 292,
    BY = 293,
    CALL = 294,
    CASCADE = 295,
    CASE = 296,
    CHANGE = 297,
    CHAR = 298,
    CHECK = 299,
    COLLATE = 300,
    COLUMN = 301,
    COMMENT = 302,
    CONDITION = 303,
    CONSTRAINT = 304,
    CONTINUE = 305,
    CONVERT = 306,
    CREATE = 307,
    CROSS = 308,
    CURRENT_DATE = 309,
    CURRENT_TIME = 310,
    CURRENT_TIMESTAMP = 311,
    CURRENT_USER = 312,
    CURSOR = 313,
    DATABASE = 314,
    DATABASES = 315,
    DATE = 316,
    DATETIME = 317,
    DAY_HOUR = 318,
    DAY_MICROSECOND = 319,
    DAY_MINUTE = 320,
    DAY_SECOND = 321,
    DECIMAL = 322,
    DECLARE = 323,
    DEFAULT = 324,
    DELAYED = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DETERMINISTIC = 329,
    DISTINCT = 330,
    DISTINCTROW = 331,
    DIV = 332,
    DOUBLE = 333,
    DROP = 334,
    DUAL = 335,
    EACH = 336,
    ELSE = 337,
    ELSEIF = 338,
    ENCLOSED = 339,
    END = 340,
    ENUM = 341,
    ESCAPED = 342,
    EXISTS = 343,
    EXIT = 344,
    EXPLAIN = 345,
    FETCH = 346,
    FLOAT = 347,
    FOR = 348,
    FORCE = 349,
    FOREIGN = 350,
    FROM = 351,
    FULLTEXT = 352,
    GRANT = 353,
    GROUP = 354,
    HAVING = 355,
    HIGH_PRIORITY = 356,
    HOUR_MICROSECOND = 357,
    HOUR_MINUTE = 358,
    HOUR_SECOND = 359,
    IF = 360,
    IGNORE = 361,
    INDEX = 362,
    INFILE = 363,
    INNER = 364,
    INOUT = 365,
    INSENSITIVE = 366,
    INSERT = 367,
    INT = 368,
    INTEGER = 369,
    INTERVAL = 370,
    INTO = 371,
    ITERATE = 372,
    JOIN = 373,
    KEY = 374,
    KEYS = 375,
    KILL = 376,
    LEADING = 377,
    LEAVE = 378,
    LEFT = 379,
    LIMIT = 380,
    LINES = 381,
    LOAD = 382,
    LOCALTIME = 383,
    LOCALTIMESTAMP = 384,
    LOCK = 385,
    LONG = 386,
    LONGBLOB = 387,
    LONGTEXT = 388,
    LOOP = 389,
    LOW_PRIORITY = 390,
    MATCH = 391,
    MEDIUMBLOB = 392,
    MEDIUMINT = 393,
    MEDIUMTEXT = 394,
    MINUTE_MICROSECOND = 395,
    MINUTE_SECOND = 396,
    MODIFIES = 397,
    NATURAL = 398,
    NO_WRITE_TO_BINLOG = 399,
    NULLX = 400,
    NUMBER = 401,
    ON = 402,
    ONDUPLICATE = 403,
    OPTIMIZE = 404,
    OPTION = 405,
    OPTIONALLY = 406,
    ORDER = 407,
    OUT = 408,
    OUTER = 409,
    OUTFILE = 410,
    PRECISION = 411,
    PRIMARY = 412,
    PROCEDURE = 413,
    PURGE = 414,
    QUICK = 415,
    READ = 416,
    READS = 417,
    REAL = 418,
    REFERENCES = 419,
    RELEASE = 420,
    RENAME = 421,
    REPEAT = 422,
    REPLACE = 423,
    REQUIRE = 424,
    RESTRICT = 425,
    RETURN = 426,
    REVOKE = 427,
    RIGHT = 428,
    ROLLUP = 429,
    SCHEMA = 430,
    SCHEMAS = 431,
    SECOND_MICROSECOND = 432,
    SELECT = 433,
    SENSITIVE = 434,
    SEPARATOR = 435,
    SET = 436,
    SHOW = 437,
    SMALLINT = 438,
    SOME = 439,
    SONAME = 440,
    SPATIAL = 441,
    SPECIFIC = 442,
    SQL = 443,
    SQLEXCEPTION = 444,
    SQLSTATE = 445,
    SQLWARNING = 446,
    SQL_BIG_RESULT = 447,
    SQL_CALC_FOUND_ROWS = 448,
    SQL_SMALL_RESULT = 449,
    SSL = 450,
    STARTING = 451,
    STRAIGHT_JOIN = 452,
    TABLE = 453,
    TEMPORARY = 454,
    TEXT = 455,
    TERMINATED = 456,
    THEN = 457,
    TIME = 458,
    TIMESTAMP = 459,
    TINYBLOB = 460,
    TINYINT = 461,
    TINYTEXT = 462,
    TO = 463,
    TRAILING = 464,
    TRIGGER = 465,
    UNDO = 466,
    UNION = 467,
    UNIQUE = 468,
    UNLOCK = 469,
    UNSIGNED = 470,
    UPDATE = 471,
    USAGE = 472,
    USE = 473,
    USING = 474,
    UTC_DATE = 475,
    UTC_TIME = 476,
    UTC_TIMESTAMP = 477,
    VALUES = 478,
    VARBINARY = 479,
    VARCHAR = 480,
    VARYING = 481,
    WHEN = 482,
    WHERE = 483,
    WHILE = 484,
    WITH = 485,
    WRITE = 486,
    YEAR = 487,
    YEAR_MONTH = 488,
    ZEROFILL = 489,
    FSUBSTRING = 490,
    FTRIM = 491,
    FDATE_ADD = 492,
    FDATE_SUB = 493,
    FCOUNT = 494
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 51 "lpmysql.y" /* yacc.c:355  */

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 396 "lpmysql.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_LPMYSQL_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 330 "lpmysql.y" /* yacc.c:358  */

void yyerror(char *s, ...);
void lyyerror(YYLTYPE, char *s, ...);
void emit(char *s, ...);
 

#line 431 "lpmysql.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1625

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  304
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  626

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   494

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     252,   253,    26,    24,   250,    25,   251,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   340,   340,   341,   344,   345,   349,   352,   354,   360,
     361,   363,   364,   368,   370,   374,   375,   376,   379,   380,
     383,   383,   385,   385,   388,   388,   389,   392,   393,   396,
     397,   399,   400,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   415,   416,   417,   420,   422,   423,   426,   427,
     431,   432,   434,   435,   438,   439,   442,   443,   444,   448,
     450,   452,   454,   456,   460,   461,   462,   465,   466,   469,
     470,   473,   474,   475,   478,   478,   481,   482,   486,   488,
     490,   492,   495,   496,   499,   500,   503,   508,   511,   516,
     517,   518,   519,   522,   527,   528,   532,   532,   534,   542,
     545,   551,   552,   555,   556,   557,   558,   559,   562,   562,
     565,   566,   569,   570,   573,   574,   575,   576,   579,   585,
     591,   594,   597,   600,   606,   609,   615,   621,   627,   630,
     637,   638,   639,   643,   646,   649,   652,   660,   664,   665,
     668,   669,   675,   678,   682,   687,   692,   696,   702,   707,
     708,   711,   711,   714,   715,   716,   717,   718,   721,   722,
     723,   724,   725,   726,   727,   728,   729,   730,   731,   732,
     733,   736,   737,   738,   741,   742,   745,   746,   747,   750,
     751,   752,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   767,   768,   769,   770,   771,   772,   773,
     774,   775,   776,   777,   778,   779,   780,   781,   782,   783,
     784,   785,   788,   789,   792,   795,   796,   797,   800,   801,
     806,   809,   811,   811,   814,   816,   821,   822,   823,   824,
     825,   826,   827,   830,   831,   832,   833,   834,   835,   836,
     837,   838,   839,   840,   841,   842,   843,   844,   845,   846,
     847,   848,   849,   850,   851,   854,   855,   856,   857,   860,
     864,   865,   868,   869,   872,   873,   874,   875,   876,   879,
     883,   884,   886,   887,   888,   889,   890,   893,   894,   895,
     898,   899,   902,   903,   904,   905,   906,   907,   908,   909,
     910,   913,   914,   915,   916,   919,   920,   923,   924,   927,
     928,   931,   932,   933,   936
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END", "ENUM", "ESCAPED",
  "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN",
  "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY",
  "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE",
  "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT", "INT",
  "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY", "KEYS", "KILL",
  "LEADING", "LEAVE", "LEFT", "LIMIT", "LINES", "LOAD", "LOCALTIME",
  "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP",
  "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT",
  "MINUTE_MICROSECOND", "MINUTE_SECOND", "MODIFIES", "NATURAL",
  "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON", "ONDUPLICATE", "OPTIMIZE",
  "OPTION", "OPTIONALLY", "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION",
  "PRIMARY", "PROCEDURE", "PURGE", "QUICK", "READ", "READS", "REAL",
  "REFERENCES", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE",
  "RESTRICT", "RETURN", "REVOKE", "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS",
  "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW",
  "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC", "SQL",
  "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING",
  "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED", "THEN",
  "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING",
  "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE",
  "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP",
  "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE",
  "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "','", "'.'", "'('", "')'",
  "$accept", "stmt_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "table_references",
  "table_reference", "table_factor", "opt_as", "opt_as_alias",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace",
  "opt_temporary", "set_stmt", "set_list", "set_expr", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    59,
      44,    46,    40,    41
};
# endif

#define YYPACT_NINF -353

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-353)))

#define YYTABLE_NINF -145

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-145)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     230,  -232,   -25,  -353,  -353,  -353,  -353,    46,     2,  1021,
    -123,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
      22,    22,  -353,   -22,    50,   135,   135,   331,    31,   -42,
    -353,   -58,     3,  -353,   -36,   -29,  -353,   127,   233,   261,
      22,    -2,   267,  -353,  -353,  -353,   -78,  -353,  -353,  -353,
    -353,  -353,   279,   281,  -204,  -353,  -353,  -353,  -353,   288,
     700,   700,   700,  -353,  -353,   700,   198,  -353,  -353,  -353,
    -353,  -353,    24,  -353,  -353,  -353,  -353,  -353,    36,    47,
      49,    62,    64,   -73,  -353,  1530,   700,   700,    46,     4,
       5,     8,    -1,   -96,   148,  -353,  -353,   282,  -353,  -353,
    -353,  -353,  -353,   328,   307,  -353,    95,  -192,     3,   344,
    -101,   -55,   372,   700,   700,   747,   747,  -353,  -353,   700,
    1110,   -66,   191,   700,   222,   700,   700,   454,     3,   700,
    -353,   700,   700,   700,   128,    13,   700,   700,   347,   700,
     125,   700,   700,   700,   700,   700,   700,   700,   700,   700,
     700,   379,  -353,  1595,  1595,  -353,   383,   -20,   156,    -7,
     409,     3,  -353,  -353,  -353,   -89,  -353,     3,   287,   255,
    -353,   416,   -70,  -353,   700,   276,     3,  -195,    -2,   445,
     355,  -131,   445,   -39,  -353,   878,  -353,   197,  1595,  1156,
     -65,   700,  -353,   700,   210,   857,   211,  -353,  -353,  -353,
     212,   700,   899,   944,   229,   779,  -195,  -353,  1308,   732,
     802,   485,  -353,     7,  -353,  1089,  1089,   223,   700,   700,
    1568,   232,   234,   242,   191,  1024,   665,   650,   397,   403,
     403,   470,   470,   470,   470,  -353,  -353,   131,   373,   381,
     385,  -353,  -353,  -353,   -17,   -50,   148,   255,   255,   380,
     365,     3,  -353,   404,  -353,  -353,  -353,   533,   105,  -353,
     282,  1595,   491,   405,  -195,  -353,  -353,   526,  -139,  -353,
    -353,    39,   295,   395,  -139,   295,   395,   700,  -353,   700,
     700,  -353,  1454,  1228,  -353,   700,  -353,  -353,  1358,   429,
     429,  -353,  -353,   448,   304,   305,  -353,  -353,   485,  1089,
    1089,   700,   191,   191,   191,   306,   -20,   458,   458,   458,
     700,   558,   560,   276,  -353,  -353,     3,   700,  -140,     3,
     -74,   -79,   312,   313,   438,    58,  -353,   564,   191,   700,
     700,  -353,  -353,   537,   440,   578,  -353,   363,  -353,   566,
    -126,  -353,  -353,  -126,  -353,  -353,  1595,  1475,  -353,   700,
      51,   700,   700,   332,   333,   541,   480,  -353,  -353,   337,
     345,   910,   346,   350,   351,  -353,  -353,   478,   356,   358,
     359,  1595,   592,   -16,   405,  -353,  1595,   700,   361,  -353,
    -353,  -140,   105,  -353,   366,   367,   355,   355,   368,   105,
     -92,  1217,  -353,   377,  1496,   965,  -353,  1595,   392,   608,
    -353,  -353,  -353,    71,  1595,   386,  -353,  -353,  -353,  1595,
     700,  -353,   384,   986,  -353,  -353,   700,   700,   276,  -353,
    -353,  -353,  -353,  -353,  -353,   630,   630,   630,   700,   700,
     637,  -353,  1595,   355,  -353,    90,   355,   355,   102,   115,
     355,  -353,  -353,   389,   389,   389,  -353,   389,  -353,  -353,
     389,   389,   390,   389,   389,   389,  -353,   602,  -353,   389,
     602,   389,   394,   389,   602,  -353,  -353,  -353,   389,   602,
     396,   398,  -353,  -353,   700,  -353,  -353,  -353,   700,   445,
     589,   618,  -353,   566,   828,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -112,  1595,   405,  -353,   126,
     138,   147,  1595,  1595,   627,   153,   -31,   160,   185,  -353,
    -353,   186,   644,  -353,  -353,  -353,  -353,  -353,  -353,   647,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,   647,  -353,
    -353,  -353,  -353,   651,   652,   139,  1496,  1595,   408,  -353,
    1595,  -353,  1595,   199,  -353,   472,  -353,   534,   657,  -353,
    -353,  -353,   700,  -353,  -353,  -353,  -353,  -353,   245,  -174,
     190,  -174,  -174,  -353,   246,  -174,  -174,  -174,   190,  -174,
     190,  -174,   273,  -174,   190,  -174,   190,   411,   412,   508,
    -353,   662,   322,  -353,  -353,   542,  -113,  -353,  -353,  -353,
     355,  -353,  -353,  1595,   664,  -353,  -353,  -353,   481,   680,
     681,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,   355,   447,   456,   706,  -353,  -353,   190,
     190,   190,   277,  -353,  -353,  -353
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,   218,    92,   103,   103,    33,     0,   103,     0,
       0,     6,    87,    99,   124,   128,   137,   142,   220,     4,
     140,   140,   219,     0,     0,   109,   109,     0,     0,   221,
     222,     0,     0,     1,     0,     0,     2,     0,     0,     0,
     140,    96,     0,    91,    89,    90,     0,   105,   106,   107,
     108,   104,     0,     0,   226,   229,   230,   232,   231,   227,
       0,     0,     0,    44,    34,     0,     0,   302,   303,   301,
      35,    36,     0,    37,    40,    41,    39,    38,     0,     0,
       0,     0,     0,     7,    42,    58,     0,     0,     0,   107,
     104,    58,     0,     0,    46,    48,    49,    55,     5,     3,
     141,   138,   139,     0,     0,    94,     9,     0,     0,     0,
     110,   110,     0,   262,     0,   252,   253,   239,   304,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,   225,   224,   223,     0,    81,     0,     0,
       0,     0,    66,    65,    69,    73,    70,     0,     0,    67,
      54,     0,   215,    97,     0,    22,     0,     9,    96,     0,
       0,     0,     0,     0,   228,   260,   263,     0,   254,     0,
       0,     0,   293,     0,     0,   260,     0,   279,   277,   278,
       0,     0,     0,     0,     0,     0,     9,    43,   241,   242,
     240,     0,   257,     0,   255,   297,   299,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   248,   249,   251,   233,
     234,   235,   236,   237,   238,   250,    56,    58,     0,     0,
       0,    50,    86,    53,     0,     9,    47,    67,    67,     0,
      60,     0,    68,     0,    52,   216,   217,     0,   151,   146,
      55,    10,     0,    24,     9,    93,    95,     0,   101,    29,
      30,     0,     0,   101,   101,     0,   101,     0,   269,     0,
       0,   291,     0,     0,   268,     0,   272,   275,     0,     0,
       0,   270,   271,    11,     0,     0,   258,   256,     0,   298,
     300,     0,     0,     0,     0,     0,    81,    83,    83,    83,
       0,     0,     0,    22,    71,    72,     0,     0,    75,     0,
     215,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,    88,    98,     0,     0,     0,   118,     0,   111,     0,
     101,   119,   126,   101,   127,   261,   295,     0,   294,     0,
       0,     0,     0,     0,     0,     0,    20,   266,   264,     0,
       0,   259,     0,     0,     0,   244,    51,     0,     0,     0,
       0,   133,     0,     0,    24,    63,    61,     0,     0,    59,
      74,     0,   151,   148,     0,     0,     0,     0,     0,   151,
     215,     0,   214,    23,    15,    25,   121,   120,     0,     0,
      31,    32,   115,     0,   114,     0,   100,   125,   292,   296,
       0,   273,     0,     0,   280,   281,     0,     0,    22,   267,
     265,   247,   245,   246,    82,     0,     0,     0,     0,     0,
       0,   129,    76,     0,    62,     0,     0,     0,     0,     0,
       0,   150,   145,   171,   171,   171,   203,   171,   193,   196,
     171,   171,     0,   171,   171,   171,   205,   174,   204,   171,
     174,   171,     0,   171,   174,   194,   195,   202,   171,   174,
       0,     0,   197,   158,     0,    16,    17,    13,     0,     0,
       0,     0,   112,     0,     0,   276,   282,   283,   284,   285,
     288,   289,   290,   287,   286,    18,    21,    24,    84,     0,
       0,     0,   134,   135,     0,     0,   215,     0,     0,   155,
     154,     0,     0,   176,   200,   182,   179,   176,   176,     0,
     176,   176,   176,   175,   179,   176,   179,   176,     0,   176,
     179,   176,   179,     0,     0,   152,    15,    26,   102,   123,
     122,   117,   116,     0,   274,     0,    12,    27,     0,    80,
      79,    78,     0,    77,   147,   156,   157,   153,     0,   188,
     198,   192,   190,   212,     0,   191,   186,   187,   209,   185,
     208,   189,     0,   184,   207,   183,   206,     0,     0,     0,
     165,     0,     0,   169,   160,     0,     0,    14,   113,    19,
       0,     8,    85,   136,     0,   172,   177,   178,     0,     0,
       0,   179,   179,   201,   179,   159,   170,   161,   162,   164,
     163,   168,   167,     0,    28,     0,     0,   181,   213,   210,
     211,   199,     0,   173,   180,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -353,  -353,   702,   861,    32,  -353,   296,   177,  -353,  -353,
    -293,  -352,  -353,  -296,  -353,  -353,   585,   104,   555,  -143,
     459,   -77,  -353,  -353,   145,  -353,  -353,  -353,   339,   415,
      96,   -28,  -353,  -353,  -353,   682,   544,  -353,    68,   144,
     697,   615,   452,   251,  -181,  -353,  -353,  -353,  -353,  -353,
     159,  -353,   353,   348,  -353,  -353,    61,  -191,   -44,  -217,
    -353,   200,  -308,  -353,  -353,  -353,  -353,   648,   -27,  -114,
    -353,  -353,   449,   620
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,   175,   356,   393,   477,   546,   418,
     263,   331,   591,   271,    27,    83,    84,    93,    94,    95,
     171,   152,    96,   168,   253,   169,   249,   379,   380,   241,
     368,   499,    97,    12,    24,    46,   105,    13,   336,    25,
      52,   181,   340,   403,   268,    14,    15,    32,   245,    16,
      38,    17,   325,   326,   327,   535,   513,   524,   559,   560,
     473,   564,   259,   260,    23,    18,    29,    30,   185,   186,
     187,   201,   353,   121
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,   274,    91,   310,   429,  -130,    91,  -132,  -131,   196,
     200,   130,   383,   296,   157,   612,   377,    19,   334,   212,
     374,    47,   431,   255,   250,   191,   280,   108,   192,   281,
     213,   334,   128,   115,   116,   117,   176,   384,   118,   120,
      86,   255,   174,    20,   247,   255,   151,   112,   113,   385,
     596,    87,    48,    41,    28,   161,     6,    89,   109,   153,
     154,   131,   132,   133,   134,   135,   136,   137,   138,   597,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   442,   238,   255,   256,    90,   188,   378,   179,
     438,   439,   189,   248,   160,   239,   195,   295,   202,   203,
     205,   272,    85,   256,   208,   209,   210,   256,   318,   215,
     216,   335,   220,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   405,   497,    36,   545,    54,    55,
      56,    57,    58,    59,   130,   182,    37,   505,   474,   613,
     507,   508,    60,    61,   511,   547,   256,   261,     6,    26,
      62,   180,    31,   410,   161,    42,   579,  -143,   221,    21,
     306,   297,   222,   345,   282,    43,   283,   214,    65,   151,
     193,   193,   109,   375,   288,    66,   381,   129,   382,   580,
      39,   257,   258,    22,   360,    40,     6,   174,    67,    68,
      69,   299,   300,   275,    44,   581,   159,   180,   554,   103,
     312,    54,    55,    56,    57,    58,    59,   240,    88,   265,
     162,   321,   177,    98,    47,    60,    61,   582,  -144,    45,
      99,   322,    72,    62,   100,    54,    55,    56,    57,    58,
      59,     1,   206,   323,   311,   430,   101,   412,   293,    60,
      61,    65,   598,   161,   599,    48,   243,    62,    66,   104,
      49,    92,   346,   347,  -130,    92,  -132,  -131,   350,   156,
      50,    67,    68,    69,   102,    65,   163,   583,   197,   526,
     106,   324,    66,   530,   361,   -64,   122,   313,   532,    51,
     264,   164,   110,   371,   111,    67,    68,    69,   123,   337,
     376,     2,   338,   584,   614,    72,   332,   114,   538,   124,
     165,   125,   394,   395,   411,   585,   397,   568,   389,   570,
       3,   390,   404,   574,   126,   576,   127,   622,   223,    72,
     170,   481,   409,   -96,   482,   413,   607,   608,   609,   610,
     166,   172,   174,   173,    54,    55,    56,    57,    58,    59,
     389,   341,   342,   506,   344,   -96,   104,   178,    60,    61,
     432,     4,   337,   198,   167,   509,    62,    63,   269,   270,
     217,   586,   218,   219,    64,   337,   400,   401,   510,    78,
      79,    80,    81,    82,    65,   184,   548,   224,     6,   549,
     211,    66,   236,   484,   619,   620,   237,   621,   548,   394,
     496,   550,   314,   315,    67,    68,    69,   548,   500,   501,
     551,   502,   503,   337,   369,   370,   553,     5,   406,   242,
     337,   407,   244,   555,   251,    70,    71,     6,   252,   254,
       7,   144,   145,   146,   147,   148,   149,   150,    72,   146,
     147,   148,   149,   150,   119,   337,   337,   262,   556,   557,
     199,    73,    78,    79,    80,    81,    82,   536,   267,   481,
     278,   537,   588,   540,   542,     8,   404,    54,    55,    56,
      57,    58,    59,   284,   286,   287,    78,    79,    80,    81,
      82,    60,    61,   561,   562,   298,   565,   566,   567,    62,
     204,   569,   291,   571,   302,   573,   303,   575,    54,    55,
      56,    57,    58,    59,   304,   594,   600,    65,   595,   601,
     150,   307,    60,    61,    66,   514,   515,   316,   516,   308,
      62,   517,   518,   309,   520,   521,   522,    67,    68,    69,
     525,   317,   527,   600,   529,   593,   602,   337,    65,   531,
     625,   319,    74,    75,    76,    66,   320,    77,   329,   330,
      54,    55,    56,    57,    58,    59,   333,   339,    67,    68,
      69,    72,   334,   352,    60,    61,   355,   357,   358,   365,
     367,   372,    62,   373,   386,   387,   388,   391,   398,    54,
      55,    56,    57,    58,    59,    78,    79,    80,    81,    82,
      65,   399,    72,    60,    61,   414,   415,    66,   416,   417,
     419,    62,    54,    55,    56,    57,    58,    59,   420,   421,
      67,    68,    69,   422,   423,   424,    60,    61,   425,    65,
     426,   427,   428,   433,    62,   396,    66,   479,   436,   437,
     440,    54,    55,    56,    57,    58,    59,   474,   480,    67,
      68,    69,    65,   498,    72,    60,    61,   485,   483,    66,
     504,   512,   519,    62,   402,   523,   528,   552,   533,   558,
     534,   563,    67,    68,    69,   589,   577,   578,   335,   590,
     592,    65,   605,    72,   603,   604,   606,   539,    66,   615,
     611,   616,     6,   143,   144,   145,   146,   147,   148,   149,
     150,    67,    68,    69,   617,   618,    72,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   541,   337,    78,    79,
      80,    81,    82,    54,    55,    56,    57,    58,    59,   623,
     624,    35,   495,   587,   207,    72,   246,    60,    61,   328,
     434,   366,   266,    53,   107,    62,   183,   343,   572,    78,
      79,    80,    81,    82,   543,   435,   155,   441,     0,   354,
     190,     0,     0,    65,   133,   134,   135,   136,   137,   138,
      66,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    67,    68,    69,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,     0,     0,
       0,    78,    79,    80,    81,    82,     0,     0,     0,   131,
     132,   133,   134,   135,   136,   137,   138,    72,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
      78,    79,    80,    81,    82,   134,   135,   136,   137,   138,
       0,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,    78,    79,    80,    81,    82,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
       0,     0,    78,    79,    80,    81,    82,   131,   132,   133,
     134,   135,   136,   137,   138,     0,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   131,
     132,   133,   134,   135,   136,   137,   138,     0,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,     0,     0,    78,    79,    80,    81,    82,     0,
       0,     0,     0,   158,   131,   132,   133,   134,   135,   136,
     137,   138,   285,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   131,   132,   133,   134,   135,
     136,   137,   138,   194,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   273,     0,   276,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,     0,     0,     0,   486,   487,
     488,   489,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,     0,     0,     0,
       0,   544,     2,     0,     0,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,   491,   492,
       0,     3,  -145,  -145,  -145,  -145,   138,   277,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     131,   132,   133,   134,   135,   136,   137,   138,   277,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,     4,     0,     0,     0,     0,     0,     0,   289,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   359,
       0,     0,     0,   362,   363,   364,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,     0,   392,
       0,     0,     0,     0,   290,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     6,     0,
       0,     7,     0,     0,     0,   478,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   493,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,   132,
     133,   134,   135,   136,   137,   138,     8,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   443,
     444,   445,   446,     0,     0,     0,     0,     0,     0,   447,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   448,   449,     0,
       0,     0,     0,   450,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   451,     0,     0,     0,     0,     0,
       0,     0,   452,     0,     0,     0,     0,     0,   453,   132,
     133,   134,   135,   136,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   454,
     455,     0,     0,     0,     0,     0,   119,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   456,   457,
       0,     0,     0,   458,   459,   460,     0,   279,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   461,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   462,     0,   463,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,     0,   465,
     466,   467,   468,   469,     0,     0,     0,     0,     0,   349,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,   471,     0,     0,     0,     0,     0,     0,   472,     0,
       0,     0,     0,   351,   131,   132,   133,   134,   135,   136,
     137,   138,     0,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   131,   132,   133,   134,   135,
     136,   137,   138,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,     0,     0,     0,
       0,     0,     0,   130,     0,   475,     0,     0,     0,     0,
     131,   132,   133,   134,   135,   136,   137,   138,   348,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,     0,     0,     0,     0,     0,     0,     0,   151,   408,
       0,     0,     0,     0,     0,     0,     0,   476,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,     0,
       0,     0,     0,     0,   301,   131,   132,   133,   134,   135,
     136,   137,   138,     0,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150
};

static const yytype_int16 yycheck[] =
{
      27,   182,     3,    20,    20,     3,     3,     3,     3,   123,
     124,     3,   320,     6,    91,   128,   156,   249,   157,     6,
     313,    79,   374,   115,   167,    91,    91,   105,    94,    94,
      17,   157,   105,    60,    61,    62,   228,   116,    65,    66,
       9,   115,   237,    68,   133,   115,    38,   251,   252,   128,
     224,    20,   110,     3,     8,   250,   187,   115,   250,    86,
      87,    10,    11,    12,    13,    14,    15,    16,    17,   243,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,   390,   103,   115,   177,   144,   114,   228,   190,
     386,   387,   119,   182,   190,   115,   123,   211,   125,   126,
     127,   232,   129,   177,   131,   132,   133,   177,   251,   136,
     137,   250,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   250,   418,   249,   239,     3,     4,
       5,     6,     7,     8,     3,   190,   114,   433,   250,   252,
     436,   437,    17,    18,   440,   497,   177,   174,   187,     5,
      25,   252,     8,   102,   250,   105,    17,   249,    33,   184,
     237,   154,    37,   277,   191,   115,   193,   154,    43,    38,
     236,   236,   250,   316,   201,    50,   319,   250,   252,    40,
      21,   251,   252,   208,   298,   207,   187,   237,    63,    64,
      65,   218,   219,   232,   144,    56,    92,   252,   506,    40,
     250,     3,     4,     5,     6,     7,     8,   227,   250,   177,
      62,   106,   108,   249,    79,    17,    18,    78,   249,   169,
     249,   116,    97,    25,    97,     3,     4,     5,     6,     7,
       8,     1,   128,   128,   251,   251,     3,   351,   206,    17,
      18,    43,    52,   250,    54,   110,   253,    25,    50,   251,
     115,   252,   279,   280,   252,   252,   252,   252,   285,   251,
     125,    63,    64,    65,     3,    43,   118,   128,    46,   460,
       3,   166,    50,   464,   301,   127,   252,   245,   469,   144,
     176,   133,     3,   310,     3,    63,    64,    65,   252,   250,
     317,    61,   253,   154,   590,    97,   264,     9,   479,   252,
     152,   252,   329,   330,   253,   166,   333,   524,   250,   526,
      80,   253,   339,   530,   252,   532,   252,   613,   193,    97,
      38,   250,   349,   228,   253,   352,     4,     5,     6,     7,
     182,     3,   237,    26,     3,     4,     5,     6,     7,     8,
     250,   273,   274,   253,   276,   250,   251,     3,    17,    18,
     377,   121,   250,   131,   206,   253,    25,    26,     3,     4,
      13,   222,    15,    16,    33,   250,     3,     4,   253,   244,
     245,   246,   247,   248,    43,     3,   250,   252,   187,   253,
     252,    50,     3,   410,   601,   602,     3,   604,   250,   416,
     417,   253,   247,   248,    63,    64,    65,   250,   426,   427,
     253,   428,   429,   250,   308,   309,   253,   177,   340,   253,
     250,   343,     3,   253,   127,    84,    85,   187,   163,     3,
     190,    24,    25,    26,    27,    28,    29,    30,    97,    26,
      27,    28,    29,    30,   236,   250,   250,   161,   253,   253,
     218,   110,   244,   245,   246,   247,   248,   474,     3,   250,
     253,   478,   253,   480,   481,   225,   483,     3,     4,     5,
       6,     7,     8,   253,   253,   253,   244,   245,   246,   247,
     248,    17,    18,   517,   518,   252,   520,   521,   522,    25,
      26,   525,   253,   527,   252,   529,   252,   531,     3,     4,
       5,     6,     7,     8,   252,   250,   250,    43,   253,   253,
      30,   128,    17,    18,    50,   444,   445,   127,   447,   128,
      25,   450,   451,   128,   453,   454,   455,    63,    64,    65,
     459,   156,   461,   250,   463,   552,   253,   250,    43,   468,
     253,   127,   201,   202,   203,    50,     3,   206,    47,   134,
       3,     4,     5,     6,     7,     8,    20,   252,    63,    64,
      65,    97,   157,   124,    17,    18,   108,   253,   253,   253,
     102,     3,    25,     3,   252,   252,   128,     3,   128,     3,
       4,     5,     6,     7,     8,   244,   245,   246,   247,   248,
      43,     3,    97,    17,    18,   253,   253,    50,    47,   109,
     253,    25,     3,     4,     5,     6,     7,     8,   253,   253,
      63,    64,    65,   253,   253,   127,    17,    18,   252,    43,
     252,   252,    20,   252,    25,    78,    50,   225,   252,   252,
     252,     3,     4,     5,     6,     7,     8,   250,    20,    63,
      64,    65,    43,     3,    97,    17,    18,   253,   252,    50,
       3,   252,   252,    25,    78,    43,   252,    20,   252,     5,
     252,     4,    63,    64,    65,   183,     5,     5,   250,   125,
       3,    43,   154,    97,   253,   253,     4,    78,    50,     5,
     128,   190,   187,    23,    24,    25,    26,    27,    28,    29,
      30,    63,    64,    65,     4,     4,    97,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    78,   250,   244,   245,
     246,   247,   248,     3,     4,     5,     6,     7,     8,   253,
       4,     9,   416,   536,   129,    97,   161,    17,    18,   260,
     381,   306,   178,    26,    42,    25,   111,   275,   528,   244,
     245,   246,   247,   248,   483,   382,    88,   389,    -1,   290,
     120,    -1,    -1,    43,    12,    13,    14,    15,    16,    17,
      50,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    63,    64,    65,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,   244,   245,   246,   247,   248,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    97,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
     244,   245,   246,   247,   248,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   244,   245,   246,   247,   248,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,   244,   245,   246,   247,   248,    10,    11,    12,
      13,    14,    15,    16,    17,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,   244,   245,   246,   247,   248,    -1,
      -1,    -1,    -1,    92,    10,    11,    12,    13,    14,    15,
      16,    17,   105,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,   122,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,     0,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   181,    -1,   183,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   253,    61,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,
      -1,    80,    13,    14,    15,    16,    17,   250,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,   250,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,   121,    -1,    -1,    -1,    -1,    -1,    -1,   250,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,    -1,    -1,   302,   303,   304,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,   328,
      -1,    -1,    -1,    -1,   250,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   187,    -1,
      -1,   190,    -1,    -1,    -1,   250,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,   242,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,   225,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    42,
      43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   122,
     123,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,   142,
      -1,    -1,    -1,   146,   147,   148,    -1,   211,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,
     213,   214,   215,   216,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     233,   234,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,   105,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    39,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    94,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    94,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    36,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,    61,    80,   121,   177,   187,   190,   225,   255,
     256,   257,   287,   291,   299,   300,   303,   305,   319,   249,
      68,   184,   208,   318,   288,   293,   293,   268,     8,   320,
     321,   293,   301,     0,     1,   256,   249,   114,   304,   304,
     207,     3,   105,   115,   144,   169,   289,    79,   110,   115,
     125,   144,   294,   294,     3,     4,     5,     6,     7,     8,
      17,    18,    25,    26,    33,    43,    50,    63,    64,    65,
      84,    85,    97,   110,   201,   202,   203,   206,   244,   245,
     246,   247,   248,   269,   270,   322,     9,    20,   250,   115,
     144,     3,   252,   271,   272,   273,   276,   286,   249,   249,
      97,     3,     3,   304,   251,   290,     3,   289,   105,   250,
       3,     3,   251,   252,     9,   322,   322,   322,   322,   236,
     322,   327,   252,   252,   252,   252,   252,   252,   105,   250,
       3,    10,    11,    12,    13,    14,    15,    16,    17,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    38,   275,   322,   322,   321,   251,   275,   257,   271,
     190,   250,    62,   118,   133,   152,   182,   206,   277,   279,
      38,   274,     3,    26,   237,   258,   228,   271,     3,   190,
     252,   295,   190,   295,     3,   322,   323,   324,   322,   322,
     327,    91,    94,   236,   257,   322,   323,    46,   131,   218,
     323,   325,   322,   322,    26,   322,   271,   270,   322,   322,
     322,   252,     6,    17,   154,   322,   322,    13,    15,    16,
     322,    33,    37,   193,   252,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,     3,     3,   103,   115,
     227,   283,   253,   253,     3,   302,   272,   133,   182,   280,
     273,   127,   163,   278,     3,   115,   177,   251,   252,   316,
     317,   322,   161,   264,   271,   258,   290,     3,   298,     3,
       4,   267,   232,   257,   298,   232,   257,   250,   253,   211,
      91,    94,   322,   322,   253,   105,   253,   253,   322,   250,
     250,   253,   253,   258,   257,   323,     6,   154,   252,   322,
     322,    36,   252,   252,   252,   257,   275,   128,   128,   128,
      20,   251,   250,   258,   278,   278,   127,   156,   273,   127,
       3,   106,   116,   128,   166,   306,   307,   308,   274,    47,
     134,   265,   258,    20,   157,   250,   292,   250,   253,   252,
     296,   292,   292,   296,   292,   323,   322,   322,    94,   211,
     322,   105,   124,   326,   326,   108,   259,   253,   253,   257,
     323,   322,   257,   257,   257,   253,   283,   102,   284,   284,
     284,   322,     3,     3,   264,   273,   322,   156,   228,   281,
     282,   273,   252,   316,   116,   128,   252,   252,   128,   250,
     253,     3,   257,   260,   322,   322,    78,   322,   128,     3,
       3,     4,    78,   297,   322,   250,   292,   292,    94,   322,
     102,   253,   323,   322,   253,   253,    47,   109,   263,   253,
     253,   253,   253,   253,   127,   252,   252,   252,    20,    20,
     251,   265,   322,   252,   282,   306,   252,   252,   267,   267,
     252,   307,   316,    42,    43,    44,    45,    52,    70,    71,
      76,    87,    95,   101,   122,   123,   141,   142,   146,   147,
     148,   172,   190,   192,   209,   212,   213,   214,   215,   216,
     233,   234,   241,   314,   250,    39,    81,   261,   250,   225,
      20,   250,   253,   252,   322,   253,    72,    73,    74,    75,
     111,   112,   113,   241,   242,   260,   322,   264,     3,   285,
     285,   285,   322,   322,     3,   267,   253,   267,   267,   253,
     253,   267,   252,   310,   310,   310,   310,   310,   310,   252,
     310,   310,   310,    43,   311,   310,   311,   310,   252,   310,
     311,   310,   311,   252,   252,   309,   322,   322,   298,    78,
     322,    78,   322,   297,   253,   239,   262,   265,   250,   253,
     253,   253,    20,   253,   316,   253,   253,   253,     5,   312,
     313,   312,   312,     4,   315,   312,   312,   312,   313,   312,
     313,   312,   315,   312,   313,   312,   313,     5,     5,    17,
      40,    56,    78,   128,   154,   166,   222,   261,   253,   183,
     125,   266,     3,   322,   250,   253,   224,   243,    52,    54,
     250,   253,   253,   253,   253,   154,     4,     4,     5,     6,
       7,   128,   128,   252,   267,     5,   190,     4,     4,   313,
     313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   254,   255,   255,   255,   255,   256,   257,   257,   258,
     258,   259,   259,   260,   260,   261,   261,   261,   262,   262,
     263,   263,   264,   264,   265,   265,   265,   266,   266,   267,
     267,   267,   267,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   269,   269,   269,   270,   271,   271,   272,   272,
     273,   273,   273,   273,   274,   274,   275,   275,   275,   276,
     276,   276,   276,   276,   277,   277,   277,   278,   278,   279,
     279,   280,   280,   280,   281,   281,   282,   282,   283,   283,
     283,   283,   284,   284,   285,   285,   286,   256,   287,   288,
     288,   288,   288,   287,   289,   289,   290,   290,   287,   256,
     291,   292,   292,   293,   293,   293,   293,   293,   294,   294,
     295,   295,   296,   296,   297,   297,   297,   297,   291,   291,
     298,   298,   298,   298,   256,   299,   299,   299,   256,   300,
     301,   301,   301,   302,   302,   302,   302,   256,   303,   303,
     304,   304,   256,   305,   305,   305,   305,   305,   305,   306,
     306,   308,   307,   307,   307,   307,   307,   307,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   310,   310,   310,   311,   311,   312,   312,   312,   313,
     313,   313,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   315,   315,   316,   317,   317,   317,   318,   318,
     256,   319,   320,   320,   321,   321,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     323,   323,   324,   324,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   325,   325,   325,
     322,   322,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   322,   322,   322,   322,   327,   327,   322,   322,   322,
     322,   322,   322,   322,   322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     3,     1,     3,    11,     0,
       2,     0,     4,     2,     4,     0,     1,     1,     0,     2,
       0,     2,     0,     3,     0,     2,     4,     0,     2,     1,
       1,     3,     3,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     1,     2,     1,     3,     1,     1,
       3,     5,     3,     3,     1,     0,     2,     1,     0,     5,
       3,     5,     6,     5,     0,     1,     1,     0,     1,     1,
       1,     2,     2,     0,     1,     0,     2,     4,     6,     6,
       6,     0,     2,     0,     1,     3,     3,     1,     7,     2,
       2,     2,     0,     6,     2,     4,     0,     2,     7,     1,
       8,     0,     4,     0,     2,     2,     2,     2,     1,     0,
       0,     3,     3,     5,     1,     1,     3,     3,     7,     7,
       3,     3,     5,     5,     1,     8,     7,     7,     1,     8,
       0,     2,     2,     3,     5,     5,     7,     1,     4,     4,
       0,     2,     1,     8,    10,     9,     6,    11,     8,     1,
       3,     0,     4,     5,     4,     4,     5,     5,     0,     3,
       2,     3,     3,     3,     3,     2,     5,     3,     3,     2,
       3,     0,     3,     5,     0,     1,     0,     2,     2,     0,
       4,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     3,     5,
       2,     4,     1,     1,     1,     1,     3,     3,     3,     3,
       5,     5,     1,     3,     3,     0,     1,     1,     0,     1,
       1,     2,     1,     3,     3,     3,     1,     1,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     5,     6,     6,     6,     3,     3,
       3,     3,     2,     2,     3,     3,     4,     3,     4,     5,
       1,     3,     0,     1,     5,     6,     5,     6,     4,     4,
       4,     4,     4,     6,     8,     4,     7,     1,     1,     1,
       6,     6,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     6,     3,     5,     4,     5,     3,     4,     3,
       4,     1,     1,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* NAME  */
#line 336 "lpmysql.y" /* yacc.c:1257  */
      { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2032 "lpmysql.tab.c" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 336 "lpmysql.y" /* yacc.c:1257  */
      { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2038 "lpmysql.tab.c" /* yacc.c:1257  */
        break;

    case 8: /* USERVAR  */
#line 336 "lpmysql.y" /* yacc.c:1257  */
      { printf ("free at %d %s\n",(*yylocationp).first_line, ((*yyvaluep).strval)); free(((*yyvaluep).strval)); }
#line 2044 "lpmysql.tab.c" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 6:
#line 349 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2332 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 353 "lpmysql.y" /* yacc.c:1646  */
    { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2338 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 357 "lpmysql.y" /* yacc.c:1646  */
    { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2344 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 361 "lpmysql.y" /* yacc.c:1646  */
    { emit("WHERE"); }
#line 2350 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 365 "lpmysql.y" /* yacc.c:1646  */
    { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2356 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 369 "lpmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2362 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 371 "lpmysql.y" /* yacc.c:1646  */
    { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2368 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 374 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2374 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 375 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2380 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 376 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2386 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 379 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2392 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 380 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2398 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 383 "lpmysql.y" /* yacc.c:1646  */
    { emit("HAVING"); }
#line 2404 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 385 "lpmysql.y" /* yacc.c:1646  */
    { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2410 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 388 "lpmysql.y" /* yacc.c:1646  */
    { emit("LIMIT 1"); }
#line 2416 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 389 "lpmysql.y" /* yacc.c:1646  */
    { emit("LIMIT 2"); }
#line 2422 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 393 "lpmysql.y" /* yacc.c:1646  */
    { emit("INTO %d", (yyvsp[0].intval)); }
#line 2428 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 396 "lpmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2434 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 397 "lpmysql.y" /* yacc.c:1646  */
    { lyyerror((yylsp[0]), "string %s found where name required", (yyvsp[0].strval));
                              emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2441 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 399 "lpmysql.y" /* yacc.c:1646  */
    { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2447 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 400 "lpmysql.y" /* yacc.c:1646  */
    { lyyerror((yylsp[0]), "string %s found where name required", (yyvsp[-2].intval));
                            emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2454 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 404 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2460 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 405 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 01) lyyerror((yylsp[0]),"duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2466 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 406 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 02) lyyerror((yylsp[0]),"duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2472 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 407 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 04) lyyerror((yylsp[0]),"duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2478 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 408 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 010) lyyerror((yylsp[0]),"duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2484 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 409 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 020) lyyerror((yylsp[0]),"duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2490 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 410 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 040) lyyerror((yylsp[0]),"duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2496 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 411 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 0100) lyyerror((yylsp[0]),"duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2502 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 412 "lpmysql.y" /* yacc.c:1646  */
    { if((yyval.intval) & 0200) lyyerror((yylsp[0]),"duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2508 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 415 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2514 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 416 "lpmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2520 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 417 "lpmysql.y" /* yacc.c:1646  */
    { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2526 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 422 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2532 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 423 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2538 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 431 "lpmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2544 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 432 "lpmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2551 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 434 "lpmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2557 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 435 "lpmysql.y" /* yacc.c:1646  */
    { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2563 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 442 "lpmysql.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2569 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 443 "lpmysql.y" /* yacc.c:1646  */
    { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2575 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 449 "lpmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 0100+(yyvsp[-3].intval)); }
#line 2581 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 451 "lpmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 0200); }
#line 2587 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 453 "lpmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 0200); }
#line 2593 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 455 "lpmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 0300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2599 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 457 "lpmysql.y" /* yacc.c:1646  */
    { emit("JOIN %d", 0400+(yyvsp[-2].intval)); }
#line 2605 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 460 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2611 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 461 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2617 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 462 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2623 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 465 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2629 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 466 "lpmysql.y" /* yacc.c:1646  */
    {(yyval.intval) = 4; }
#line 2635 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 469 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2641 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 470 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 2647 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 473 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2653 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 474 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2659 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 475 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2665 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 481 "lpmysql.y" /* yacc.c:1646  */
    { emit("ONEXPR"); }
#line 2671 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 482 "lpmysql.y" /* yacc.c:1646  */
    { emit("USING %d", (yyvsp[-1].intval)); }
#line 2677 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 487 "lpmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 010+(yyvsp[-3].intval)); }
#line 2683 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 489 "lpmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 020+(yyvsp[-3].intval)); }
#line 2689 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 491 "lpmysql.y" /* yacc.c:1646  */
    { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 030+(yyvsp[-3].intval)); }
#line 2695 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 495 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2701 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 496 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2707 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 499 "lpmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2713 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 500 "lpmysql.y" /* yacc.c:1646  */
    { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2719 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 503 "lpmysql.y" /* yacc.c:1646  */
    { emit("SUBQUERY"); }
#line 2725 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 508 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2731 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 513 "lpmysql.y" /* yacc.c:1646  */
    { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2737 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 516 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2743 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 517 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2749 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 518 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2755 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 519 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2761 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 525 "lpmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2767 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 527 "lpmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2773 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 529 "lpmysql.y" /* yacc.c:1646  */
    { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2779 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 537 "lpmysql.y" /* yacc.c:1646  */
    { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2785 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 542 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2791 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 548 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)) }
#line 2797 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 552 "lpmysql.y" /* yacc.c:1646  */
    { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2803 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 555 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2809 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 556 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2815 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 557 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2821 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 558 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2827 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 559 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2833 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 566 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2839 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 569 "lpmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2845 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 570 "lpmysql.y" /* yacc.c:1646  */
    { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2851 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 573 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 2857 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 574 "lpmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2863 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 575 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2869 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 576 "lpmysql.y" /* yacc.c:1646  */
    { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2875 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 582 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)) }
#line 2881 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 587 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2887 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 592 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2894 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 595 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-2].strval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2901 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 598 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2908 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 601 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad insert assignment to %s", (yyvsp[-4].intval)); YYERROR; }
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2915 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 606 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2921 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 612 "lpmysql.y" /* yacc.c:1646  */
    { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)) }
#line 2927 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 618 "lpmysql.y" /* yacc.c:1646  */
    { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)) }
#line 2933 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 623 "lpmysql.y" /* yacc.c:1646  */
    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2939 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 627 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 2945 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 634 "lpmysql.y" /* yacc.c:1646  */
    { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2951 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 637 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 2957 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 638 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2963 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 639 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2969 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 644 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2976 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 647 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-4].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2983 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 650 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update assignment to %s", (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2990 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 653 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad update  assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval)); YYERROR; }
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2997 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 660 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3003 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 664 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3009 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 665 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3015 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 668 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3021 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 669 "lpmysql.y" /* yacc.c:1646  */
    { if(!(yyvsp[0].subtok)) { lyyerror((yylsp[0]),"IF EXISTS doesn't exist"); YYERROR; }
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3028 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 675 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3034 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 679 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3040 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 683 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3047 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 689 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3053 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 693 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3059 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 698 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3066 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 703 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3073 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 707 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3079 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 708 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3085 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 711 "lpmysql.y" /* yacc.c:1646  */
    { emit("STARTCOL"); }
#line 3091 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 712 "lpmysql.y" /* yacc.c:1646  */
    { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3097 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 714 "lpmysql.y" /* yacc.c:1646  */
    { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3103 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 715 "lpmysql.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3109 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 716 "lpmysql.y" /* yacc.c:1646  */
    { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3115 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 717 "lpmysql.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3121 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 718 "lpmysql.y" /* yacc.c:1646  */
    { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3127 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 721 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3133 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 722 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3139 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 724 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3145 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 725 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3151 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 726 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3157 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 727 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3163 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 728 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3169 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 729 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3175 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 730 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3181 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 731 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3187 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 732 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3193 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 733 "lpmysql.y" /* yacc.c:1646  */
    { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3199 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 736 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3205 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 737 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3211 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 738 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3217 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 741 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3223 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 742 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 4000; }
#line 3229 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 745 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3235 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 746 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3241 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 747 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3247 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 751 "lpmysql.y" /* yacc.c:1646  */
    { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3253 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 752 "lpmysql.y" /* yacc.c:1646  */
    { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3259 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 756 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3265 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 757 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3271 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 758 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3277 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 759 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3283 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 760 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3289 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 761 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3295 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 762 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3301 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 763 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3307 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 764 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3313 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 765 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3319 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 766 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3325 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 767 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100001; }
#line 3331 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 768 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100002; }
#line 3337 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 769 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100003; }
#line 3343 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 770 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100004; }
#line 3349 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 771 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 100005; }
#line 3355 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 772 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3361 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 773 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3367 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 774 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3373 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 775 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3379 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 776 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160001; }
#line 3385 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 777 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160002; }
#line 3391 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 778 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160003; }
#line 3397 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 779 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 160004; }
#line 3403 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 780 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3409 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 781 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3415 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 782 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3421 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 783 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3427 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 784 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3433 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 785 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3439 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 788 "lpmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3445 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 789 "lpmysql.y" /* yacc.c:1646  */
    { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3451 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 792 "lpmysql.y" /* yacc.c:1646  */
    { emit("CREATESELECT %d", (yyvsp[-2].intval)) }
#line 3457 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 795 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3463 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 796 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3469 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 797 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 2; }
#line 3475 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 800 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0; }
#line 3481 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 801 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1;}
#line 3487 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 806 "lpmysql.y" /* yacc.c:1646  */
    { emit("STMT"); }
#line 3493 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 814 "lpmysql.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].subtok) != 4) { lyyerror((yylsp[-1]),"bad set to @%s", (yyvsp[-2].strval)); YYERROR; }
		 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3500 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 816 "lpmysql.y" /* yacc.c:1646  */
    { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3506 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 821 "lpmysql.y" /* yacc.c:1646  */
    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3512 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 822 "lpmysql.y" /* yacc.c:1646  */
    { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3518 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 823 "lpmysql.y" /* yacc.c:1646  */
    { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 3524 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 824 "lpmysql.y" /* yacc.c:1646  */
    { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3530 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 825 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 3536 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 826 "lpmysql.y" /* yacc.c:1646  */
    { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 3542 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 827 "lpmysql.y" /* yacc.c:1646  */
    { emit("BOOL %d", (yyvsp[0].intval)); }
#line 3548 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 830 "lpmysql.y" /* yacc.c:1646  */
    { emit("ADD"); }
#line 3554 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 831 "lpmysql.y" /* yacc.c:1646  */
    { emit("SUB"); }
#line 3560 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 832 "lpmysql.y" /* yacc.c:1646  */
    { emit("MUL"); }
#line 3566 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 833 "lpmysql.y" /* yacc.c:1646  */
    { emit("DIV"); }
#line 3572 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 834 "lpmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 3578 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 835 "lpmysql.y" /* yacc.c:1646  */
    { emit("MOD"); }
#line 3584 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 836 "lpmysql.y" /* yacc.c:1646  */
    { emit("NEG"); }
#line 3590 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 837 "lpmysql.y" /* yacc.c:1646  */
    { emit("AND"); }
#line 3596 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 838 "lpmysql.y" /* yacc.c:1646  */
    { emit("OR"); }
#line 3602 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 839 "lpmysql.y" /* yacc.c:1646  */
    { emit("XOR"); }
#line 3608 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 840 "lpmysql.y" /* yacc.c:1646  */
    { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 3614 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 841 "lpmysql.y" /* yacc.c:1646  */
    { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 3620 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 842 "lpmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3626 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 843 "lpmysql.y" /* yacc.c:1646  */
    { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3632 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 844 "lpmysql.y" /* yacc.c:1646  */
    { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 3638 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 845 "lpmysql.y" /* yacc.c:1646  */
    { emit("BITOR"); }
#line 3644 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 846 "lpmysql.y" /* yacc.c:1646  */
    { emit("BITAND"); }
#line 3650 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 847 "lpmysql.y" /* yacc.c:1646  */
    { emit("BITXOR"); }
#line 3656 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 848 "lpmysql.y" /* yacc.c:1646  */
    { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 3662 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 849 "lpmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 3668 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 850 "lpmysql.y" /* yacc.c:1646  */
    { emit("NOT"); }
#line 3674 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 851 "lpmysql.y" /* yacc.c:1646  */
    { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3680 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 854 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); }
#line 3686 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 855 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISNULL"); emit("NOT"); }
#line 3692 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 856 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 3698 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 857 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 3704 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 860 "lpmysql.y" /* yacc.c:1646  */
    { emit("BETWEEN"); }
#line 3710 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 864 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3716 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 865 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 3722 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 868 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 0 }
#line 3728 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 872 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 3734 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 873 "lpmysql.y" /* yacc.c:1646  */
    { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 3740 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 874 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSELECT"); }
#line 3746 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 875 "lpmysql.y" /* yacc.c:1646  */
    { emit("INSELECT"); emit("NOT"); }
#line 3752 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 876 "lpmysql.y" /* yacc.c:1646  */
    { emit("EXISTS"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 3758 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 879 "lpmysql.y" /* yacc.c:1646  */
    {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3764 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 883 "lpmysql.y" /* yacc.c:1646  */
    { emit("COUNTALL") }
#line 3770 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 884 "lpmysql.y" /* yacc.c:1646  */
    { emit(" CALL 1 COUNT"); }
#line 3776 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 886 "lpmysql.y" /* yacc.c:1646  */
    {  emit("CALL %d SUBSTR", (yyvsp[-1].intval));}
#line 3782 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 887 "lpmysql.y" /* yacc.c:1646  */
    {  emit("CALL 2 SUBSTR"); }
#line 3788 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 888 "lpmysql.y" /* yacc.c:1646  */
    {  emit("CALL 3 SUBSTR"); }
#line 3794 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 889 "lpmysql.y" /* yacc.c:1646  */
    { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 3800 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 890 "lpmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 TRIM"); }
#line 3806 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 893 "lpmysql.y" /* yacc.c:1646  */
    { emit("INT 1"); }
#line 3812 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 894 "lpmysql.y" /* yacc.c:1646  */
    { emit("INT 2"); }
#line 3818 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 279:
#line 895 "lpmysql.y" /* yacc.c:1646  */
    { emit("INT 3"); }
#line 3824 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 898 "lpmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_ADD"); }
#line 3830 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 281:
#line 899 "lpmysql.y" /* yacc.c:1646  */
    { emit("CALL 3 DATE_SUB"); }
#line 3836 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 282:
#line 902 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 1"); }
#line 3842 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 903 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 2"); }
#line 3848 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 904 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 3"); }
#line 3854 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 905 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 4"); }
#line 3860 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 906 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 5"); }
#line 3866 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 907 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 6"); }
#line 3872 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 908 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 7"); }
#line 3878 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 909 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 8"); }
#line 3884 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 910 "lpmysql.y" /* yacc.c:1646  */
    { emit("NUMBER 9"); }
#line 3890 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 913 "lpmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 3896 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 914 "lpmysql.y" /* yacc.c:1646  */
    { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 3902 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 915 "lpmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 3908 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 916 "lpmysql.y" /* yacc.c:1646  */
    { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 3914 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 919 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = 1; }
#line 3920 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 920 "lpmysql.y" /* yacc.c:1646  */
    { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 3926 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 923 "lpmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); }
#line 3932 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 924 "lpmysql.y" /* yacc.c:1646  */
    { emit("LIKE"); emit("NOT"); }
#line 3938 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 299:
#line 927 "lpmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); }
#line 3944 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 300:
#line 928 "lpmysql.y" /* yacc.c:1646  */
    { emit("REGEXP"); emit("NOT"); }
#line 3950 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 301:
#line 931 "lpmysql.y" /* yacc.c:1646  */
    { emit("NOW") }
#line 3956 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 302:
#line 932 "lpmysql.y" /* yacc.c:1646  */
    { emit("NOW") }
#line 3962 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 933 "lpmysql.y" /* yacc.c:1646  */
    { emit("NOW") }
#line 3968 "lpmysql.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 936 "lpmysql.y" /* yacc.c:1646  */
    { emit("STRTOBIN"); }
#line 3974 "lpmysql.tab.c" /* yacc.c:1646  */
    break;


#line 3978 "lpmysql.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 939 "lpmysql.y" /* yacc.c:1906  */


void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if(yylloc.first_line)
    fprintf(stderr, "%s:%d.%d-%d.%d: error: ", yylloc.filename, yylloc.first_line, yylloc.first_column,
	    yylloc.last_line, yylloc.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");

}

void
lyyerror(YYLTYPE t, char *s, ...)
{
  va_list ap;
  va_start(ap, s);

  if(t.first_line)
    fprintf(stderr, "%s:%d.%d-%d.%d: error: ", t.filename, t.first_line, t.first_column,
	    t.last_line, t.last_column);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1) {
    if((yyin = fopen(av[1], "r")) == NULL) {
      perror(av[1]);
      exit(1);
    }
    filename = av[1];
  } else
    filename = "(stdin)";

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
