
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 3 "Parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
extern int yylineno;
#include "symbol_table.h"
#include "symbol.h"
#include "param.h"
#include "enums_def.h"
#include "type_checks.h"
#include "quadruple.h"
void yyerror(const char *s);
void report_unused(SymbolTable* table);
int yylex(void);
extern FILE *yyin;
SymbolTable *current_scope;
Symbol *current_function = NULL;
Param *current_param = NULL;
int arg_count = 0;
bool param_error = false;
DATATYPE current_type;
KIND current_kind;
char *current_switch_id = NULL;
char *current_func_id = NULL;
int return_count = 0;
int cases[100];
int case_count = 0;
#define MAX_SCOPES 1000
SymbolTable* all_scopes[MAX_SCOPES];
int scope_count=0;


/* Line 189 of yacc.c  */
#line 107 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 36 "Parser.y"

    #include "quadruple.h"
    #include "enums_def.h"
    typedef struct {
        DATATYPE type; 
        char* place;     
        //int quad_idx;    
    } ExprInfo;



/* Line 209 of yacc.c  */
#line 143 "Parser.tab.c"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MINUS = 258,
     PLUS = 259,
     MULTIPLY = 260,
     DIVIDE = 261,
     OPENBRACKET = 262,
     CLOSEDBRACKET = 263,
     INTEGER = 264,
     STRING = 265,
     FLOAT = 266,
     BOOLEAN = 267,
     OPENBRACE = 268,
     CLOSEDBRACE = 269,
     SEMICOLON = 270,
     MOD = 271,
     POWER = 272,
     OPENSQUARE = 273,
     CLOSESQUARE = 274,
     COMMA = 275,
     BOOLTYPE = 276,
     INTTYPE = 277,
     FLOATTYPE = 278,
     STRINGTYPE = 279,
     IDENTIFIER = 280,
     GREATERTHANEQ = 281,
     LESSTHAN = 282,
     GREATERTHAN = 283,
     LESSTHANEQ = 284,
     EQUALITY = 285,
     NOTEQUALITY = 286,
     INCREMENT = 287,
     DECREMENT = 288,
     EQUAL = 289,
     MINUSEQ = 290,
     PLUSEQ = 291,
     MULTIPLYEQ = 292,
     DIVIDEEQ = 293,
     AND = 294,
     OR = 295,
     NOT = 296,
     CONST = 297,
     IF = 298,
     ELSE = 299,
     DOT = 300,
     FOR = 301,
     TO = 302,
     REPEAT = 303,
     UNTIL = 304,
     BREAK = 305,
     CONTINUE = 306,
     WHILE = 307,
     SWITCH = 308,
     CASE = 309,
     DEFAULT = 310,
     RETURN = 311,
     VOIDTYPE = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 45 "Parser.y"

    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;
    Quadruple q;
    ExprInfo info;



/* Line 214 of yacc.c  */
#line 229 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 241 "Parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   491

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    14,    16,    18,    20,
      22,    24,    26,    28,    30,    32,    35,    37,    39,    41,
      43,    45,    48,    51,    54,    56,    60,    64,    68,    72,
      77,    78,    88,    96,    97,   101,   110,   111,   124,   125,
     139,   146,   152,   157,   165,   168,   173,   177,   181,   191,
     200,   201,   207,   211,   213,   217,   219,   221,   223,   225,
     227,   232,   246,   253,   255,   258,   263,   271,   275,   279,
     282,   284,   288,   292,   295,   299,   303,   307,   311,   315,
     319,   323,   327,   331,   335,   339,   343,   346,   349,   353,
     357,   361,   365,   369,   373,   375,   379,   383,   387,   389,
     393,   395,   399,   402,   404,   406,   408,   410,   411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    93,    -1,    65,    -1,    68,    -1,
      78,    -1,    87,    -1,    82,    -1,    75,    -1,    73,    -1,
      81,    -1,    56,    94,    -1,    56,    -1,    22,    -1,    23,
      -1,    21,    -1,    24,    -1,    63,    42,    -1,    63,    66,
      -1,    64,    66,    -1,    25,    -1,    25,    34,    94,    -1,
      25,    34,    12,    -1,    25,    34,    10,    -1,    25,    34,
      91,    -1,    43,     7,    91,     8,    -1,    -1,    67,    13,
      98,    61,    45,    14,    99,    69,    71,    -1,    67,    13,
      98,    61,    45,    14,    99,    -1,    -1,    44,    70,    68,
      -1,    44,    70,    13,    98,    61,    45,    14,    99,    -1,
      -1,    48,    13,    98,    72,    61,    45,    14,    99,    49,
       7,    91,     8,    -1,    -1,    46,     7,    98,    76,    20,
      93,     8,    74,    13,    61,    45,    14,    99,    -1,    22,
      25,    34,    94,    47,    94,    -1,    25,    34,    94,    47,
      94,    -1,    52,     7,    91,     8,    -1,    77,    13,    98,
      61,    45,    14,    99,    -1,    63,    25,    -1,    63,    25,
      20,    79,    -1,    63,    25,     7,    -1,    57,    25,     7,
      -1,    80,    98,    79,     8,    13,    61,    45,    14,    99,
      -1,    80,     8,    13,    98,    61,    45,    14,    99,    -1,
      -1,    25,     7,    83,    84,     8,    -1,    25,     7,     8,
      -1,    85,    -1,    84,    20,    85,    -1,    25,    -1,     9,
      -1,    11,    -1,    10,    -1,    12,    -1,    53,     7,    25,
       8,    -1,    86,    13,    98,    88,    55,    13,    98,    61,
      45,    14,    99,    14,    99,    -1,    86,    13,    98,    88,
      14,    99,    -1,    90,    -1,    90,    88,    -1,    54,     7,
       9,     8,    -1,    89,    13,    98,    61,    45,    14,    99,
      -1,    91,    39,    92,    -1,    91,    40,    92,    -1,    41,
      92,    -1,    92,    -1,    91,    39,    94,    -1,    91,    40,
      94,    -1,    41,    94,    -1,     7,    91,     8,    -1,    94,
      28,    94,    -1,    94,    26,    94,    -1,    94,    27,    94,
      -1,    94,    29,    94,    -1,    94,    30,    12,    -1,    94,
      30,    94,    -1,    94,    31,    12,    -1,    94,    31,    94,
      -1,    25,    34,    94,    -1,    25,    34,    10,    -1,    25,
      34,    91,    -1,    25,    32,    -1,    25,    33,    -1,    25,
      36,    94,    -1,    25,    35,    94,    -1,    25,    37,    94,
      -1,    25,    38,    94,    -1,    94,     4,    95,    -1,    94,
       3,    95,    -1,    95,    -1,    95,     5,    96,    -1,    95,
       6,    96,    -1,    95,    16,    96,    -1,    96,    -1,    97,
      17,    96,    -1,    97,    -1,     7,    94,     8,    -1,     3,
      97,    -1,     9,    -1,    11,    -1,    25,    -1,    82,    -1,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   119,   119,   121,   123,   123,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   147,   163,   164,   165,
     166,   171,   180,   184,   189,   197,   207,   216,   225,   236,
     251,   247,   255,   265,   271,   275,   283,   288,   300,   304,
     318,   338,   360,   369,   380,   394,   410,   429,   450,   465,
     482,   482,   521,   544,   563,   584,   602,   606,   610,   614,
     619,   639,   651,   663,   663,   665,   677,   691,   705,   719,
     733,   738,   755,   772,   791,   792,   809,   826,   843,   860,
     875,   892,   907,   926,   954,   977,   997,  1023,  1049,  1074,
    1099,  1124,  1149,  1174,  1199,  1206,  1228,  1244,  1260,  1264,
    1280,  1284,  1287,  1307,  1311,  1315,  1339,  1352,  1358
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MINUS", "PLUS", "MULTIPLY", "DIVIDE",
  "OPENBRACKET", "CLOSEDBRACKET", "INTEGER", "STRING", "FLOAT", "BOOLEAN",
  "OPENBRACE", "CLOSEDBRACE", "SEMICOLON", "MOD", "POWER", "OPENSQUARE",
  "CLOSESQUARE", "COMMA", "BOOLTYPE", "INTTYPE", "FLOATTYPE", "STRINGTYPE",
  "IDENTIFIER", "GREATERTHANEQ", "LESSTHAN", "GREATERTHAN", "LESSTHANEQ",
  "EQUALITY", "NOTEQUALITY", "INCREMENT", "DECREMENT", "EQUAL", "MINUSEQ",
  "PLUSEQ", "MULTIPLYEQ", "DIVIDEEQ", "AND", "OR", "NOT", "CONST", "IF",
  "ELSE", "DOT", "FOR", "TO", "REPEAT", "UNTIL", "BREAK", "CONTINUE",
  "WHILE", "SWITCH", "CASE", "DEFAULT", "RETURN", "VOIDTYPE", "$accept",
  "Start", "S", "code", "inner_code", "datatype", "const_type",
  "declaration", "inner_declaration", "if_start", "Ifstmt", "$@1",
  "else_place", "else_stmt", "repeat_start", "repeat", "for_loop_start",
  "forloop", "iterator", "while_start", "whileloop", "parameters",
  "function_header", "function", "function_call", "$@2", "list", "item",
  "switch_start", "switchstmt", "case_structure", "start_inner_case",
  "inner_case", "condition", "inner_condition", "assignment", "EXPR", "T",
  "M", "G", "enter_scope", "exit_scope", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    63,
      63,    64,    65,    65,    66,    66,    66,    66,    66,    67,
      69,    68,    68,    70,    71,    71,    72,    73,    74,    75,
      76,    76,    77,    78,    79,    79,    80,    80,    81,    81,
      83,    82,    82,    84,    84,    85,    85,    85,    85,    85,
      86,    87,    87,    88,    88,    89,    90,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    95,    95,    95,    95,    96,
      96,    97,    97,    97,    97,    97,    97,    98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     3,     3,     3,     3,     4,
       0,     9,     7,     0,     3,     8,     0,    12,     0,    13,
       6,     5,     4,     7,     2,     4,     3,     3,     9,     8,
       0,     5,     3,     1,     3,     1,     1,     1,     1,     1,
       4,    13,     6,     1,     2,     4,     7,     3,     3,     2,
       1,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     2,     1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    17,    18,    20,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     2,     0,     4,     0,     0,     7,
       0,     8,    13,    12,     0,     9,   107,    14,    11,     0,
      10,     6,    50,    86,    87,     0,     0,     0,     0,     0,
       0,   107,   107,     0,     0,     0,     0,   103,   104,   105,
     106,    15,    94,    98,   100,     0,     1,     3,    24,    21,
      22,    24,    23,   107,   107,     0,     0,   107,    52,     0,
       0,    84,     0,    85,    70,    83,    89,    88,    90,    91,
       0,     0,     0,    36,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,    47,     5,    46,     0,     0,     0,
     107,     0,     0,     0,    56,    58,    57,    59,    55,     0,
      53,     0,     0,    69,    73,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,    42,    60,
     101,    93,    92,    95,    96,    97,    99,    27,    26,    28,
      25,     0,     0,     0,    44,     0,     0,     0,     0,    63,
      51,     0,    74,    67,    71,    68,    72,    76,    77,    75,
      78,    79,    80,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   108,     0,   107,    64,    54,
       0,     0,     0,     0,     0,   108,   108,     0,    45,     0,
       0,    62,   107,     0,     0,     0,    38,   108,    30,    43,
     108,     0,    65,     0,     0,     0,    41,     0,     0,     0,
      49,   108,     0,     0,    40,     0,     0,    33,    31,    48,
       0,   108,     0,     0,     0,   108,    66,     0,     0,   107,
      34,     0,   108,    37,     0,   108,    39,     0,    61,     0,
     108,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    60,    20,
      21,   209,   224,   218,   127,    22,   207,    23,   126,    24,
      25,   102,    26,    27,    50,    69,   109,   110,    29,    30,
     147,   148,   149,    73,    74,    31,    81,    52,    53,    54,
      66,   191
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -162
static const yytype_int16 yypact[] =
{
     390,  -162,  -162,  -162,  -162,   417,     9,    16,    -6,    34,
      36,   156,    42,    84,  -162,    40,  -162,    -4,    47,  -162,
      77,  -162,  -162,  -162,    78,  -162,    79,  -162,  -162,   109,
    -162,  -162,   115,  -162,  -162,   127,   156,   156,   156,   156,
     137,  -162,  -162,   137,    67,   156,   156,  -162,  -162,   119,
    -162,    52,   150,  -162,   114,   128,  -162,   390,    -1,  -162,
    -162,   107,  -162,  -162,  -162,   129,   243,  -162,  -162,   207,
     137,  -162,   466,    19,  -162,    74,    52,    52,    52,    52,
      14,    74,    -8,  -162,    26,   143,  -162,   113,   156,   156,
     156,   156,   156,   156,  -162,  -162,  -162,   398,   390,   390,
    -162,   133,   145,   100,  -162,  -162,  -162,  -162,  -162,    -7,
    -162,    41,   437,  -162,    74,   466,   466,   156,   156,   156,
     156,   373,   419,  -162,   147,   140,   155,   390,  -162,  -162,
    -162,   150,   150,  -162,  -162,  -162,  -162,  -162,  -162,    19,
      74,   132,   134,   390,   162,   172,   181,    -3,   176,   100,
    -162,   207,  -162,  -162,    74,  -162,    74,    52,    52,    52,
      52,  -162,    52,  -162,    52,   157,   156,   167,   149,    72,
     185,   153,   243,   390,   191,  -162,   192,  -162,  -162,  -162,
     156,     1,   424,   196,   200,  -162,  -162,   237,  -162,   166,
     204,  -162,  -162,   390,    15,   156,  -162,  -162,   184,  -162,
    -162,   249,  -162,   390,   190,   156,    52,   213,   187,   201,
    -162,  -162,   195,   286,    52,   390,   223,  -162,  -162,  -162,
     298,  -162,   199,   137,    27,  -162,  -162,   335,    43,  -162,
    -162,   233,  -162,  -162,   390,  -162,  -162,   205,  -162,   347,
    -162,  -162
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,   -54,   -37,   -58,  -162,  -162,   231,  -162,
      30,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,    83,  -162,  -162,     0,  -162,  -162,   117,  -162,  -162,
     120,  -162,  -162,   -28,   -69,   108,    -9,   -13,   186,   236,
     -32,  -161
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -33
static const yytype_int16 yytable[] =
{
      28,   150,    51,   113,    88,    89,    96,    42,   101,    82,
      83,   175,    80,   151,   124,    84,    40,   125,    88,    89,
      95,    58,   123,    41,   198,   199,    75,    76,    77,    78,
      79,    98,    99,    97,   128,   103,   208,    87,    59,   210,
     229,    43,   111,    44,   141,   142,   153,   155,   195,   152,
     219,   233,   176,   115,   116,    88,    89,    28,   115,   116,
     226,   112,   205,   114,   231,   115,   116,    55,   143,   139,
       6,   236,    61,   168,   238,   131,   132,    88,    89,   241,
     115,   116,   115,   116,    56,    57,   185,    65,   140,   171,
      63,    64,    85,     1,     2,     3,     4,     5,    28,    28,
     117,   118,   119,   120,   121,   122,   154,   156,   157,   158,
     159,   160,   162,   164,   101,     6,    88,    89,     7,   189,
       8,   130,    67,    68,     9,    10,    32,    28,    11,    12,
      45,    93,    95,    95,    70,    94,    47,    71,    48,   204,
      45,    97,   100,    28,    70,   193,    47,    95,    48,   212,
      95,   129,    49,   145,   146,    90,    91,   181,   144,    45,
     203,   222,    49,    46,    95,    47,    92,    48,    72,    28,
      28,   194,   165,    28,   166,   167,    95,   169,    72,   170,
     237,    49,   172,    95,    28,   173,   206,    28,   174,   177,
      95,   180,   182,    28,   184,   228,   214,   234,   187,   186,
     190,    28,    95,    28,   196,   192,     1,     2,     3,     4,
       5,   201,   202,    28,   197,    28,   104,   105,   106,   107,
      28,     1,     2,     3,     4,     5,   215,    28,     6,   -32,
     223,     7,   108,     8,    28,   213,   216,     9,    10,    28,
     220,    11,    12,     6,   227,   217,     7,   235,     8,    62,
     239,   200,     9,    10,   230,   188,    11,    12,     1,     2,
       3,     4,     5,   211,     1,     2,     3,     4,   179,   178,
       1,     2,     3,     4,     5,   183,   133,   134,   135,   136,
       6,    86,     0,     7,     0,     8,     0,     0,     0,     9,
      10,     0,     6,    11,    12,     7,     0,     8,     0,     0,
     221,     9,    10,     0,     0,    11,    12,     1,     2,     3,
       4,     5,   225,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     0,     6,
       0,     0,     7,     0,     8,     0,     0,     0,     9,    10,
       0,     6,    11,    12,     7,     0,     8,     0,     0,   232,
       9,    10,     0,     0,    11,    12,     1,     2,     3,     4,
       5,   240,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     0,     0,     0,    45,     0,     6,     0,
      46,     7,    47,     8,    48,   161,     0,     9,    10,     0,
       6,    11,    12,     7,     0,     8,     0,     0,    49,     9,
      10,    45,     0,    11,    12,    70,     0,    47,   137,    48,
     138,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     0,    45,    49,    32,     0,    46,     0,    47,     0,
      48,   163,     0,     6,     0,     0,     7,     0,     8,    72,
      88,    89,     9,    10,    49,   130,    11,    12,     0,    33,
      34,    35,    36,    37,    38,    39,    33,    34,    35,    36,
      37,    38,    39,   117,   118,   119,   120,   121,   122,    45,
       0,     0,     0,    70,     0,    47,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49
};

static const yytype_int16 yycheck[] =
{
       0,     8,    11,    72,     3,     4,     7,    13,    66,    41,
      42,    14,    40,    20,    22,    43,     7,    25,     3,     4,
      57,    25,     8,     7,   185,   186,    35,    36,    37,    38,
      39,    63,    64,    34,     8,    67,   197,    46,    42,   200,
      13,     7,    70,     7,    98,    99,   115,   116,    47,     8,
     211,     8,    55,    39,    40,     3,     4,    57,    39,    40,
     221,    70,    47,    72,   225,    39,    40,    25,   100,    97,
      43,   232,    25,   127,   235,    88,    89,     3,     4,   240,
      39,    40,    39,    40,     0,    45,    14,     8,    97,   143,
      13,    13,    25,    21,    22,    23,    24,    25,    98,    99,
      26,    27,    28,    29,    30,    31,   115,   116,   117,   118,
     119,   120,   121,   122,   172,    43,     3,     4,    46,   173,
      48,     8,    13,     8,    52,    53,     7,   127,    56,    57,
       3,    17,   169,   170,     7,     7,     9,    10,    11,   193,
       3,    34,    13,   143,     7,   177,     9,   184,    11,   203,
     187,     8,    25,     8,    54,     5,     6,   166,    25,     3,
     192,   215,    25,     7,   201,     9,    16,    11,    41,   169,
     170,   180,    25,   173,    34,    20,   213,    45,    41,    45,
     234,    25,    20,   220,   184,    13,   195,   187,     7,    13,
     227,    34,    25,   193,    45,   223,   205,   229,    45,    14,
       9,   201,   239,   203,     8,    13,    21,    22,    23,    24,
      25,    45,     8,   213,    14,   215,     9,    10,    11,    12,
     220,    21,    22,    23,    24,    25,    13,   227,    43,    45,
       7,    46,    25,    48,   234,    45,    49,    52,    53,   239,
      45,    56,    57,    43,    45,    44,    46,    14,    48,    18,
      45,    14,    52,    53,   224,   172,    56,    57,    21,    22,
      23,    24,    25,    14,    21,    22,    23,    24,   151,   149,
      21,    22,    23,    24,    25,   167,    90,    91,    92,    93,
      43,    45,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    -1,    43,    56,    57,    46,    -1,    48,    -1,    -1,
      14,    52,    53,    -1,    -1,    56,    57,    21,    22,    23,
      24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    43,    56,    57,    46,    -1,    48,    -1,    -1,    14,
      52,    53,    -1,    -1,    56,    57,    21,    22,    23,    24,
      25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    -1,     3,    -1,    43,    -1,
       7,    46,     9,    48,    11,    12,    -1,    52,    53,    -1,
      43,    56,    57,    46,    -1,    48,    -1,    -1,    25,    52,
      53,     3,    -1,    56,    57,     7,    -1,     9,    10,    11,
      12,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    25,     7,    -1,     7,    -1,     9,    -1,
      11,    12,    -1,    43,    -1,    -1,    46,    -1,    48,    41,
       3,     4,    52,    53,    25,     8,    56,    57,    -1,    32,
      33,    34,    35,    36,    37,    38,    32,    33,    34,    35,
      36,    37,    38,    26,    27,    28,    29,    30,    31,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    52,
      53,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      67,    68,    73,    75,    77,    78,    80,    81,    82,    86,
      87,    93,     7,    32,    33,    34,    35,    36,    37,    38,
       7,     7,    13,     7,     7,     3,     7,     9,    11,    25,
      82,    94,    95,    96,    97,    25,     0,    45,    25,    42,
      66,    25,    66,    13,    13,     8,    98,    13,     8,    83,
       7,    10,    41,    91,    92,    94,    94,    94,    94,    94,
      91,    94,    98,    98,    91,    25,    97,    94,     3,     4,
       5,     6,    16,    17,     7,    62,     7,    34,    98,    98,
      13,    63,    79,    98,     9,    10,    11,    12,    25,    84,
      85,    91,    94,    92,    94,    39,    40,    26,    27,    28,
      29,    30,    31,     8,    22,    25,    76,    72,     8,     8,
       8,    95,    95,    96,    96,    96,    96,    10,    12,    91,
      94,    61,    61,    98,    25,     8,    54,    88,    89,    90,
       8,    20,     8,    92,    94,    92,    94,    94,    94,    94,
      94,    12,    94,    12,    94,    25,    34,    20,    61,    45,
      45,    61,    20,    13,     7,    14,    55,    13,    88,    85,
      34,    94,    25,    93,    45,    14,    14,    45,    79,    61,
       9,    99,    13,    98,    94,    47,     8,    14,    99,    99,
      14,    45,     8,    98,    61,    47,    94,    74,    99,    69,
      99,    14,    61,    45,    94,    13,    49,    44,    71,    99,
      45,    14,    61,     7,    70,    14,    99,    45,    91,    13,
      68,    99,    14,     8,    98,    14,    99,    61,    99,    45,
      14,    99
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 121 "Parser.y"
    { printf("Correct Syntax\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 134 "Parser.y"
    {
    if (current_func_id) {
        if (!type_compatible(current_function->type, (yyvsp[(2) - (2)].info).type)) {
            fprintf(stderr, "Line %d: Return type mismatch. Function %s returns %s, but returning %s\n",
                    yylineno, current_func_id, type_name(current_function->type), type_name((yyvsp[(2) - (2)].info).type));
        }

        emit("return", (yyvsp[(2) - (2)].info).place, "", "");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    {
    if (current_func_id) {
        if (current_function->type != SYM_VOID) {
            fprintf(stderr, "Line %d: Function '%s' should return %s, but returned nothing\n",
                    yylineno, current_func_id, type_name(current_function->type));
        }

        emit("return", "", "", "");
        return_count++;
    } else {
        yyerror("Return used outside a function");
    }
;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 163 "Parser.y"
    { (yyval.dtype) = SYM_INT;    current_type = SYM_INT;    current_kind = VAR; ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT;  current_type = SYM_FLOAT;  current_kind = VAR; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    { (yyval.dtype) = SYM_BOOL;   current_type = SYM_BOOL;   current_kind = VAR; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    { (yyval.dtype) = SYM_STRING; current_type = SYM_STRING; current_kind = VAR; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = SYM_CONST; 
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 180 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = VAR;
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (1)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (1)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 197 "Parser.y"
    {
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);   
            emit("=",(yyvsp[(3) - (3)].info).place,"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 207 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 216 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 225 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].info).place,"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 237 "Parser.y"
    {
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: If condition must be boolean\n", yylineno);
    }

    (yyval.i) = nextQuad();
    emit("IfFalse", (yyvsp[(3) - (4)].info).place, "", "");
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 251 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad()+1);
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 259 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 265 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("goto", "", "", "");
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 272 "Parser.y"
    {
        addjump((yyvsp[(2) - (3)].i),nextQuad());
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 278 "Parser.y"
    {
        addjump((yyvsp[(2) - (8)].i),nextQuad());
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 283 "Parser.y"
    {
    (yyval.i) = nextQuad();
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 291 "Parser.y"
    {
        if ((yyvsp[(11) - (12)].info).type != SYM_BOOL) {
             fprintf(stderr, "Line %d: Until condition must be boolean\n", yylineno);
        }
        char label[20];
        sprintf(label, "%d", (yyvsp[(4) - (12)].i)); 
        emit("IfFalse",(yyvsp[(11) - (12)].info).place,"",label);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 300 "Parser.y"
    {
    (yyval.q) = pop_last();
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 307 "Parser.y"
    {
        if ((yyvsp[(4) - (13)].i) != -1) {
            char label[20];
            sprintf(label, "%d", (yyvsp[(4) - (13)].i));
            addQuad((yyvsp[(8) - (13)].q));
            emit("goto","","",label);
            addjump((yyvsp[(4) - (13)].i)+1,nextQuad());
        }
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
    {
    if ((yyvsp[(4) - (6)].info).type != SYM_INT || (yyvsp[(6) - (6)].info).type != SYM_INT) {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }

    if (lookup_current((yyvsp[(2) - (6)].str), current_scope)) {
        fprintf(stderr,"Line %d:iterator %s has been declared before \n",yylineno,(yyvsp[(2) - (6)].str));
        (yyval.i) = -1;
    } else {
        Symbol* s = create_symbol((yyvsp[(2) - (6)].str), SYM_INT, VAR, true, NULL);
        insert(s, current_scope);
        s->used=true;
        emit("=",(yyvsp[(2) - (6)].str),"",(yyvsp[(4) - (6)].info).place); 
        (yyval.i) = nextQuad();
        char *t = newTemp();
        emit(">",(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].info).place,t); 
        emit("IfTrue",t,"","");
    }
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 339 "Parser.y"
    {
    if ((yyvsp[(3) - (5)].info).type != SYM_INT || (yyvsp[(5) - (5)].info).type != SYM_INT) {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }

    Symbol* s = lookup((yyvsp[(1) - (5)].str), current_scope);
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (5)].str));
        (yyval.i) = -1;
    } else {
        s->initialized = true;
        s->used=true;
        emit("=",(yyvsp[(1) - (5)].str),"",(yyvsp[(3) - (5)].info).place);
        (yyval.i) = nextQuad();
        char *t = newTemp();
        emit(">",(yyvsp[(1) - (5)].str),(yyvsp[(5) - (5)].info).place,t); 
        emit("IfTrue",t,"","");
    }
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 360 "Parser.y"
    {
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: While condition must be boolean\n", yylineno);
    }
    (yyval.i) = nextQuad();
    emit("IfFalse",(yyvsp[(3) - (4)].info).place,"","");
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 372 "Parser.y"
    {
        char label[20];
        sprintf(label, "%d", (yyvsp[(1) - (7)].i)); 
        emit("goto","","",label);
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 381 "Parser.y"
    {
    current_type = (yyvsp[(1) - (2)].dtype);
    if (lookup_current((yyvsp[(2) - (2)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Duplicate parameter name %s\n", yylineno, (yyvsp[(2) - (2)].str));
    }
    else
    {
        Symbol *p = create_symbol((yyvsp[(2) - (2)].str), current_type, VAR, true, NULL);
        insert(p, current_scope);
        append_param((yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].dtype), current_function->params);
    }
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 395 "Parser.y"
    {
    current_type = (yyvsp[(1) - (4)].dtype);
    if (lookup_current((yyvsp[(2) - (4)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Duplicate parameter name %s\n", yylineno, (yyvsp[(2) - (4)].str));
    }
    else
    {
        Symbol *p = create_symbol((yyvsp[(2) - (4)].str), current_type, VAR, true, NULL);
        insert(p, current_scope);
        append_param((yyvsp[(2) - (4)].str), (yyvsp[(1) - (4)].dtype), current_function->params);
    }
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 410 "Parser.y"
    {
          
            if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
                fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,(yyvsp[(2) - (3)].str));
            else {
                ParamList* plist = create_param_list();   
                Symbol* f = create_symbol((yyvsp[(2) - (3)].str), (yyvsp[(1) - (3)].dtype), FUNC, true, plist);
                insert(f, current_scope);
                current_function = f;    
                (yyval.i) = nextQuad();
                emit("goto","","",""); 
                emit("func",(yyvsp[(2) - (3)].str),"","");   
                if (!current_func_id) {
                    current_func_id = (yyvsp[(2) - (3)].str);
                } else {
                    yyerror("Nested functions are not allowed");
                } 
            }
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 429 "Parser.y"
    {
        if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
            fprintf(stderr,"Line %d:Function  %s redeclared \n",yylineno,(yyvsp[(2) - (3)].str));
        else {
            ParamList* plist = create_param_list();   
            Symbol* f = create_symbol((yyvsp[(2) - (3)].str), SYM_VOID, FUNC, true, plist);
            insert(f, current_scope);
            current_function = f;   
            (yyval.i) = nextQuad();
            emit("goto","","",""); 
            emit("func",(yyvsp[(2) - (3)].str),"","");   
            if (!current_func_id) {
                current_func_id = (yyvsp[(2) - (3)].str);
                return_count++;
            } else {
                yyerror("Nested functions are not allowed");
            } 
        }
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 454 "Parser.y"
    {
        if (return_count == 0){
            fprintf( stderr,"Line %d:Function %s has no return \n",yylineno,current_func_id);
        } else {
            emit("endFunc",current_func_id, "","");
            addjump((yyvsp[(1) - (9)].i),nextQuad());
            current_func_id = NULL;
            return_count = 0;
        }
    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 469 "Parser.y"
    {
        if (return_count == 0){
            fprintf( stderr,"Line %d:Function %s has no return \n",yylineno,current_func_id);
        } else {
            emit("endFunc",current_func_id, "","");
            addjump((yyvsp[(1) - (8)].i),nextQuad());
            current_func_id = NULL;
            return_count = 0;
        }
    ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 482 "Parser.y"
    {
        Symbol *f = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!f) fprintf(stderr, "Line %d:Function %s not defined \n", yylineno, (yyvsp[(1) - (2)].str));
        else if (f->kind != FUNC) fprintf(stderr, "Line %d:Identifier %s is not a function\n", yylineno, (yyvsp[(1) - (2)].str));
        else {
            current_function = f; 
            current_param = f->params->head; 
            arg_count = 0; 
            param_error = false;
        }
    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 493 "Parser.y"
    {
        if (!param_error && current_param != NULL) {
             fprintf(stderr, "Line %d: Too few arguments for function %s\n", yylineno, (yyvsp[(1) - (5)].str));
             param_error = true;
        }
        
        Symbol* f = lookup((yyvsp[(1) - (5)].str), current_scope); 
        if (f) {
            f->used=true;
            char string_count[20];
            sprintf(string_count, "%d", f->params->count); 
            
            if (f->type == SYM_VOID) {
                emit("call", (yyvsp[(1) - (5)].str), string_count, "");
                (yyval.info).type = SYM_VOID;
                (yyval.info).place = "";
            } else {
                char *t = newTemp();
                emit("call", (yyvsp[(1) - (5)].str), string_count, t);
                (yyval.info).type = f->type;
                (yyval.info).place = t;
            }
        } else {
             (yyval.info).type = SYM_ERROR;
             (yyval.info).place = NULL;
        }
    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 521 "Parser.y"
    {
       Symbol* f = lookup((yyvsp[(1) - (3)].str), current_scope);
       if (!f) fprintf( stderr,"Line %d:Function %s not defined \n",yylineno,(yyvsp[(1) - (3)].str));
       else if (f->kind != FUNC) fprintf(stderr,"Line %d:Identifier %s is not a function\n",yylineno,(yyvsp[(1) - (3)].str));
       else {
           if (f->params->count > 0) fprintf(stderr, "Line %d: Function %s expects arguments\n", yylineno, (yyvsp[(1) - (3)].str));
           
           f->used=true;
           if (f->type == SYM_VOID) {
               emit("call", (yyvsp[(1) - (3)].str), "0", "");
               (yyval.info).type = SYM_VOID;
               (yyval.info).place = "";
           } else {
               char *t = newTemp();
               emit("call", (yyvsp[(1) - (3)].str), "0", t);
               (yyval.info).type = f->type;
               (yyval.info).place = t;
           }
       }
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 544 "Parser.y"
    {
    arg_count++;
    if (!current_param && !param_error) {
        fprintf(stderr, "Line %d: Too many arguments for function %s\n", yylineno, current_function->name);
        param_error = true;
    } 
    else if (current_param && !type_compatible((yyvsp[(1) - (1)].info).type, current_param->type)) {
        if (!param_error) {
            fprintf(stderr, "Line %d: Parameter %d mismatch. Expected %s, got %s\n", 
                    yylineno, arg_count, type_name(current_param->type), type_name((yyvsp[(1) - (1)].info).type));
            param_error = true;
        }
    } else {
        if (current_param) current_param = current_param->next;
        if ((yyvsp[(1) - (1)].info).place && !param_error)
        emit("param", (yyvsp[(1) - (1)].info).place, "", "");
        (yyval.b) = !param_error;
    }
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 563 "Parser.y"
    {
    
    arg_count++;

    if (!current_param && !param_error) {
         fprintf(stderr, "Line %d: Too many arguments\n", yylineno);
         param_error = true;
    } 
    else if (current_param && !type_compatible((yyvsp[(3) - (3)].info).type, current_param->type)) {
         if (!param_error) {
             fprintf(stderr, "Line %d: Parameter mismatch\n", yylineno);
             param_error = true;
         }
    } else {
        if (current_param) current_param = current_param->next;
        if ((yyvsp[(3) - (3)].info).place && !param_error)
        emit("param", (yyvsp[(3) - (3)].info).place, "", "");
        (yyval.b) = !param_error;
    }
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 584 "Parser.y"
    {
    Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    } 
    else {
       if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (1)].str));
        }
        
        s->used = true;
        
        (yyval.info).type = s->type;  
        (yyval.info).place = (yyvsp[(1) - (1)].str);      
    }
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 602 "Parser.y"
    {
    (yyval.info).type = SYM_INT;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 606 "Parser.y"
    {
    (yyval.info).type = SYM_FLOAT;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 610 "Parser.y"
    {
    (yyval.info).type = SYM_STRING;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 614 "Parser.y"
    {
    (yyval.info).type = SYM_BOOL;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 619 "Parser.y"
    {
    Symbol* s= lookup((yyvsp[(3) - (4)].str), current_scope);
    if(!s){
        fprintf(stderr,"Line %d:%s is not declared\n",yylineno, (yyvsp[(3) - (4)].str));
    } 
    else if (!s->initialized) {
        fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(3) - (4)].str));
    }
    else if (s->type != SYM_INT) {
        fprintf(stderr, "Line %d: Switch variable %s must be integer\n", yylineno, (yyvsp[(3) - (4)].str));
    }

    if (!current_switch_id) {
        current_switch_id = (yyvsp[(3) - (4)].str);
        if(s) s->used=true;
    } else {
        yyerror("Nested swtiches are not allowed");
    }
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 644 "Parser.y"
    {
        current_switch_id = NULL;
        int end = nextQuad();
        for (int i = 0; i < case_count; i++)
            addjump(cases[i], end);
        case_count = 0;
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 654 "Parser.y"
    {
    current_switch_id = NULL;
    int end = nextQuad();
    for (int i = 0; i < case_count; i++)
        addjump(cases[i], end);
    case_count = 0;
  ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 665 "Parser.y"
    {
    if (current_switch_id) {
        char *t = newTemp();
        emit("==",current_switch_id,(yyvsp[(3) - (4)].str),t);
        (yyval.i) = nextQuad();
        emit("IfFalse",t,"","");
    } else {
        (yyval.i) = -1;
    }
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 680 "Parser.y"
    {
        if ((yyvsp[(1) - (7)].i) != -1) {
            cases[case_count] = nextQuad();
            case_count++;
            emit("goto", "", "", "");
            addjump((yyvsp[(1) - (7)].i),nextQuad());
        }
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 691 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("and", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 705 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("or", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 719 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("not", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 734 "Parser.y"
    {
   (yyval.info).type = (yyvsp[(1) - (1)].info).type;
   (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 738 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("and", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 755 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("or", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 772 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if ((yyvsp[(2) - (2)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("not", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 791 "Parser.y"
    {(yyval.info)=(yyvsp[(2) - (3)].info);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 792 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && 
        ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) {
            
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit(">", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 809 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && 
        ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) {
            
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit(">=", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 826 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && 
        ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) {
            
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("<", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 843 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && 
        ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) {
            
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("<=", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 860 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_BOOL) {
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("==", (yyvsp[(1) - (3)].info).place, ((yyvsp[(3) - (3)].str) ? "true" : "false"), t); 
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to boolean\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 875 "Parser.y"
    {
    if ( (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) ||
         ((yyvsp[(1) - (3)].info).type == SYM_BOOL && (yyvsp[(3) - (3)].info).type == SYM_BOOL) ) {
             
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        emit("==", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 892 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_BOOL) {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("!=", (yyvsp[(1) - (3)].info).place, ((yyvsp[(3) - (3)].str) ? "true" : "false"), t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to boolean\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 907 "Parser.y"
    {
    if ( (((yyvsp[(1) - (3)].info).type == SYM_INT || (yyvsp[(1) - (3)].info).type == SYM_FLOAT) && ((yyvsp[(3) - (3)].info).type == SYM_INT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT)) ||
         ((yyvsp[(1) - (3)].info).type == SYM_BOOL && (yyvsp[(3) - (3)].info).type == SYM_BOOL) ) {
             
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("!=", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to %s\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type), type_name((yyvsp[(3) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 926 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if (!type_compatible(s->type, (yyvsp[(3) - (3)].info).type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name((yyvsp[(3) - (3)].info).type), type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            s->initialized = true;
            
            emit("=", (yyvsp[(3) - (3)].info).place, "", (yyvsp[(1) - (3)].str)); 
            
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 954 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
        } 
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (!type_compatible(s->type, SYM_STRING)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign string to %s\n", 
                    yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
        } 
        else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].str), "", (yyvsp[(1) - (3)].str));
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 977 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if (!type_compatible(s->type, (yyvsp[(3) - (3)].info).type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name((yyvsp[(3) - (3)].info).type), type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].info).place, "", (yyvsp[(1) - (3)].str));
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 997 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s) {
             fprintf(stderr,"Line %d:Variable %s not declared\n",yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (!s->initialized) {
             fprintf(stderr,"Line %d:Variable %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (s->type != SYM_INT && s->type != SYM_FLOAT) {
             fprintf(stderr, "Line %d: Increment applied to non-numeric type %s\n", 
                     yylineno, type_name(s->type));
             (yyval.info).type = SYM_ERROR;
        }
        else {
             emit("++", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
             (yyval.info).type = s->type;
             (yyval.info).place = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1023 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (2)].str), current_scope);
        if (!s) {
             fprintf(stderr,"Line %d:Variable %s not declared\n",yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (!s->initialized) {
             fprintf(stderr,"Line %d:Variable %s used before initialization\n",yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (s->kind == SYM_CONST) {
             fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (2)].str));
             (yyval.info).type = SYM_ERROR;
        }
        else if (s->type != SYM_INT && s->type != SYM_FLOAT) {
             fprintf(stderr, "Line %d: Decrement applied to non-numeric type %s\n", 
                     yylineno, type_name(s->type));
             (yyval.info).type = SYM_ERROR;
        }
        else {
             emit("--", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
             (yyval.info).type = s->type;
             (yyval.info).place = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1049 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            emit("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1074 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            emit("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1099 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            emit("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
   
    ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1124 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = "error";
        } 
        else {
            emit("/", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1149 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        /* Determine Result Type (Float takes precedence) */
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("+", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1174 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot subtract non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        /* Determine Result Type (Float takes precedence) */
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("-", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1199 "Parser.y"
    { 
    /* Pass through both fields */
    (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1206 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot multiply non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        char *t = newTemp();
        emit("*", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1228 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = "error";
    }
    else {
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        char *t = newTemp();
        emit("/", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1244 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = "error";
    }
    else {
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        char *t = newTemp();
        emit("%%", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1260 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1264 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = "error";
    }
    else {
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        char *t = newTemp();
        emit("^", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1280 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1284 "Parser.y"
    { 
    (yyval.info) = (yyvsp[(2) - (3)].info); 
;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1287 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if ((yyvsp[(2) - (2)].info).type == SYM_INT || (yyvsp[(2) - (2)].info).type == SYM_FLOAT) {
    
        (yyval.info).type = (yyvsp[(2) - (2)].info).type;
        
        char *t = newTemp();
        emit("negative", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Unary minus applied to non-numeric type %s\n", 
                yylineno, type_name((yyvsp[(2) - (2)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1307 "Parser.y"
    { 
    (yyval.info).type = SYM_INT;    
    (yyval.info).place = (yyvsp[(1) - (1)].str);        
;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1311 "Parser.y"
    { 
    (yyval.info).type = SYM_FLOAT; 
    (yyval.info).place = (yyvsp[(1) - (1)].str);        
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1315 "Parser.y"
    { 
    Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
    
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Unsupported type in expression: %s\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (1)].str));
        }
        
        s->used = true;
        
        (yyval.info).type = s->type;  
        (yyval.info).place = (yyvsp[(1) - (1)].str);      
    }
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1339 "Parser.y"
    {
    if ((yyvsp[(1) - (1)].info).type == SYM_VOID) {
        fprintf(stderr, "Line %d: Void function used in expression\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    else {
        (yyval.info).type = (yyvsp[(1) - (1)].info).type;
        (yyval.info).place = (yyvsp[(1) - (1)].info).place;
    }
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1352 "Parser.y"
    {
    current_scope = create_table(211, current_scope);
    all_scopes[scope_count++]= current_scope;
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1358 "Parser.y"
    {
        // SymbolTable* old = current_scope;
        // print_table(current_scope);
        report_unused(current_scope);
        // printf("_____________________________ \n");
        current_scope = current_scope->parent;
        //free_table(old);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 3344 "Parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1368 "Parser.y"


    /* Subroutines */
    void yyerror(const char *s)
{
    extern char *yytext; // Current token text
    fprintf(stderr, "Line %d:Syntax error at '%s': %s\n", yylineno, yytext, s);
}
void report_unused(SymbolTable *table)
{
    for (int i = 0; i < table->size; i++)
    {
        Symbol *s = table->table[i];
        while (s)
        {
            if (!s->used && s->kind == VAR)
            {
                printf("Warning: variable '%s' declared but not used\n", s->name);
            }
            s = s->next;
        }
    }
}
const char* type_to_string(DATATYPE t) {
    switch(t) {
        case SYM_INT: return "int";
        case SYM_FLOAT: return "float";
        case SYM_BOOL: return "bool";
        case SYM_STRING: return "string";
        case SYM_VOID: return "void";
        default: return "unknown";
    }
}

const char* kind_to_string(KIND k) {
    switch(k) {
        case VAR: return "VAR";
        case FUNC: return "FUNC";
        case SYM_CONST: return "CONST";
        default: return "unknown";
    }
}

void print_all_scopes(FILE* out) {
    for (int s = 0; s < scope_count; s++) {
        SymbolTable* table = all_scopes[s];

        fprintf(out, "\nSCOPE %d\n", s);
        fprintf(out, "--------------------------------\n");
        fprintf(out, "Name\tKind\tType\tInit\tUsed\n");

        for (int i = 0; i < table->size; i++) {
            Symbol* sym = table->table[i];
            while (sym) {
                fprintf(out, "%s\t%s\t%s\t%s\t%s\n",
                    sym->name,
                    kind_to_string(sym->kind),
                    type_to_string(sym->type),
                    sym->initialized ? "yes" : "no",
                    sym->used ? "yes" : "no"
                );
                sym = sym->next;
            }
        }
    }
}

void free_all_tables() {
    for (int i = 0; i < scope_count; i++) {
        free_table(all_scopes[i]);
    }
}

int main(int argc, char **argv)
{
    current_scope = create_table(211, NULL);
    all_scopes[scope_count++] = current_scope;
    initQuadTable();

    if (argc < 2) {
        fprintf(stderr, "No input file provided\n");
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        perror("Error opening file");
        return 1;
    }

    if (yyparse() == 0) {
        printf("===== SYMBOL TABLE =====\n");
        print_all_scopes(stdout);

        printf("===== QUADRUPLES =====\n");
        printQuadruples();
        return 0;
    }

    fclose(yyin);
    free_all_tables();
    return 1;
}

