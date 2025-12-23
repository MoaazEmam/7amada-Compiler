
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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 4 "Parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
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
void syntax_error(const char* msg);
#define MAX_SCOPES 1000
SymbolTable* all_scopes[MAX_SCOPES];
int scope_count=0;
bool syn_error=false;


/* Line 189 of yacc.c  */
#line 110 "Parser.tab.c"

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
#line 40 "Parser.y"

    #include "quadruple.h"
    #include "enums_def.h"
    typedef struct {
        DATATYPE type; 
        char* place;     
        //int quad_idx;    
    } ExprInfo;



/* Line 209 of yacc.c  */
#line 146 "Parser.tab.c"

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
#line 49 "Parser.y"

    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;
    Quadruple q;
    ExprInfo info;



/* Line 214 of yacc.c  */
#line 232 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 257 "Parser.tab.c"

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
#define YYFINAL  63
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   693

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNRULES -- Number of states.  */
#define YYNSTATES  316

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
       0,     0,     3,     5,     8,    11,    15,    17,    21,    25,
      32,    34,    36,    38,    40,    42,    44,    46,    48,    50,
      53,    55,    57,    59,    61,    63,    66,    69,    72,    74,
      78,    82,    86,    90,    95,    98,   103,   104,   114,   122,
     125,   133,   134,   138,   147,   150,   159,   160,   173,   176,
     185,   196,   197,   211,   214,   223,   234,   248,   254,   261,
     267,   274,   280,   285,   288,   293,   301,   304,   312,   315,
     320,   323,   328,   333,   337,   341,   345,   355,   364,   370,
     374,   384,   393,   394,   400,   404,   406,   410,   414,   416,
     418,   420,   422,   424,   429,   432,   437,   451,   458,   461,
     475,   482,   484,   487,   492,   495,   500,   508,   511,   519,
     523,   527,   530,   532,   536,   540,   543,   547,   551,   555,
     559,   563,   567,   571,   575,   579,   583,   587,   591,   595,
     599,   603,   607,   611,   615,   619,   622,   625,   629,   633,
     637,   641,   645,   649,   653,   657,   661,   665,   667,   671,
     675,   679,   681,   685,   687,   691,   694,   696,   698,   700,
     702,   703
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    61,     1,
      -1,    61,    45,     1,    -1,    62,    -1,    61,    45,    62,
      -1,    61,     1,    62,    -1,    13,    98,    61,    45,    14,
      99,    -1,    93,    -1,    65,    -1,    68,    -1,    78,    -1,
      87,    -1,    82,    -1,    75,    -1,    73,    -1,    81,    -1,
      56,    94,    -1,    56,    -1,    22,    -1,    23,    -1,    21,
      -1,    24,    -1,    63,    42,    -1,    63,    66,    -1,    64,
      66,    -1,    25,    -1,    25,    34,    94,    -1,    25,    34,
      12,    -1,    25,    34,    10,    -1,    25,    34,    91,    -1,
      43,     7,    91,     8,    -1,    43,     1,    -1,    43,     7,
      91,     1,    -1,    -1,    67,    13,    98,    61,    45,    14,
      99,    69,    71,    -1,    67,    13,    98,    61,    45,    14,
      99,    -1,    67,     1,    -1,    67,    13,    98,    61,    45,
       1,    99,    -1,    -1,    44,    70,    68,    -1,    44,    70,
      13,    98,    61,    45,    14,    99,    -1,    44,     1,    -1,
      44,    70,    13,    98,    61,    45,     1,    99,    -1,    -1,
      48,    13,    98,    72,    61,    45,    14,    99,    49,     7,
      91,     8,    -1,    48,     1,    -1,    48,    13,    98,    72,
      61,    45,     1,    99,    -1,    48,    13,    98,    72,    61,
      45,    14,    99,    49,     1,    -1,    -1,    46,     7,    98,
      76,    20,    93,     8,    74,    13,    61,    45,    14,    99,
      -1,    46,     1,    -1,    46,     7,    98,    76,    20,    93,
       1,    74,    -1,    46,     7,    98,    76,    20,    93,     8,
      74,     1,    99,    -1,    46,     7,    98,    76,    20,    93,
       8,    74,    13,    61,    45,     1,    99,    -1,    46,     7,
      98,    76,     1,    -1,    22,    25,    34,    94,    47,    94,
      -1,    25,    34,    94,    47,    94,    -1,    22,    25,    34,
      94,    47,     1,    -1,    25,    34,    94,    47,     1,    -1,
      52,     7,    91,     8,    -1,    52,     1,    -1,    52,     7,
      91,     1,    -1,    77,    13,    98,    61,    45,    14,    99,
      -1,    77,     1,    -1,    77,    13,    98,    61,    45,     1,
      99,    -1,    63,    25,    -1,    63,    25,    20,    79,    -1,
      63,     1,    -1,    63,     1,    20,    79,    -1,    63,    25,
       1,    79,    -1,    63,    25,     7,    -1,    57,    25,     7,
      -1,    57,    25,     1,    -1,    80,    98,    79,     8,    13,
      61,    45,    14,    99,    -1,    80,     8,    13,    98,    61,
      45,    14,    99,    -1,    80,    98,    79,     8,     1,    -1,
      80,     8,     1,    -1,    80,    98,    79,     8,    13,    61,
      45,     1,    99,    -1,    80,     8,    13,    98,    61,    45,
       1,    99,    -1,    -1,    25,     7,    83,    84,     8,    -1,
      25,     7,     8,    -1,    85,    -1,    84,    20,    85,    -1,
      84,     1,    85,    -1,    25,    -1,     9,    -1,    11,    -1,
      10,    -1,    12,    -1,    53,     7,    25,     8,    -1,    53,
       1,    -1,    53,     7,    25,     1,    -1,    86,    13,    98,
      88,    55,    13,    98,    61,    45,    14,    99,    14,    99,
      -1,    86,    13,    98,    88,    14,    99,    -1,    86,     1,
      -1,    86,    13,    98,    88,    55,    13,    98,    61,    45,
      14,    99,     1,    99,    -1,    86,    13,    98,    88,     1,
      99,    -1,    90,    -1,    90,    88,    -1,    54,     7,     9,
       8,    -1,    54,     1,    -1,    54,     7,     9,     1,    -1,
      89,    13,    98,    61,    45,    14,    99,    -1,    89,     1,
      -1,    89,    13,    98,    61,    45,     1,    99,    -1,    91,
      39,    92,    -1,    91,    40,    92,    -1,    41,    92,    -1,
      92,    -1,    91,    39,    94,    -1,    91,    40,    94,    -1,
      41,    94,    -1,     7,    91,     8,    -1,     7,    91,     1,
      -1,    94,    28,     1,    -1,    94,    27,     1,    -1,    94,
      26,     1,    -1,    94,    29,     1,    -1,    94,    30,     1,
      -1,    94,    31,     1,    -1,    94,    28,    94,    -1,    94,
      26,    94,    -1,    94,    27,    94,    -1,    94,    29,    94,
      -1,    94,    30,    12,    -1,    94,    30,    94,    -1,    94,
      31,    12,    -1,    94,    31,    94,    -1,    25,    34,    94,
      -1,    25,    34,    10,    -1,    25,    34,    91,    -1,    25,
      32,    -1,    25,    33,    -1,    25,    36,    94,    -1,    25,
      35,    94,    -1,    25,    37,    94,    -1,    25,    38,    94,
      -1,    25,    36,     1,    -1,    25,    35,     1,    -1,    25,
      37,     1,    -1,    25,    38,     1,    -1,    94,     4,    95,
      -1,    94,     3,    95,    -1,    95,    -1,    95,     5,    96,
      -1,    95,     6,    96,    -1,    95,    16,    96,    -1,    96,
      -1,    97,    17,    96,    -1,    97,    -1,     7,    94,     8,
      -1,     3,    97,    -1,     9,    -1,    11,    -1,    25,    -1,
      82,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   123,   123,   125,   126,   130,   137,   138,   139,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     170,   186,   187,   188,   189,   194,   203,   207,   212,   220,
     246,   259,   272,   287,   296,   302,   314,   310,   318,   325,
     331,   341,   347,   351,   357,   364,   374,   379,   390,   396,
     404,   413,   417,   429,   435,   441,   448,   457,   465,   485,
     505,   510,   517,   524,   530,   539,   548,   554,   562,   576,
     594,   598,   602,   609,   628,   647,   653,   668,   682,   688,
     694,   699,   707,   707,   746,   769,   788,   808,   813,   831,
     835,   839,   843,   848,   867,   873,   880,   892,   902,   908,
     920,   931,   931,   933,   943,   949,   957,   968,   974,   985,
     999,  1013,  1027,  1032,  1049,  1066,  1085,  1086,  1092,  1098,
    1104,  1110,  1116,  1122,  1128,  1145,  1162,  1179,  1196,  1211,
    1228,  1243,  1262,  1302,  1325,  1345,  1371,  1397,  1435,  1473,
    1511,  1547,  1553,  1559,  1565,  1573,  1607,  1640,  1646,  1679,
    1706,  1733,  1737,  1764,  1768,  1771,  1791,  1795,  1799,  1823,
    1836,  1842
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
       0,    58,    59,    60,    60,    60,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    65,    65,    66,    66,
      66,    66,    66,    67,    67,    67,    69,    68,    68,    68,
      68,    70,    71,    71,    71,    71,    72,    73,    73,    73,
      73,    74,    75,    75,    75,    75,    75,    75,    76,    76,
      76,    76,    77,    77,    77,    78,    78,    78,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    83,    82,    82,    84,    84,    84,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    89,    89,    89,    90,    90,    90,    91,
      91,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      98,    99
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     3,     3,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     3,
       3,     3,     3,     4,     2,     4,     0,     9,     7,     2,
       7,     0,     3,     8,     2,     8,     0,    12,     2,     8,
      10,     0,    13,     2,     8,    10,    13,     5,     6,     5,
       6,     5,     4,     2,     4,     7,     2,     7,     2,     4,
       2,     4,     4,     3,     3,     3,     9,     8,     5,     3,
       9,     8,     0,     5,     3,     1,     3,     3,     1,     1,
       1,     1,     1,     4,     2,     4,    13,     6,     2,    13,
       6,     1,     2,     4,     2,     4,     7,     2,     7,     3,
       3,     2,     1,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     1,     3,     1,     3,     2,     1,     1,     1,     1,
       0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   160,    23,    21,    22,    24,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     2,     0,     6,     0,     0,
      11,     0,    12,    17,    16,     0,    13,   160,    18,    15,
       0,    14,    10,     0,    82,   135,   136,     0,     0,     0,
       0,     0,    34,     0,    53,   160,    48,   160,    63,     0,
      94,     0,     0,     0,   156,   157,   158,   159,    19,   147,
     151,   153,     0,     1,     4,     0,    28,    25,    26,    28,
      27,    39,   160,    66,   160,     0,     0,    98,   160,     0,
      84,     0,     0,   133,     0,   134,   112,   132,   142,   138,
     141,   137,   143,   139,   144,   140,     0,     0,     0,    46,
       0,     0,   155,     0,     0,     0,     0,     0,     0,     0,
      75,    74,     8,     5,     7,    73,     0,     0,     0,    79,
     160,     0,     0,     0,     0,     0,    89,    91,    90,    92,
      88,     0,    85,     0,     0,   111,   115,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    33,     0,     0,     0,
       0,    64,    62,    95,    93,   154,   146,   145,   148,   149,
     150,   152,    31,    30,    32,    29,     0,     0,     0,    70,
       0,     0,     0,     0,     0,   101,   161,     0,    83,     0,
     117,   116,   109,   113,   110,   114,   120,   125,   119,   126,
     118,   124,   121,   127,   122,   128,   129,   123,   130,   131,
       0,     0,    57,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,   104,     0,   161,   161,     0,   107,   160,
     102,     9,    87,    86,     0,     0,     0,     0,     0,   161,
     161,   161,   161,     0,    71,    72,    69,     0,     0,   100,
      97,   160,     0,     0,     0,    51,    51,   161,   161,    40,
      38,    67,    65,   161,   161,     0,   105,   103,     0,     0,
       0,    61,    59,    54,     0,    49,     0,     0,    81,    77,
     161,   161,     0,     0,    60,    58,   161,     0,     0,     0,
      37,    80,    76,     0,   161,   161,    55,     0,    50,     0,
      44,     0,   161,   108,   106,     0,     0,   160,    42,     0,
     161,   161,    47,     0,   161,   161,    56,    52,     0,    99,
      96,     0,   161,   161,    45,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    68,    21,
      22,   267,   291,   280,   150,    23,   263,    24,   149,    25,
      26,   122,    27,    28,    57,    81,   131,   132,    30,    31,
     173,   174,   175,    85,    86,    32,    97,    59,    60,    61,
      33,   221
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
     547,  -167,  -167,  -167,  -167,  -167,   252,   207,   260,    98,
     263,   292,   101,    -5,    51,  -167,    30,  -167,   -13,    18,
    -167,   102,  -167,  -167,  -167,   128,  -167,    53,  -167,  -167,
     174,  -167,  -167,   547,    99,  -167,  -167,   321,   414,   467,
     611,   616,  -167,   360,  -167,  -167,  -167,  -167,  -167,   360,
    -167,    91,   101,   101,  -167,  -167,   124,  -167,    22,   218,
    -167,   119,   293,  -167,   547,    49,    -2,  -167,  -167,   132,
    -167,  -167,  -167,  -167,  -167,   206,   257,  -167,  -167,    34,
    -167,   185,   360,  -167,   232,   160,  -167,   551,  -167,    22,
    -167,    22,  -167,    22,  -167,    22,   112,   551,   158,  -167,
     122,   184,  -167,   332,   101,   101,   101,   101,   101,   101,
    -167,  -167,  -167,  -167,  -167,  -167,   179,   547,   547,  -167,
    -167,     9,   139,   125,   547,   495,  -167,  -167,  -167,  -167,
    -167,   113,  -167,   162,   499,  -167,   551,   232,   232,   623,
     636,   643,   648,   585,   604,  -167,  -167,   178,   210,    89,
     547,  -167,  -167,  -167,  -167,  -167,   218,   218,  -167,  -167,
    -167,  -167,  -167,  -167,   160,   551,    35,    36,   547,   225,
     164,   208,   297,     3,   212,   125,  -167,   185,  -167,   185,
    -167,  -167,  -167,   551,  -167,   551,  -167,    22,  -167,    22,
    -167,    22,  -167,    22,  -167,  -167,    22,  -167,  -167,    22,
     213,   101,  -167,   223,    37,   121,   295,    38,   257,   257,
     257,  -167,   547,  -167,   253,  -167,  -167,   269,  -167,  -167,
    -167,  -167,  -167,  -167,   101,    12,   649,   221,   336,  -167,
    -167,  -167,  -167,   352,  -167,  -167,  -167,    39,   255,  -167,
    -167,  -167,   547,    19,   655,  -167,  -167,  -167,  -167,  -167,
     222,  -167,  -167,  -167,  -167,   389,  -167,  -167,   547,    40,
     668,  -167,    22,  -167,   217,  -167,   216,   258,  -167,  -167,
    -167,  -167,    43,   405,  -167,    22,  -167,   547,   300,    17,
    -167,  -167,  -167,   510,  -167,  -167,  -167,    44,  -167,   360,
    -167,    50,  -167,  -167,  -167,   442,    88,  -167,  -167,    13,
    -167,  -167,  -167,   547,  -167,  -167,  -167,  -167,    46,  -167,
    -167,   458,  -167,  -167,  -167,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,   -31,   -57,   -70,  -167,  -167,   291,  -167,
      23,  -167,  -167,  -167,  -167,  -167,    66,  -167,  -167,  -167,
    -167,   146,  -167,  -167,     0,  -167,  -167,  -166,  -167,  -167,
     140,  -167,  -167,   -40,   -60,   120,    16,   127,   582,   275,
     -26,    21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      29,    76,    79,    96,   215,   115,   121,   112,   114,   100,
     169,   222,    66,   223,   304,   104,   105,   216,   290,    98,
      62,    99,   104,   105,   135,   104,   105,   305,    58,    67,
     -41,    64,   116,    29,   170,   124,   124,   124,   124,   124,
     124,   124,   133,    69,   124,   124,   117,   124,   118,    -3,
     113,    63,   123,    87,    89,    91,    93,    95,   217,   244,
     -41,    75,     1,   297,    29,    29,   260,   112,   114,   103,
       2,     3,     4,     5,     6,    65,   164,   182,   184,   125,
     205,   206,   228,   233,   255,   273,   166,   167,   283,   295,
     202,   311,     7,     7,   168,     8,   302,     9,   134,    46,
     136,    10,    11,    71,    52,    12,    13,    80,    53,   203,
      54,    47,    55,   145,   177,    72,   101,    29,    29,   204,
     146,   178,   229,   151,    29,    29,    56,   137,   138,    73,
     152,    34,   165,   179,     1,   230,   109,   207,   121,   121,
     121,    74,     2,     3,     4,     5,     6,   171,   114,   114,
      29,   137,   138,   183,   185,   187,   189,   191,   193,   196,
     199,   137,   138,   180,     7,   209,   116,     8,    29,     9,
     181,   114,   -68,    10,    11,    77,   114,    12,    13,   172,
     147,   237,    52,   148,   210,   153,    82,    78,    54,   162,
      55,   163,   154,   242,   126,   127,   128,   129,   114,   137,
     138,   137,   138,   200,    56,    29,    29,   119,    42,   211,
     130,   259,    29,   218,    43,   258,   114,   225,   276,   120,
      84,   212,   245,   106,   107,   219,   114,   272,    29,   246,
     277,   156,   157,    29,   108,    52,   239,   240,   114,    82,
     243,    54,    29,    55,   201,   208,   287,   224,   226,   296,
     249,   250,   251,   252,   114,    29,   256,    56,    29,    34,
     262,    44,   238,   257,    48,   278,   -36,    45,   265,   266,
      49,   303,   308,    29,   268,   269,   275,    29,     2,     3,
       4,     5,   241,    29,    35,    36,    37,    38,    39,    40,
      41,   281,   282,    50,   110,    29,   231,   286,   213,    51,
     111,   288,   279,    29,   214,   293,   294,   289,     1,   232,
      70,    29,   264,   299,   298,   220,     2,     3,     4,     5,
       6,   306,   307,   227,    52,   309,   310,   102,    82,     0,
      54,    83,    55,   314,   315,   104,   105,   247,     7,     0,
     155,     8,     0,     9,     0,     0,    56,    10,    11,     1,
     248,    12,    13,   253,   234,   235,   236,     2,     3,     4,
       5,     6,    84,    52,     0,     1,   254,    82,     0,    54,
       0,    55,     0,     2,     3,     4,     5,     6,     0,     7,
       0,     0,     8,     0,     9,    56,     0,     0,    10,    11,
     270,     0,    12,    13,     0,     7,     0,     0,     8,     0,
       9,    84,     1,   271,    10,    11,   284,     0,    12,    13,
       2,     3,     4,     5,     6,    88,     0,    52,     1,   285,
       0,    53,     0,    54,     0,    55,     2,     3,     4,     5,
       6,     0,     7,     0,     0,     8,     0,     9,     0,    56,
       0,    10,    11,   300,     0,    12,    13,     0,     7,     0,
       0,     8,     0,     9,     0,     1,   301,    10,    11,   312,
       0,    12,    13,     2,     3,     4,     5,     6,    90,     0,
      52,     1,   313,     0,    53,     0,    54,     0,    55,     2,
       3,     4,     5,     6,     0,     7,     0,     0,     8,     0,
       9,     0,    56,     0,    10,    11,     0,     0,    12,    13,
       0,     7,   104,   105,     8,     0,     9,   155,     1,   176,
      10,    11,     0,     0,    12,    13,     2,     3,     4,     5,
       6,     0,     0,     1,   292,   139,   140,   141,   142,   143,
     144,     2,     3,     4,     5,     6,     0,     0,     7,     0,
       0,     8,     0,     9,     0,     0,     0,    10,    11,     0,
       0,    12,    13,     7,   104,   105,     8,     0,     9,     0,
       1,     0,    10,    11,     0,     0,    12,    13,     2,     3,
       4,     5,     6,     0,     0,     0,     0,   139,   140,   141,
     142,   143,   144,     0,     0,     0,   194,     0,    52,     0,
       7,     0,    53,     8,    54,     9,    55,   195,     0,    10,
      11,     0,     0,    12,    13,   197,     0,    52,     0,     0,
      56,    53,    92,    54,    52,    55,   198,    94,    53,    52,
      54,     0,    55,    53,   186,    54,    52,    55,     0,    56,
      53,     0,    54,     0,    55,     0,    56,   188,     0,    52,
       0,    56,     0,    53,   190,    54,    52,    55,    56,   192,
      53,    52,    54,     0,    55,    53,   261,    54,    52,    55,
       0,    56,    53,     0,    54,     0,    55,     0,    56,   274,
       0,    52,     0,    56,     0,    53,     0,    54,     0,    55,
      56,    35,    36,    37,    38,    39,    40,    41,   158,   159,
     160,   161,     0,    56
};

static const yytype_int16 yycheck[] =
{
       0,    27,    33,    43,     1,     7,    76,    64,    65,    49,
       1,   177,    25,   179,     1,     3,     4,    14,     1,    45,
      25,    47,     3,     4,    84,     3,     4,    14,    12,    42,
      13,     1,    34,    33,    25,     1,     1,     1,     1,     1,
       1,     1,    82,    25,     1,     1,    72,     1,    74,     0,
       1,     0,    78,    37,    38,    39,    40,    41,    55,    47,
      43,     8,    13,    13,    64,    65,    47,   124,   125,    53,
      21,    22,    23,    24,    25,    45,   116,   137,   138,    45,
      45,    45,    45,    45,    45,    45,   117,   118,    45,    45,
       1,    45,    43,    43,   120,    46,     8,    48,    82,     1,
      84,    52,    53,     1,     3,    56,    57,     8,     7,    20,
       9,    13,    11,     1,     1,    13,    25,   117,   118,   150,
       8,     8,     1,     1,   124,   125,    25,    39,    40,     1,
       8,     7,   116,    20,    13,    14,    17,   168,   208,   209,
     210,    13,    21,    22,    23,    24,    25,     8,   205,   206,
     150,    39,    40,   137,   138,   139,   140,   141,   142,   143,
     144,    39,    40,     1,    43,     1,    34,    46,   168,    48,
       8,   228,     8,    52,    53,     1,   233,    56,    57,    54,
      22,   212,     3,    25,    20,     1,     7,    13,     9,    10,
      11,    12,     8,   219,     9,    10,    11,    12,   255,    39,
      40,    39,    40,    25,    25,   205,   206,     1,     1,     1,
      25,   242,   212,     1,     7,   241,   273,   201,     1,    13,
      41,    13,     1,     5,     6,    13,   283,   258,   228,     8,
      13,   104,   105,   233,    16,     3,   215,   216,   295,     7,
     224,     9,   242,    11,    34,    20,   277,    34,    25,   289,
     229,   230,   231,   232,   311,   255,     1,    25,   258,     7,
     244,     1,     9,     8,     1,    49,    44,     7,   247,   248,
       7,   297,   303,   273,   253,   254,   260,   277,    21,    22,
      23,    24,    13,   283,    32,    33,    34,    35,    36,    37,
      38,   270,   271,     1,     1,   295,     1,   276,     1,     7,
       7,     1,    44,   303,     7,   284,   285,     7,    13,    14,
      19,   311,   246,   292,   291,   175,    21,    22,    23,    24,
      25,   300,   301,   203,     3,   304,   305,    52,     7,    -1,
       9,    10,    11,   312,   313,     3,     4,     1,    43,    -1,
       8,    46,    -1,    48,    -1,    -1,    25,    52,    53,    13,
      14,    56,    57,     1,   208,   209,   210,    21,    22,    23,
      24,    25,    41,     3,    -1,    13,    14,     7,    -1,     9,
      -1,    11,    -1,    21,    22,    23,    24,    25,    -1,    43,
      -1,    -1,    46,    -1,    48,    25,    -1,    -1,    52,    53,
       1,    -1,    56,    57,    -1,    43,    -1,    -1,    46,    -1,
      48,    41,    13,    14,    52,    53,     1,    -1,    56,    57,
      21,    22,    23,    24,    25,     1,    -1,     3,    13,    14,
      -1,     7,    -1,     9,    -1,    11,    21,    22,    23,    24,
      25,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,    25,
      -1,    52,    53,     1,    -1,    56,    57,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    13,    14,    52,    53,     1,
      -1,    56,    57,    21,    22,    23,    24,    25,     1,    -1,
       3,    13,    14,    -1,     7,    -1,     9,    -1,    11,    21,
      22,    23,    24,    25,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    25,    -1,    52,    53,    -1,    -1,    56,    57,
      -1,    43,     3,     4,    46,    -1,    48,     8,    13,    14,
      52,    53,    -1,    -1,    56,    57,    21,    22,    23,    24,
      25,    -1,    -1,    13,    14,    26,    27,    28,    29,    30,
      31,    21,    22,    23,    24,    25,    -1,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,    -1,
      -1,    56,    57,    43,     3,     4,    46,    -1,    48,    -1,
      13,    -1,    52,    53,    -1,    -1,    56,    57,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,     1,    -1,     3,    -1,
      43,    -1,     7,    46,     9,    48,    11,    12,    -1,    52,
      53,    -1,    -1,    56,    57,     1,    -1,     3,    -1,    -1,
      25,     7,     1,     9,     3,    11,    12,     1,     7,     3,
       9,    -1,    11,     7,     1,     9,     3,    11,    -1,    25,
       7,    -1,     9,    -1,    11,    -1,    25,     1,    -1,     3,
      -1,    25,    -1,     7,     1,     9,     3,    11,    25,     1,
       7,     3,     9,    -1,    11,     7,     1,     9,     3,    11,
      -1,    25,     7,    -1,     9,    -1,    11,    -1,    25,     1,
      -1,     3,    -1,    25,    -1,     7,    -1,     9,    -1,    11,
      25,    32,    33,    34,    35,    36,    37,    38,   106,   107,
     108,   109,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    21,    22,    23,    24,    25,    43,    46,    48,
      52,    53,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    67,    68,    73,    75,    77,    78,    80,    81,    82,
      86,    87,    93,    98,     7,    32,    33,    34,    35,    36,
      37,    38,     1,     7,     1,     7,     1,    13,     1,     7,
       1,     7,     3,     7,     9,    11,    25,    82,    94,    95,
      96,    97,    25,     0,     1,    45,    25,    42,    66,    25,
      66,     1,    13,     1,    13,     8,    98,     1,    13,    61,
       8,    83,     7,    10,    41,    91,    92,    94,     1,    94,
       1,    94,     1,    94,     1,    94,    91,    94,    98,    98,
      91,    25,    97,    94,     3,     4,     5,     6,    16,    17,
       1,     7,    62,     1,    62,     7,    34,    98,    98,     1,
      13,    63,    79,    98,     1,    45,     9,    10,    11,    12,
      25,    84,    85,    91,    94,    92,    94,    39,    40,    26,
      27,    28,    29,    30,    31,     1,     8,    22,    25,    76,
      72,     1,     8,     1,     8,     8,    95,    95,    96,    96,
      96,    96,    10,    12,    91,    94,    61,    61,    98,     1,
      25,     8,    54,    88,    89,    90,    14,     1,     8,    20,
       1,     8,    92,    94,    92,    94,     1,    94,     1,    94,
       1,    94,     1,    94,     1,    12,    94,     1,    12,    94,
      25,    34,     1,    20,    61,    45,    45,    61,    20,     1,
      20,     1,    13,     1,     7,     1,    14,    55,     1,    13,
      88,    99,    85,    85,    34,    94,    25,    93,    45,     1,
      14,     1,    14,    45,    79,    79,    79,    61,     9,    99,
      99,    13,    98,    94,    47,     1,     8,     1,    14,    99,
      99,    99,    99,     1,    14,    45,     1,     8,    98,    61,
      47,     1,    94,    74,    74,    99,    99,    69,    99,    99,
       1,    14,    61,    45,     1,    94,     1,    13,    49,    44,
      71,    99,    99,    45,     1,    14,    99,    61,     1,     7,
       1,    70,    14,    99,    99,    45,    91,    13,    68,    99,
       1,    14,     8,    98,     1,    14,    99,    99,    61,    99,
      99,    45,     1,    14,    99,    99
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
     `$$ = $1'.

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
        case 3:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    { printf("Correct Syntax\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 126 "Parser.y"
    {
    syntax_error("Missing '.' at the end of statement");
    yyerrok;
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 130 "Parser.y"
    { 
    syntax_error("Extra '.' or more after statement");
    while(yychar!= DOT)
        yychar=yylex();
    yyerrok;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 139 "Parser.y"
    {
    syntax_error("Missing '.' at the end of statement");
    while (yychar != DOT && yychar != 0) 
        yychar = yylex();
    yyerrok;
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 157 "Parser.y"
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

  case 20:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
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

  case 21:

/* Line 1455 of yacc.c  */
#line 186 "Parser.y"
    { (yyval.dtype) = SYM_INT;    current_type = SYM_INT;    current_kind = VAR; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 187 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT;  current_type = SYM_FLOAT;  current_kind = VAR; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 188 "Parser.y"
    { (yyval.dtype) = SYM_BOOL;   current_type = SYM_BOOL;   current_kind = VAR; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    { (yyval.dtype) = SYM_STRING; current_type = SYM_STRING; current_kind = VAR; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 194 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = SYM_CONST; 
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = VAR;
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 212 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (1)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (1)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 220 "Parser.y"
    {
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);   
            if (!type_compatible(current_type, (yyvsp[(3) - (3)].info).type)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got %s\n", 
                         yylineno, type_name(current_type), type_name((yyvsp[(3) - (3)].info).type));
            }
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (current_type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("=", t3, "", (yyvsp[(1) - (3)].str)); 
        }
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            if(!type_compatible(current_type, SYM_BOOL)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got boolean\n", 
                         yylineno, type_name(current_type));
            }
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 259 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            if(!type_compatible(current_type, SYM_STRING)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got STRING\n", 
                         yylineno, type_name(current_type));
            }
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].str),"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 272 "Parser.y"
    { 
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            if (!type_compatible(current_type, (yyvsp[(3) - (3)].info).type)) {
                 fprintf(stderr, "Line %d: Type mismatch in declaration. Expected %s, got %s\n", 
                         yylineno, type_name(current_type), type_name((yyvsp[(3) - (3)].info).type));
            }
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].info).place,"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 288 "Parser.y"
    {
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: If condition must be boolean\n", yylineno);
    }

    (yyval.i) = nextQuad();
    emit("IfFalse", (yyvsp[(3) - (4)].info).place, "", "");
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
    {
    syntax_error("Missing '(' after 'law'");
        while (yychar != DOT && yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 302 "Parser.y"
    {
        syntax_error("Missing ')' after 'law' condition");
        while (yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 314 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad()+1);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 325 "Parser.y"
    {
    syntax_error("Missing '{' after 'law' condition");
        while (yychar != ELSE && yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 333 "Parser.y"
    {
        syntax_error("Missing '}' after 'law' block");
        while (yychar != ELSE && yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 341 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("goto", "", "", "");
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 348 "Parser.y"
    {
        addjump((yyvsp[(2) - (3)].i),nextQuad());
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 354 "Parser.y"
    {
        addjump((yyvsp[(2) - (8)].i),nextQuad());
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 358 "Parser.y"
    {
        syntax_error("Missing a brace or more after 'tayeb'");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 366 "Parser.y"
    {
    syntax_error("Missing '}' after 'tayeb' block");
    while (yychar != DOT && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 374 "Parser.y"
    {
    (yyval.i) = nextQuad();
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 382 "Parser.y"
    {
        if ((yyvsp[(11) - (12)].info).type != SYM_BOOL) {
             fprintf(stderr, "Line %d: Until condition must be boolean\n", yylineno);
        }
        char label[20];
        sprintf(label, "%d", (yyvsp[(4) - (12)].i)); 
        emit("IfFalse",(yyvsp[(11) - (12)].info).place,"",label);
    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 390 "Parser.y"
    {
    syntax_error("Missing '{' after 'e3mel'");
    while (yychar != DOT && yychar != UNTIL && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 398 "Parser.y"
    {
    syntax_error("Missing '}' after 'e3mel' block");
    while (yychar != UNTIL && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 407 "Parser.y"
    {
    syntax_error("Missing '(' or ')' after 'lehad'");
    while (yychar != 0 &&yychar != CLOSEDBRACKET)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 413 "Parser.y"
    {
    (yyval.q) = pop_last();
;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 420 "Parser.y"
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

  case 53:

/* Line 1455 of yacc.c  */
#line 429 "Parser.y"
    {
    syntax_error("Missing '(' after 'karar'");
    while (yychar != 0 && yychar != CLOSEDBRACKET)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 435 "Parser.y"
    {
    syntax_error("Missing ')' in 'karar' loop");
    while (yychar != 0 && yychar != OPENBRACE)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 442 "Parser.y"
    {
    syntax_error("Missing '{' after 'karar' loop header");
    while (yychar != 0 && yychar != DOT && yychar != CLOSEDBRACE)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 451 "Parser.y"
    {
    syntax_error("Missing '}' in 'karar' loop body");
    while (yychar != 0 && yychar != DOT)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 457 "Parser.y"
    {
        syntax_error("Missing ',' between iterator and assignment in 'karar' loop");
        while (yychar != 0 && yychar != CLOSEDBRACKET)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 466 "Parser.y"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 486 "Parser.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 505 "Parser.y"
    {
        syntax_error("Invalid upper bound in for loop");
        (yyval.i) = -1;
        yyerrok;
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 510 "Parser.y"
    {
        syntax_error("Invalid upper bound in for loop");
        (yyval.i) = -1;
        yyerrok;
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 517 "Parser.y"
    {
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: While condition must be boolean\n", yylineno);
    }
    (yyval.i) = nextQuad();
    emit("IfFalse",(yyvsp[(3) - (4)].info).place,"","");
;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 524 "Parser.y"
    {
        syntax_error("Missing '(' after 'tol_ma'");
        while (yychar != 0 && yychar != CLOSEDBRACKET && yychar != OPENBRACE)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 530 "Parser.y"
    {
        syntax_error("Missing ')' after 'tol_ma' condition");
        while (yychar != 0 && yychar != OPENBRACE)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 542 "Parser.y"
    {
        char label[20];
        sprintf(label, "%d", (yyvsp[(1) - (7)].i)); 
        emit("goto","","",label);
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 548 "Parser.y"
    {
        syntax_error("Missing '{' after 'tol_ma' condition");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 554 "Parser.y"
    {
        syntax_error("Missing '}' after 'tol_ma' block");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 563 "Parser.y"
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

  case 69:

/* Line 1455 of yacc.c  */
#line 577 "Parser.y"
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

  case 70:

/* Line 1455 of yacc.c  */
#line 594 "Parser.y"
    {
        syntax_error("Missing parameter name after type");
        yyerrok;
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 598 "Parser.y"
    {
        syntax_error("Missing parameter name after type");
        yyerrok;
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 602 "Parser.y"
    {
        syntax_error("Missing ',' between parameters");
        yyerrok;
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 609 "Parser.y"
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

  case 74:

/* Line 1455 of yacc.c  */
#line 628 "Parser.y"
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

  case 75:

/* Line 1455 of yacc.c  */
#line 647 "Parser.y"
    {
        syntax_error("Missing '(' in function declaration");
        yyerrok;
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 657 "Parser.y"
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

  case 77:

/* Line 1455 of yacc.c  */
#line 672 "Parser.y"
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

  case 78:

/* Line 1455 of yacc.c  */
#line 682 "Parser.y"
    {
        syntax_error("Missing '{' after function header");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 688 "Parser.y"
    {
        syntax_error("Missing '{' after function header");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 695 "Parser.y"
    {
        syntax_error("Missing '}' at end of function");
        yyerrok;
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 700 "Parser.y"
    {
        syntax_error("Missing '}' at end of function");
        yyerrok;
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 707 "Parser.y"
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

  case 83:

/* Line 1455 of yacc.c  */
#line 718 "Parser.y"
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

  case 84:

/* Line 1455 of yacc.c  */
#line 746 "Parser.y"
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

  case 85:

/* Line 1455 of yacc.c  */
#line 769 "Parser.y"
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

  case 86:

/* Line 1455 of yacc.c  */
#line 788 "Parser.y"
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

  case 87:

/* Line 1455 of yacc.c  */
#line 808 "Parser.y"
    {
    syntax_error("Missing ','");
    yyerrok;
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 813 "Parser.y"
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

  case 89:

/* Line 1455 of yacc.c  */
#line 831 "Parser.y"
    {
    (yyval.info).type = SYM_INT;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 835 "Parser.y"
    {
    (yyval.info).type = SYM_FLOAT;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 839 "Parser.y"
    {
    (yyval.info).type = SYM_STRING;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 843 "Parser.y"
    {
    (yyval.info).type = SYM_BOOL;
    (yyval.info).place = (yyvsp[(1) - (1)].str);
;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 848 "Parser.y"
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

  case 94:

/* Line 1455 of yacc.c  */
#line 867 "Parser.y"
    {
        syntax_error("Missing '(' after 'switch'");
        while (yychar != 0 && yychar != CLOSEDBRACKET && yychar != OPENBRACE)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 873 "Parser.y"
    {
    syntax_error("Missing ')' after 'switch' condition");
        while (yychar != 0 && yychar != OPENBRACE)
        yychar = yylex();
        yyerrok;
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 885 "Parser.y"
    {
        current_switch_id = NULL;
        int end = nextQuad();
        for (int i = 0; i < case_count; i++)
            addjump(cases[i], end);
        case_count = 0;
    ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 895 "Parser.y"
    {
    current_switch_id = NULL;
    int end = nextQuad();
    for (int i = 0; i < case_count; i++)
        addjump(cases[i], end);
    case_count = 0;
  ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 902 "Parser.y"
    {
        syntax_error("Missing '{' after 'switch'");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 913 "Parser.y"
    {
    syntax_error("Missing '}' at end of switch statement");
    while (yychar != 0 && yychar != DOT)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 923 "Parser.y"
    {
    syntax_error("Missing '}' at end of switch statement");
    while (yychar != 0 && yychar != DOT)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 933 "Parser.y"
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

  case 104:

/* Line 1455 of yacc.c  */
#line 943 "Parser.y"
    {
    syntax_error("Missing '(' after 'case'");
    while (yychar != 0 && yychar != CLOSEDBRACKET && yychar != OPENBRACE)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 949 "Parser.y"
    {
    syntax_error("Missing ')' after 'case' condition");
    while (yychar != 0 && yychar != OPENBRACE)
    yychar = yylex();
    yyerrok;
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 960 "Parser.y"
    {
        if ((yyvsp[(1) - (7)].i) != -1) {
            cases[case_count] = nextQuad();
            case_count++;
            emit("goto", "", "", "");
            addjump((yyvsp[(1) - (7)].i),nextQuad());
        }
    ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 968 "Parser.y"
    {
     syntax_error("Missing '{' after 'case'");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 977 "Parser.y"
    {
        syntax_error("Missing '}' after 'case' block");
        while (yychar != 0 && yychar != DOT)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 985 "Parser.y"
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

  case 110:

/* Line 1455 of yacc.c  */
#line 999 "Parser.y"
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

  case 111:

/* Line 1455 of yacc.c  */
#line 1013 "Parser.y"
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

  case 112:

/* Line 1455 of yacc.c  */
#line 1028 "Parser.y"
    {
   (yyval.info).type = (yyvsp[(1) - (1)].info).type;
   (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1032 "Parser.y"
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

  case 114:

/* Line 1455 of yacc.c  */
#line 1049 "Parser.y"
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

  case 115:

/* Line 1455 of yacc.c  */
#line 1066 "Parser.y"
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

  case 116:

/* Line 1455 of yacc.c  */
#line 1085 "Parser.y"
    {(yyval.info)=(yyvsp[(2) - (3)].info);;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1086 "Parser.y"
    {
    syntax_error("Missing ')'");
    while (yychar != 0 && yychar != OPENBRACE)
    yychar = yylex();
    yyerrok;
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1092 "Parser.y"
    {
    syntax_error("Invalid right operand for '>'");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1098 "Parser.y"
    {
    syntax_error("Invalid right operand for '<'");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1104 "Parser.y"
    {
    syntax_error("Invalid right operand for '>='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1110 "Parser.y"
    {
    syntax_error("Invalid right operand for '<='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1116 "Parser.y"
    {
    syntax_error("Invalid right operand for '=='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1122 "Parser.y"
    {
    syntax_error("Invalid right operand for '!='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1128 "Parser.y"
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

  case 125:

/* Line 1455 of yacc.c  */
#line 1145 "Parser.y"
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

  case 126:

/* Line 1455 of yacc.c  */
#line 1162 "Parser.y"
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

  case 127:

/* Line 1455 of yacc.c  */
#line 1179 "Parser.y"
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

  case 128:

/* Line 1455 of yacc.c  */
#line 1196 "Parser.y"
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

  case 129:

/* Line 1455 of yacc.c  */
#line 1211 "Parser.y"
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

  case 130:

/* Line 1455 of yacc.c  */
#line 1228 "Parser.y"
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

  case 131:

/* Line 1455 of yacc.c  */
#line 1243 "Parser.y"
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

  case 132:

/* Line 1455 of yacc.c  */
#line 1262 "Parser.y"
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
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (s->type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("=", t3, "", (yyvsp[(1) - (3)].str)); 
            
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1302 "Parser.y"
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

  case 134:

/* Line 1455 of yacc.c  */
#line 1325 "Parser.y"
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

  case 135:

/* Line 1455 of yacc.c  */
#line 1345 "Parser.y"
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

  case 136:

/* Line 1455 of yacc.c  */
#line 1371 "Parser.y"
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

  case 137:

/* Line 1455 of yacc.c  */
#line 1397 "Parser.y"
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
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (s->type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("+", (yyvsp[(1) - (3)].str), t3, (yyvsp[(1) - (3)].str));
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1435 "Parser.y"
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
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (s->type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("-", (yyvsp[(1) - (3)].str), t3, (yyvsp[(1) - (3)].str));
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1473 "Parser.y"
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
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (s->type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("*", (yyvsp[(1) - (3)].str), t3, (yyvsp[(1) - (3)].str));
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
   
    ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1511 "Parser.y"
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
            char* t3 = (yyvsp[(3) - (3)].info).place;
            if (s->type != (yyvsp[(3) - (3)].info).type) {
                if ((yyvsp[(3) - (3)].info).type == SYM_INT) {
                    char* t = newTemp();
                    emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
                if ((yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
                    char* t = newTemp();
                    emit("floatToint",(yyvsp[(3) - (3)].info).place,"",t);
                    t3 = t;
                }
            }
            emit("/", (yyvsp[(1) - (3)].str), t3, (yyvsp[(1) - (3)].str));
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1547 "Parser.y"
    {
        syntax_error("Invalid expression after '+='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1553 "Parser.y"
    {
        syntax_error("Invalid expression after '-='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1559 "Parser.y"
    {
        syntax_error("Invalid expression after '*='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1565 "Parser.y"
    {
        syntax_error("Invalid expression after '/='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1573 "Parser.y"
    {
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
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;

        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("+", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1607 "Parser.y"
    {
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
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT || (yyvsp[(3) - (3)].info).type == SYM_FLOAT) 
            (yyval.info).type = SYM_FLOAT;
        else 
            (yyval.info).type = SYM_INT;
        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("-", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1640 "Parser.y"
    { 
    (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1646 "Parser.y"
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
        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("*", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1679 "Parser.y"
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
        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("/", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1706 "Parser.y"
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
        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("%%", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1733 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1737 "Parser.y"
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
        char *t1 = (yyvsp[(1) - (3)].info).place;
        char *t3 = (yyvsp[(3) - (3)].info).place;
        if ((yyvsp[(1) - (3)].info).type == SYM_FLOAT && (yyvsp[(3) - (3)].info).type == SYM_INT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(3) - (3)].info).place,"",t);
            t3 = t;
        }
        if ((yyvsp[(1) - (3)].info).type == SYM_INT && (yyvsp[(3) - (3)].info).type == SYM_FLOAT) {
            char *t = newTemp();
            emit("intTofloat",(yyvsp[(1) - (3)].info).place,"",t);
            t1 = t;
        }
        char *t = newTemp();
        emit("^", t1, t3, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1764 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1768 "Parser.y"
    { 
    (yyval.info) = (yyvsp[(2) - (3)].info); 
;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1771 "Parser.y"
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

  case 156:

/* Line 1455 of yacc.c  */
#line 1791 "Parser.y"
    { 
    (yyval.info).type = SYM_INT;    
    (yyval.info).place = (yyvsp[(1) - (1)].str);        
;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1795 "Parser.y"
    { 
    (yyval.info).type = SYM_FLOAT; 
    (yyval.info).place = (yyvsp[(1) - (1)].str);        
;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1799 "Parser.y"
    { 
    Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
    
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = "error";
    }
    // else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL) {
    //     fprintf(stderr, "Line %d: Unsupported type in expression: %s\n", yylineno, $1);
    //     $$.type = SYM_ERROR;
    //     $$.place = "error";
    // }
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

  case 159:

/* Line 1455 of yacc.c  */
#line 1823 "Parser.y"
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

  case 160:

/* Line 1455 of yacc.c  */
#line 1836 "Parser.y"
    {
    current_scope = create_table(211, current_scope);
    all_scopes[scope_count++]= current_scope;
;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1842 "Parser.y"
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
#line 4270 "Parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1852 "Parser.y"


    /* Subroutines */
     void yyerror(const char *s)
{
    extern char *yytext; // Current token text
     if (strcmp(s, "syntax error") == 0) {
        return;
    }
    fprintf(stderr, "Line %d: Syntax error at '%s': %s\n", 
            yylineno, yytext, s);
}
void syntax_error(const char *msg) {
    syn_error=true;
    extern char *yytext;
    fprintf(stderr, "Line %d: %s (found '%s')\n", 
            yylineno, msg, yytext);
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

