
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


/* Line 189 of yacc.c  */
#line 106 "Parser.tab.c"

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
#line 35 "Parser.y"

    #include "quadruple.h"
    #include "enums_def.h"
    typedef struct {
        DATATYPE type; 
        char* place;     
        //int quad_idx;    
    } ExprInfo;



/* Line 209 of yacc.c  */
#line 142 "Parser.tab.c"

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
#line 44 "Parser.y"

    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;
    Quadruple q;
    ExprInfo info;



/* Line 214 of yacc.c  */
#line 228 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 240 "Parser.tab.c"

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   663

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNRULES -- Number of states.  */
#define YYNSTATES  307

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
      27,    29,    31,    33,    35,    37,    39,    41,    43,    46,
      48,    50,    52,    54,    56,    59,    62,    65,    67,    71,
      75,    79,    83,    88,    91,    96,    97,   107,   115,   118,
     126,   127,   131,   140,   143,   152,   153,   166,   169,   178,
     189,   190,   204,   207,   216,   227,   241,   247,   254,   260,
     267,   273,   278,   281,   286,   294,   297,   305,   308,   313,
     315,   318,   323,   328,   332,   336,   340,   350,   359,   365,
     369,   379,   388,   389,   395,   399,   401,   405,   409,   414,
     417,   422,   436,   443,   446,   460,   467,   469,   472,   477,
     480,   485,   493,   496,   504,   508,   512,   515,   517,   521,
     525,   528,   532,   534,   538,   542,   546,   550,   554,   558,
     562,   566,   570,   574,   578,   582,   586,   590,   594,   598,
     602,   606,   609,   612,   616,   620,   624,   628,   632,   636,
     640,   644,   648,   652,   654,   658,   662,   666,   668,   672,
     674,   678,   681,   683,   685,   687,   689,   690
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    61,     1,
      -1,    61,    45,     1,    -1,    62,    -1,    61,    45,    62,
      -1,    61,     1,    62,    -1,    92,    -1,    65,    -1,    68,
      -1,    78,    -1,    86,    -1,    82,    -1,    75,    -1,    73,
      -1,    81,    -1,    56,    93,    -1,    56,    -1,    22,    -1,
      23,    -1,    21,    -1,    24,    -1,    63,    42,    -1,    63,
      66,    -1,    64,    66,    -1,    25,    -1,    25,    34,    93,
      -1,    25,    34,    12,    -1,    25,    34,    10,    -1,    25,
      34,    90,    -1,    43,     7,    90,     8,    -1,    43,     1,
      -1,    43,     7,    90,     1,    -1,    -1,    67,    13,    97,
      61,    45,    14,    98,    69,    71,    -1,    67,    13,    97,
      61,    45,    14,    98,    -1,    67,     1,    -1,    67,    13,
      97,    61,    45,     1,    98,    -1,    -1,    44,    70,    68,
      -1,    44,    70,    13,    97,    61,    45,    14,    98,    -1,
      44,     1,    -1,    44,    70,    13,    97,    61,    45,     1,
      98,    -1,    -1,    48,    13,    97,    72,    61,    45,    14,
      98,    49,     7,    90,     8,    -1,    48,     1,    -1,    48,
      13,    97,    72,    61,    45,     1,    98,    -1,    48,    13,
      97,    72,    61,    45,    14,    98,    49,     1,    -1,    -1,
      46,     7,    97,    76,    20,    92,     8,    74,    13,    61,
      45,    14,    98,    -1,    46,     1,    -1,    46,     7,    97,
      76,    20,    92,     1,    74,    -1,    46,     7,    97,    76,
      20,    92,     8,    74,     1,    98,    -1,    46,     7,    97,
      76,    20,    92,     8,    74,    13,    61,    45,     1,    98,
      -1,    46,     7,    97,    76,     1,    -1,    22,    25,    34,
      93,    47,    93,    -1,    25,    34,    93,    47,    93,    -1,
      22,    25,    34,    93,    47,     1,    -1,    25,    34,    93,
      47,     1,    -1,    52,     7,    90,     8,    -1,    52,     1,
      -1,    52,     7,    90,     1,    -1,    77,    13,    97,    61,
      45,    14,    98,    -1,    77,     1,    -1,    77,    13,    97,
      61,    45,     1,    98,    -1,    63,    25,    -1,    63,    25,
      20,    79,    -1,     1,    -1,    63,     1,    -1,    63,     1,
      20,    79,    -1,    63,    25,     1,    79,    -1,    63,    25,
       7,    -1,    57,    25,     7,    -1,    57,    25,     1,    -1,
      80,    97,    79,     8,    13,    61,    45,    14,    98,    -1,
      80,     8,    13,    97,    61,    45,    14,    98,    -1,    80,
      97,    79,     8,     1,    -1,    80,     8,     1,    -1,    80,
      97,    79,     8,    13,    61,    45,     1,    98,    -1,    80,
       8,    13,    97,    61,    45,     1,    98,    -1,    -1,    25,
       7,    83,    84,     8,    -1,    25,     7,     8,    -1,    93,
      -1,    84,    20,    93,    -1,    84,     1,    93,    -1,    53,
       7,    25,     8,    -1,    53,     1,    -1,    53,     7,    25,
       1,    -1,    85,    13,    97,    87,    55,    13,    97,    61,
      45,    14,    98,    14,    98,    -1,    85,    13,    97,    87,
      14,    98,    -1,    85,     1,    -1,    85,    13,    97,    87,
      55,    13,    97,    61,    45,    14,    98,     1,    98,    -1,
      85,    13,    97,    87,     1,    98,    -1,    89,    -1,    89,
      87,    -1,    54,     7,     9,     8,    -1,    54,     1,    -1,
      54,     7,     9,     1,    -1,    88,    13,    97,    61,    45,
      14,    98,    -1,    88,     1,    -1,    88,    13,    97,    61,
      45,     1,    98,    -1,    90,    39,    91,    -1,    90,    40,
      91,    -1,    41,    91,    -1,    91,    -1,    90,    39,    93,
      -1,    90,    40,    93,    -1,    41,    93,    -1,     7,    90,
       8,    -1,     1,    -1,     7,    90,     1,    -1,    93,    28,
       1,    -1,    93,    27,     1,    -1,    93,    26,     1,    -1,
      93,    29,     1,    -1,    93,    30,     1,    -1,    93,    31,
       1,    -1,    93,    28,    93,    -1,    93,    26,    93,    -1,
      93,    27,    93,    -1,    93,    29,    93,    -1,    93,    30,
      12,    -1,    93,    30,    93,    -1,    93,    31,    12,    -1,
      93,    31,    93,    -1,    25,    34,    93,    -1,    25,    34,
      10,    -1,    25,    34,    90,    -1,    25,    32,    -1,    25,
      33,    -1,    25,    36,    93,    -1,    25,    35,    93,    -1,
      25,    37,    93,    -1,    25,    38,    93,    -1,    25,    36,
       1,    -1,    25,    35,     1,    -1,    25,    37,     1,    -1,
      25,    38,     1,    -1,    93,     4,    94,    -1,    93,     3,
      94,    -1,    94,    -1,    94,     5,    95,    -1,    94,     6,
      95,    -1,    94,    16,    95,    -1,    95,    -1,    96,    17,
      95,    -1,    96,    -1,     7,    93,     8,    -1,     3,    96,
      -1,     9,    -1,    11,    -1,    25,    -1,    82,    -1,    -1,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   117,   117,   119,   120,   125,   132,   133,   134,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   164,
     181,   182,   183,   184,   190,   202,   206,   211,   219,   228,
     237,   246,   257,   267,   273,   285,   281,   290,   297,   303,
     313,   319,   323,   329,   336,   346,   351,   362,   368,   376,
     385,   389,   401,   407,   413,   420,   429,   437,   458,   479,
     484,   491,   498,   504,   513,   522,   528,   536,   550,   564,
     568,   572,   576,   583,   602,   621,   627,   642,   656,   662,
     668,   673,   681,   681,   722,   746,   764,   783,   789,   809,
     815,   822,   834,   844,   850,   862,   873,   873,   875,   885,
     891,   899,   910,   916,   927,   943,   959,   975,   980,   997,
    1014,  1033,  1034,  1040,  1046,  1052,  1058,  1064,  1070,  1076,
    1082,  1100,  1117,  1134,  1151,  1169,  1187,  1202,  1221,  1252,
    1275,  1295,  1322,  1349,  1378,  1407,  1436,  1463,  1469,  1475,
    1481,  1489,  1514,  1539,  1546,  1568,  1584,  1600,  1604,  1620,
    1624,  1628,  1650,  1654,  1658,  1687,  1702,  1707
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
  "function_header", "function", "function_call", "$@2", "list",
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
      63,    63,    63,    63,    64,    65,    65,    66,    66,    66,
      66,    66,    67,    67,    67,    69,    68,    68,    68,    68,
      70,    71,    71,    71,    71,    72,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    75,    75,    76,    76,    76,
      76,    77,    77,    77,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    80,    80,    80,    81,    81,    81,    81,
      81,    81,    83,    82,    82,    84,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    86,    87,    87,    88,    88,
      88,    89,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    97,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     3,     3,
       3,     3,     4,     2,     4,     0,     9,     7,     2,     7,
       0,     3,     8,     2,     8,     0,    12,     2,     8,    10,
       0,    13,     2,     8,    10,    13,     5,     6,     5,     6,
       5,     4,     2,     4,     7,     2,     7,     2,     4,     1,
       2,     4,     4,     3,     3,     3,     9,     8,     5,     3,
       9,     8,     0,     5,     3,     1,     3,     3,     4,     2,
       4,    13,     6,     2,    13,     6,     1,     2,     4,     2,
       4,     7,     2,     7,     3,     3,     2,     1,     3,     3,
       2,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     1,
       3,     2,     1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,    20,    21,    23,     0,     0,     0,     0,     0,
       0,    19,     0,     0,     2,     0,     6,     0,     0,    10,
       0,    11,    16,    15,     0,    12,   156,    17,    14,     0,
      13,     9,    82,   131,   132,     0,     0,     0,     0,     0,
      33,     0,    52,   156,    47,   156,    62,     0,    89,     0,
       0,     0,   152,   153,   154,   155,    18,   143,   147,   149,
       0,     1,     4,     0,    27,    24,    25,    27,    26,    38,
     156,    65,   156,     0,     0,    93,   156,    84,     0,   112,
       0,   129,     0,   130,   107,   128,   138,   134,   137,   133,
     139,   135,   140,   136,     0,     0,     0,    45,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,    75,    74,
       8,     5,     7,    73,     0,     0,     0,    79,   156,    69,
       0,     0,     0,     0,    85,     0,     0,   106,   110,     0,
       0,     0,     0,     0,     0,     0,     0,    34,    32,     0,
       0,     0,     0,    63,    61,    90,    88,   150,   142,   141,
     144,   145,   146,   148,    30,    29,    31,    28,     0,     0,
       0,    70,     0,     0,     0,     0,     0,    96,     0,    83,
       0,   113,   111,   104,   108,   105,   109,   116,   121,   115,
     122,   114,   120,   117,   123,   118,   124,   125,   119,   126,
     127,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,    99,     0,   157,   157,     0,
     102,   156,    97,    87,    86,     0,     0,     0,     0,     0,
     157,   157,   157,   157,     0,    71,    72,    68,     0,     0,
      95,    92,   156,     0,     0,     0,    50,    50,   157,   157,
      39,    37,    66,    64,   157,   157,     0,   100,    98,     0,
       0,     0,    60,    58,    53,     0,    48,     0,     0,    81,
      77,   157,   157,     0,     0,    59,    57,   157,     0,     0,
       0,    36,    80,    76,     0,   157,   157,    54,     0,    49,
       0,    43,     0,   157,   103,   101,     0,     0,   156,    41,
       0,   157,   157,    46,     0,   157,   157,    55,    51,     0,
      94,    91,     0,   157,   157,    44,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,    19,    66,    20,
      21,   258,   282,   271,   142,    22,   254,    23,   141,    24,
      25,   121,    26,    27,    55,    78,   123,    29,    30,   165,
     166,   167,    83,    84,    31,    95,    57,    58,    59,    74,
     230
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
     499,  -115,  -115,  -115,  -115,   493,   148,   199,    85,   230,
     234,   177,   -10,    27,  -115,    19,  -115,    76,    -6,  -115,
     186,  -115,  -115,  -115,   207,  -115,    38,  -115,  -115,   215,
    -115,  -115,    51,  -115,  -115,   508,   562,   563,   574,   575,
    -115,   202,  -115,  -115,  -115,  -115,  -115,   202,  -115,    25,
     177,   177,  -115,  -115,    89,  -115,   296,   152,  -115,    75,
     264,  -115,   499,    47,    26,  -115,  -115,    71,  -115,  -115,
    -115,  -115,  -115,   229,   142,  -115,  -115,  -115,   177,  -115,
     202,  -115,   594,   270,  -115,   293,  -115,   296,  -115,   296,
    -115,   296,  -115,   296,    74,   293,   185,  -115,    83,   151,
    -115,   281,   177,   177,   177,   177,   177,   177,  -115,  -115,
    -115,  -115,  -115,  -115,   250,   499,   499,  -115,  -115,  -115,
      72,   118,    87,   228,   296,   111,   531,  -115,   293,   594,
     594,   595,   606,   607,   626,   214,   477,  -115,  -115,   129,
     140,     8,   499,  -115,  -115,  -115,  -115,  -115,   152,   152,
    -115,  -115,  -115,  -115,  -115,  -115,   270,   293,    20,    29,
     499,   159,   262,   231,   265,     2,   239,    87,   177,  -115,
     177,  -115,  -115,  -115,   293,  -115,   293,  -115,   296,  -115,
     296,  -115,   296,  -115,   296,  -115,  -115,   296,  -115,  -115,
     296,   180,   177,  -115,   233,    31,   499,   255,   292,    33,
     142,   142,   142,  -115,   499,  -115,   274,  -115,  -115,   260,
    -115,  -115,  -115,   296,   296,   177,     4,   621,   175,   304,
    -115,  -115,  -115,  -115,   341,  -115,  -115,  -115,    35,   184,
    -115,  -115,  -115,   499,    14,   627,  -115,  -115,  -115,  -115,
    -115,   149,  -115,  -115,  -115,  -115,   353,  -115,  -115,   499,
      42,   638,  -115,   296,  -115,   254,  -115,   241,   244,  -115,
    -115,  -115,  -115,    43,   390,  -115,   296,  -115,   499,   280,
      12,  -115,  -115,  -115,   451,  -115,  -115,  -115,    57,  -115,
     202,  -115,    13,  -115,  -115,  -115,   402,    81,  -115,  -115,
      23,  -115,  -115,  -115,   499,  -115,  -115,  -115,  -115,    65,
    -115,  -115,   439,  -115,  -115,  -115,  -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,  -115,   -93,   -52,   -73,  -115,  -115,   277,  -115,
      10,  -115,  -115,  -115,  -115,  -115,    67,  -115,  -115,  -115,
    -115,   168,  -115,  -115,     0,  -115,  -115,  -115,  -115,   167,
    -115,  -115,   -35,   -77,   143,     3,   256,   226,   286,   -41,
    -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -68
static const yytype_int16 yytable[] =
{
      28,   120,    96,   207,    97,   127,    94,   102,   103,   193,
     110,   112,    98,   281,    56,    60,   208,   102,   103,    67,
      62,   196,   158,   159,   295,   -40,   288,    61,   194,   115,
     196,   116,   196,   113,   196,   122,   196,   296,    85,    87,
      89,    91,    93,   196,   196,   125,    73,    -3,   111,   195,
      99,   235,   173,   175,   101,   -40,     6,   209,   196,    77,
     114,   251,    28,    28,    63,   197,   196,   199,     1,     2,
       3,     4,     5,   161,   198,   137,   219,   160,   224,   156,
     246,   124,   138,   126,   143,   128,    44,   264,   274,   293,
       6,   144,   107,     7,   231,     8,    32,   162,    45,     9,
      10,    64,   286,    11,    12,   114,   240,   241,   242,   243,
     302,   228,   171,   129,   130,    28,    28,   157,    65,   172,
     129,   130,   129,   130,   256,   257,   163,   120,   120,   120,
     259,   260,   174,   176,   178,   180,   182,   184,   187,   190,
     250,   164,    28,   119,   110,   112,   112,   272,   273,    40,
     129,   130,   145,   277,   191,    41,   263,   104,   105,   146,
      28,   284,   285,     1,     2,     3,     4,   112,   106,   290,
     233,   213,   112,   214,   192,   278,   236,   297,   298,   200,
      50,   300,   301,   237,    51,   247,    52,    69,    53,   305,
     306,   249,   248,   -35,   112,   216,    28,    28,    28,    70,
      42,   299,    54,    79,    28,    50,    43,   139,    71,    80,
     140,    52,   112,    53,   215,   185,    75,    50,   234,    28,
      72,    51,   112,    52,    28,    53,   186,    54,    76,   168,
     117,    46,   203,    28,   112,    48,   169,    47,   253,    54,
     210,    49,   118,    82,   204,   287,    28,   294,   170,    28,
     112,    79,   211,    50,   266,   267,   220,    80,   217,    52,
     154,    53,   155,   201,    28,   108,   205,   268,    28,   221,
     -67,   109,   206,   232,    28,    54,     1,     2,     3,     4,
       5,   279,   202,   229,   102,   103,    28,   280,   270,   147,
     269,    82,   289,   222,    28,    68,   102,   103,     6,   102,
     103,     7,    28,     8,   255,   238,   223,     9,    10,   129,
     130,    11,    12,     1,     2,     3,     4,     5,   239,   131,
     132,   133,   134,   135,   136,     1,     2,     3,     4,     5,
     150,   151,   152,   153,   212,     6,   100,   218,     7,     0,
       8,     0,   244,     0,     9,    10,     0,     6,    11,    12,
       7,     0,     8,     0,   261,   245,     9,    10,   148,   149,
      11,    12,     1,     2,     3,     4,     5,   262,   225,   226,
     227,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     6,     0,     0,     7,     0,     8,
       0,   275,     0,     9,    10,     0,     6,    11,    12,     7,
       0,     8,     0,   291,   276,     9,    10,     0,     0,    11,
      12,     1,     2,     3,     4,     5,   292,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
       0,     0,     0,     6,     0,     0,     7,     0,     8,     0,
     303,     0,     9,    10,     0,     6,    11,    12,     7,     0,
       8,     0,     0,   304,     9,    10,     0,     0,    11,    12,
       1,     2,     3,     4,     5,   283,     0,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     0,   188,     0,
      50,     0,     6,     0,    51,     7,    52,     8,    53,   189,
       0,     9,    10,     0,     6,    11,    12,     7,     0,     8,
      32,     0,    54,     9,    10,     0,     0,    11,    12,    79,
       0,    50,     0,     0,     0,    80,     0,    52,    81,    53,
       1,     2,     3,     4,     5,    33,    34,    35,    36,    37,
      38,    39,     0,    54,   102,   103,     0,     0,     0,   147,
       0,     0,     6,     0,     0,     7,     0,     8,     0,    82,
       0,     9,    10,     0,     0,    11,    12,   131,   132,   133,
     134,   135,   136,    86,    88,    50,    50,     0,     0,    51,
      51,    52,    52,    53,    53,    90,    92,    50,    50,     0,
       0,    51,    51,    52,    52,    53,    53,    54,    54,     0,
       0,     0,     0,     0,     0,    79,   177,    50,    50,    54,
      54,    80,    51,    52,    52,    53,    53,   179,   181,    50,
      50,     0,     0,    51,    51,    52,    52,    53,    53,    54,
      54,     0,     0,     0,     0,     0,     0,   183,   252,    50,
      50,    54,    54,    51,    51,    52,    52,    53,    53,   265,
       0,    50,     0,     0,     0,    51,     0,    52,     0,    53,
       0,    54,    54,    33,    34,    35,    36,    37,    38,    39,
       0,     0,     0,    54
};

static const yytype_int16 yycheck[] =
{
       0,    74,    43,     1,    45,    82,    41,     3,     4,     1,
      62,    63,    47,     1,    11,    25,    14,     3,     4,    25,
       1,     1,   115,   116,     1,    13,    13,     0,    20,    70,
       1,    72,     1,     7,     1,    76,     1,    14,    35,    36,
      37,    38,    39,     1,     1,    80,     8,     0,     1,   142,
      25,    47,   129,   130,    51,    43,    43,    55,     1,     8,
      34,    47,    62,    63,    45,    45,     1,   160,    21,    22,
      23,    24,    25,     1,    45,     1,    45,   118,    45,   114,
      45,    78,     8,    80,     1,    82,     1,    45,    45,     8,
      43,     8,    17,    46,   208,    48,     7,    25,    13,    52,
      53,    25,    45,    56,    57,    34,   220,   221,   222,   223,
      45,   204,     1,    39,    40,   115,   116,   114,    42,     8,
      39,    40,    39,    40,   238,   239,     8,   200,   201,   202,
     244,   245,   129,   130,   131,   132,   133,   134,   135,   136,
     233,    54,   142,     1,   196,   197,   198,   261,   262,     1,
      39,    40,     1,   267,    25,     7,   249,     5,     6,     8,
     160,   275,   276,    21,    22,    23,    24,   219,    16,   283,
     211,   168,   224,   170,    34,   268,     1,   291,   292,    20,
       3,   295,   296,     8,     7,     1,     9,     1,    11,   303,
     304,   232,     8,    44,   246,   192,   196,   197,   198,    13,
       1,   294,    25,     1,   204,     3,     7,    22,     1,     7,
      25,     9,   264,    11,    34,     1,     1,     3,   215,   219,
      13,     7,   274,     9,   224,    11,    12,    25,    13,     1,
       1,     1,     1,   233,   286,     1,     8,     7,   235,    25,
       1,     7,    13,    41,    13,   280,   246,   288,    20,   249,
     302,     1,    13,     3,   251,     1,     1,     7,    25,     9,
      10,    11,    12,     1,   264,     1,     1,    13,   268,    14,
       8,     7,     7,    13,   274,    25,    21,    22,    23,    24,
      25,     1,    20,     9,     3,     4,   286,     7,    44,     8,
      49,    41,   282,     1,   294,    18,     3,     4,    43,     3,
       4,    46,   302,    48,   237,     1,    14,    52,    53,    39,
      40,    56,    57,    21,    22,    23,    24,    25,    14,    26,
      27,    28,    29,    30,    31,    21,    22,    23,    24,    25,
     104,   105,   106,   107,   167,    43,    50,   194,    46,    -1,
      48,    -1,     1,    -1,    52,    53,    -1,    43,    56,    57,
      46,    -1,    48,    -1,     1,    14,    52,    53,   102,   103,
      56,    57,    21,    22,    23,    24,    25,    14,   200,   201,
     202,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,     1,    -1,    52,    53,    -1,    43,    56,    57,    46,
      -1,    48,    -1,     1,    14,    52,    53,    -1,    -1,    56,
      57,    21,    22,    23,    24,    25,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,
       1,    -1,    52,    53,    -1,    43,    56,    57,    46,    -1,
      48,    -1,    -1,    14,    52,    53,    -1,    -1,    56,    57,
      21,    22,    23,    24,    25,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,     1,    -1,
       3,    -1,    43,    -1,     7,    46,     9,    48,    11,    12,
      -1,    52,    53,    -1,    43,    56,    57,    46,    -1,    48,
       7,    -1,    25,    52,    53,    -1,    -1,    56,    57,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,     9,    10,    11,
      21,    22,    23,    24,    25,    32,    33,    34,    35,    36,
      37,    38,    -1,    25,     3,     4,    -1,    -1,    -1,     8,
      -1,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,    41,
      -1,    52,    53,    -1,    -1,    56,    57,    26,    27,    28,
      29,    30,    31,     1,     1,     3,     3,    -1,    -1,     7,
       7,     9,     9,    11,    11,     1,     1,     3,     3,    -1,
      -1,     7,     7,     9,     9,    11,    11,    25,    25,    -1,
      -1,    -1,    -1,    -1,    -1,     1,     1,     3,     3,    25,
      25,     7,     7,     9,     9,    11,    11,     1,     1,     3,
       3,    -1,    -1,     7,     7,     9,     9,    11,    11,    25,
      25,    -1,    -1,    -1,    -1,    -1,    -1,     1,     1,     3,
       3,    25,    25,     7,     7,     9,     9,    11,    11,     1,
      -1,     3,    -1,    -1,    -1,     7,    -1,     9,    -1,    11,
      -1,    25,    25,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    52,
      53,    56,    57,    59,    60,    61,    62,    63,    64,    65,
      67,    68,    73,    75,    77,    78,    80,    81,    82,    85,
      86,    92,     7,    32,    33,    34,    35,    36,    37,    38,
       1,     7,     1,     7,     1,    13,     1,     7,     1,     7,
       3,     7,     9,    11,    25,    82,    93,    94,    95,    96,
      25,     0,     1,    45,    25,    42,    66,    25,    66,     1,
      13,     1,    13,     8,    97,     1,    13,     8,    83,     1,
       7,    10,    41,    90,    91,    93,     1,    93,     1,    93,
       1,    93,     1,    93,    90,    93,    97,    97,    90,    25,
      96,    93,     3,     4,     5,     6,    16,    17,     1,     7,
      62,     1,    62,     7,    34,    97,    97,     1,    13,     1,
      63,    79,    97,    84,    93,    90,    93,    91,    93,    39,
      40,    26,    27,    28,    29,    30,    31,     1,     8,    22,
      25,    76,    72,     1,     8,     1,     8,     8,    94,    94,
      95,    95,    95,    95,    10,    12,    90,    93,    61,    61,
      97,     1,    25,     8,    54,    87,    88,    89,     1,     8,
      20,     1,     8,    91,    93,    91,    93,     1,    93,     1,
      93,     1,    93,     1,    93,     1,    12,    93,     1,    12,
      93,    25,    34,     1,    20,    61,     1,    45,    45,    61,
      20,     1,    20,     1,    13,     1,     7,     1,    14,    55,
       1,    13,    87,    93,    93,    34,    93,    25,    92,    45,
       1,    14,     1,    14,    45,    79,    79,    79,    61,     9,
      98,    98,    13,    97,    93,    47,     1,     8,     1,    14,
      98,    98,    98,    98,     1,    14,    45,     1,     8,    97,
      61,    47,     1,    93,    74,    74,    98,    98,    69,    98,
      98,     1,    14,    61,    45,     1,    93,     1,    13,    49,
      44,    71,    98,    98,    45,     1,    14,    98,    61,     1,
       7,     1,    70,    14,    98,    98,    45,    90,    13,    68,
      98,     1,    14,     8,    97,     1,    14,    98,    98,    61,
      98,    98,    45,     1,    14,    98,    98
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
#line 119 "Parser.y"
    { printf("Correct Syntax\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 120 "Parser.y"
    {
    printf("AAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
    syntax_error("Missing '.' at the end of statement");
    yyerrok;
;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 125 "Parser.y"
    { 
    syntax_error("Extra '.' or more after statement");
    while(yychar!= DOT)
        yychar=yylex();
    yyerrok;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 134 "Parser.y"
    {
    syntax_error("Missing '.' at the end of statement");
    while (yychar != DOT && yychar != 0) 
        yychar = yylex();
    yyerrok;
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 150 "Parser.y"
    {
    if (current_func_id) {
        /* --- ADDED TYPE CHECK --- */
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

  case 19:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    {
    if (current_func_id) {
        /* --- ADDED TYPE CHECK --- */
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

  case 20:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    { (yyval.dtype) = SYM_INT; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    { (yyval.dtype) = SYM_BOOL; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    { (yyval.dtype) = SYM_STRING; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 190 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = SYM_CONST;
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 202 "Parser.y"
    {
        current_type = (yyvsp[(1) - (2)].dtype);
        current_kind = VAR;
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 211 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (1)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n ",yylineno,(yyvsp[(1) - (1)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
            insert(s, current_scope);
        }
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 219 "Parser.y"
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
#line 228 "Parser.y"
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

  case 30:

/* Line 1455 of yacc.c  */
#line 237 "Parser.y"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    { //Multiple declaration check , Symbol insertion
        if (lookup_current((yyvsp[(1) - (3)].str), current_scope)) {
            fprintf(stderr,"Line %d:Multiple declaration of variable %s\n",yylineno,(yyvsp[(1) - (3)].str));
        } else {
            Symbol* s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
            insert(s, current_scope);
            emit("=",(yyvsp[(3) - (3)].info).place,"",(yyvsp[(1) - (3)].str));
        }
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 258 "Parser.y"
    {
    /* --- ADDED TYPE CHECK --- */
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: If condition must be boolean\n", yylineno);
    }

    (yyval.i) = nextQuad();
    emit("IfFalse", (yyvsp[(3) - (4)].info).place, "", "");
;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 267 "Parser.y"
    {
    syntax_error("Missing '(' after 'law'");
        while (yychar != CLOSEDBRACKET && yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 273 "Parser.y"
    {
        syntax_error("Missing ')' after 'law' condition");
        while (yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 285 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad()+1); //skip the goto at the end of the if condition

    ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    {
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 297 "Parser.y"
    {
    syntax_error("Missing '{' after 'law' condition");
        while (yychar != ELSE && yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 305 "Parser.y"
    {
        syntax_error("Missing '}' after 'law' block");
        while (yychar != ELSE && yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 313 "Parser.y"
    {
    (yyval.i) = nextQuad();
    emit("goto", "", "", "");
;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    {
        addjump((yyvsp[(2) - (3)].i),nextQuad());
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 326 "Parser.y"
    {
        addjump((yyvsp[(2) - (8)].i),nextQuad());
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 330 "Parser.y"
    {
        syntax_error("Missing a brace or more after 'tayeb'");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 338 "Parser.y"
    {
    syntax_error("Missing '}' after 'tayeb' block");
    while (yychar != DOT && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 346 "Parser.y"
    {
    (yyval.i) = nextQuad();
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 354 "Parser.y"
    {
        if ((yyvsp[(11) - (12)].info).type != SYM_BOOL) {
             fprintf(stderr, "Line %d: Until condition must be boolean\n", yylineno);
        }
        char label[20];
        sprintf(label, "%d", (yyvsp[(4) - (12)].i)); 
        emit("IfFalse",(yyvsp[(11) - (12)].info).place,"",label);
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 362 "Parser.y"
    {
    syntax_error("Missing '{' after 'e3mel'");
    while (yychar != DOT && yychar != UNTIL && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 370 "Parser.y"
    {
    syntax_error("Missing '}' after 'e3mel' block");
    while (yychar != UNTIL && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 379 "Parser.y"
    {
    syntax_error("Missing '(' or ')' after 'lehad'");
    while (yychar != CLOSEDBRACKET && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 385 "Parser.y"
    {
    (yyval.q) = pop_last();
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 392 "Parser.y"
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

  case 52:

/* Line 1455 of yacc.c  */
#line 401 "Parser.y"
    {
    syntax_error("Missing '(' after 'karar'");
    while (yychar != CLOSEDBRACKET && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 407 "Parser.y"
    {
    syntax_error("Missing ')' in 'karar' loop");
    while (yychar != OPENBRACE && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 414 "Parser.y"
    {
    syntax_error("Missing '{' after 'karar' loop header");
    while (yychar != DOT && yychar != CLOSEDBRACE && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 423 "Parser.y"
    {
    syntax_error("Missing '}' in 'karar' loop body");
    while (yychar != DOT && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 429 "Parser.y"
    {
        syntax_error("Missing ',' between iterator and assignment in 'karar' loop");
        while (yychar != CLOSEDBRACKET && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 438 "Parser.y"
    {
    /* --- ADDED TYPE CHECK --- */
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
        emit("=",(yyvsp[(2) - (6)].str),"",(yyvsp[(4) - (6)].info).place); // Use .place
        (yyval.i) = nextQuad();
        char *t = newTemp();
        emit(">",(yyvsp[(2) - (6)].str),(yyvsp[(6) - (6)].info).place,t); // Use .place
        emit("IfTrue",t,"","");
    }
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 459 "Parser.y"
    {
    /* --- ADDED TYPE CHECK --- */
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
        emit("=",(yyvsp[(1) - (5)].str),"",(yyvsp[(3) - (5)].info).place); // Use .place
        (yyval.i) = nextQuad();
        char *t = newTemp();
        emit(">",(yyvsp[(1) - (5)].str),(yyvsp[(5) - (5)].info).place,t); // Use .place
        emit("IfTrue",t,"","");
    }
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 479 "Parser.y"
    {
        syntax_error("Invalid upper bound in for loop");
        (yyval.i) = -1;
        yyerrok;
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 484 "Parser.y"
    {
        syntax_error("Invalid upper bound in for loop");
        (yyval.i) = -1;
        yyerrok;
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 491 "Parser.y"
    {
    if ((yyvsp[(3) - (4)].info).type != SYM_BOOL) {
         fprintf(stderr, "Line %d: While condition must be boolean\n", yylineno);
    }
    (yyval.i) = nextQuad();
    emit("IfFalse",(yyvsp[(3) - (4)].info).place,"","");
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 498 "Parser.y"
    {
        syntax_error("Missing '(' after 'tol_ma'");
        while (yychar != CLOSEDBRACKET && yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 504 "Parser.y"
    {
        syntax_error("Missing ')' after 'tol_ma' condition");
        while (yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 516 "Parser.y"
    {
        char label[20];
        sprintf(label, "%d", (yyvsp[(1) - (7)].i)); 
        emit("goto","","",label);
        addjump((yyvsp[(1) - (7)].i),nextQuad());
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 522 "Parser.y"
    {
        syntax_error("Missing '{' after 'tol_ma' condition");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 528 "Parser.y"
    {
        syntax_error("Missing '}' after 'tol_ma' block");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 537 "Parser.y"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 551 "Parser.y"
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

  case 69:

/* Line 1455 of yacc.c  */
#line 564 "Parser.y"
    {
    syntax_error("Invalid parameter syntax or missing brackets");
    yyerrok;
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 568 "Parser.y"
    {
        syntax_error("Missing parameter name after type");
        yyerrok;
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 572 "Parser.y"
    {
        syntax_error("Missing parameter name after type");
        yyerrok;
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 576 "Parser.y"
    {
        syntax_error("Missing ',' between parameters");
        yyerrok;
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 583 "Parser.y"
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
#line 602 "Parser.y"
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
#line 621 "Parser.y"
    {
        syntax_error("Missing '(' in function declaration");
        yyerrok;
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 631 "Parser.y"
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
#line 646 "Parser.y"
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
#line 656 "Parser.y"
    {
        syntax_error("Missing '{' after function header");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 662 "Parser.y"
    {
        syntax_error("Missing '{' after function header");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 669 "Parser.y"
    {
        syntax_error("Missing '}' at end of function");
        yyerrok;
    ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 674 "Parser.y"
    {
        syntax_error("Missing '}' at end of function");
        yyerrok;
    ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 681 "Parser.y"
    {
        /* --- ADDED INITIALIZATION LOGIC --- */
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
#line 693 "Parser.y"
    {
        /* --- VERIFY IF WE HAVE TOO FEW ARGUMENTS --- */
        if (!param_error && current_param != NULL) {
             fprintf(stderr, "Line %d: Too few arguments for function %s\n", yylineno, (yyvsp[(1) - (5)].str));
             param_error = true;
        }
        
        Symbol* f = lookup((yyvsp[(1) - (5)].str), current_scope); // Re-lookup to be safe
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
#line 722 "Parser.y"
    {
       /* Code for 0 arguments - Keep existing checks + add type propagation */
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
#line 746 "Parser.y"
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
    }
    if (current_param) current_param = current_param->next;

    emit("param", (yyvsp[(1) - (1)].info).place, "", "");
    (yyval.b) = !param_error;
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 764 "Parser.y"
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
    }
    if (current_param) current_param = current_param->next;

    emit("param", (yyvsp[(3) - (3)].info).place, "", "");
    (yyval.b) = !param_error;
;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 783 "Parser.y"
    {
    syntax_error("Missing ','");
    yyerrok;
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 789 "Parser.y"
    {
    Symbol* s= lookup((yyvsp[(3) - (4)].str), current_scope);
    if(!s){
        fprintf(stderr,"Line %d:%s is not declared\n",yylineno, (yyvsp[(3) - (4)].str));
    } 
    else if (!s->initialized) {
        fprintf(stderr,"Line %d:Variable  %s used before initialization\n",yylineno, (yyvsp[(3) - (4)].str));
    }
    /* --- ADDED TYPE CHECK --- */
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

  case 89:

/* Line 1455 of yacc.c  */
#line 809 "Parser.y"
    {
        syntax_error("Missing '(' after 'switch'");
        while (yychar != CLOSEDBRACKET && yychar != OPENBRACE && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 815 "Parser.y"
    {
    syntax_error("Missing ')' after 'switch' condition");
        while (yychar != OPENBRACE && yychar != 0)
        yychar = yylex();
        yyerrok;
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 827 "Parser.y"
    { //net2aked en identifier of type int 3lshan manensash
        current_switch_id = NULL;
        int end = nextQuad();
        for (int i = 0; i < case_count; i++)
            addjump(cases[i], end);
        case_count = 0;
    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 837 "Parser.y"
    {
    current_switch_id = NULL;
    int end = nextQuad();
    for (int i = 0; i < case_count; i++)
        addjump(cases[i], end);
    case_count = 0;
  ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 844 "Parser.y"
    {
        syntax_error("Missing '{' after 'switch'");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 855 "Parser.y"
    {
    syntax_error("Missing '}' at end of switch statement");
    while (yychar != DOT && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 865 "Parser.y"
    {
    syntax_error("Missing '}' at end of switch statement");
    while (yychar != DOT && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 875 "Parser.y"
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

  case 99:

/* Line 1455 of yacc.c  */
#line 885 "Parser.y"
    {
    syntax_error("Missing '(' after 'case'");
    while (yychar != CLOSEDBRACKET && yychar != OPENBRACE && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 891 "Parser.y"
    {
    syntax_error("Missing ')' after 'case' condition");
    while (yychar != OPENBRACE && yychar != 0)
    yychar = yylex();
    yyerrok;
;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 902 "Parser.y"
    {
        if ((yyvsp[(1) - (7)].i) != -1) {
            cases[case_count] = nextQuad();
            case_count++;
            emit("goto", "", "", "");
            addjump((yyvsp[(1) - (7)].i),nextQuad());
        }
    ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 910 "Parser.y"
    {
     syntax_error("Missing '{' after 'case'");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 919 "Parser.y"
    {
        syntax_error("Missing '}' after 'case' block");
        while (yychar != DOT && yychar != 0)
            yychar = yylex();
        yyerrok;
    ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 927 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        /* --- HER LOGIC: Code Gen --- */
        char *t = newTemp();
        emit("and", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 943 "Parser.y"
    {
    /* --- YOUR LOGIC --- */
    if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        /* --- HER LOGIC --- */
        char *t = newTemp();
        emit("or", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 959 "Parser.y"
    {
    /* --- YOUR LOGIC --- */
    if ((yyvsp[(2) - (2)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        
        /* --- HER LOGIC --- */
        char *t = newTemp();
        emit("not", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 976 "Parser.y"
    {
   (yyval.info).type = (yyvsp[(1) - (1)].info).type;
   (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 980 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. AND operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("and", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 997 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if ((yyvsp[(1) - (3)].info).type != SYM_BOOL || (yyvsp[(3) - (3)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. OR operator requires boolean operands.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("or", (yyvsp[(1) - (3)].info).place, (yyvsp[(3) - (3)].info).place, t);
        (yyval.info).place = t;
    }
;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1014 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if ((yyvsp[(2) - (2)].info).type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Type mismatch. NOT operator requires boolean operand.\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        (yyval.info).type = SYM_BOOL;
        char *t = newTemp();
        emit("not", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1033 "Parser.y"
    {(yyval.info)=(yyvsp[(2) - (3)].info);;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1034 "Parser.y"
    {
    syntax_error("Missing '('");
    while (yychar != CLOSEDBRACKET && yychar != OPENBRACE && yychar != 0)
        yychar = yylex();
    yyerrok;
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1040 "Parser.y"
    {
    syntax_error("Missing ')'");
    while (yychar != OPENBRACE && yychar != 0)
    yychar = yylex();
    yyerrok;
;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1046 "Parser.y"
    {
    syntax_error("Invalid right operand for '>'");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1052 "Parser.y"
    {
    syntax_error("Invalid right operand for '<'");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1058 "Parser.y"
    {
    syntax_error("Invalid right operand for '>='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1064 "Parser.y"
    {
    syntax_error("Invalid right operand for '<='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1070 "Parser.y"
    {
    syntax_error("Invalid right operand for '=='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1076 "Parser.y"
    {
    syntax_error("Invalid right operand for '!='");
    (yyval.info).type = SYM_ERROR;
    (yyval.info).place = NULL;
    yyerrok;
;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1082 "Parser.y"
    {
    /* Check Numerics */
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1100 "Parser.y"
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1117 "Parser.y"
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1134 "Parser.y"
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1151 "Parser.y"
    {
    /* Special Case: Checking equality against a boolean literal */
    if ((yyvsp[(1) - (3)].info).type == SYM_BOOL) {
        (yyval.info).type = SYM_BOOL;
        
        char *t = newTemp();
        /* Note: $3 is a boolean token, usually <str> if you updated the token def */
        /* If $3 is boolean literal (true/false), we assume it's passed as a string */
        emit("==", (yyvsp[(1) - (3)].info).place, ((yyvsp[(3) - (3)].str) ? "true" : "false"), t); 
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Invalid comparison. Cannot compare %s to boolean\n", 
                yylineno, type_name((yyvsp[(1) - (3)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1169 "Parser.y"
    {
    /* Allow: (Num == Num) OR (Bool == Bool) */
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1187 "Parser.y"
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1202 "Parser.y"
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
        (yyval.info).place = NULL;
    }
;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1221 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if (!type_compatible(s->type, (yyvsp[(3) - (3)].info).type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name((yyvsp[(3) - (3)].info).type), type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            /* --- HER LOGIC: Code Generation --- */
            s->initialized = true;
            
            // $1 is the variable name, $3.place is the source temp/var
            emit("=", (yyvsp[(3) - (3)].info).place, "", (yyvsp[(1) - (3)].str)); 
            
            /* --- PASS UP --- */
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1252 "Parser.y"
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

  case 130:

/* Line 1455 of yacc.c  */
#line 1275 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable  %s  used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if (!type_compatible(s->type, (yyvsp[(3) - (3)].info).type)) {
            fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", 
                    yylineno, type_name((yyvsp[(3) - (3)].info).type), type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            s->initialized = true;
            emit("=", (yyvsp[(3) - (3)].info).place, "", (yyvsp[(1) - (3)].str));
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1295 "Parser.y"
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
             /* Code Gen */
             emit("++", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
             (yyval.info).type = s->type;
             (yyval.info).place = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1322 "Parser.y"
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
             /* Code Gen */
             emit("--", (yyvsp[(1) - (2)].str), "", (yyvsp[(1) - (2)].str));
             (yyval.info).type = s->type;
             (yyval.info).place = (yyvsp[(1) - (2)].str);
        }
    ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1349 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            /* --- HER LOGIC: Code Generation --- */
           // s->initialized = true;
            // $1 is the variable name, $3.place is the source temp/var
            emit("+", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            /* --- PASS UP --- */
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1378 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            /* --- HER LOGIC: Code Generation --- */
           // s->initialized = true;
            // $1 is the variable name, $3.place is the source temp/var
            emit("-", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            /* --- PASS UP --- */
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
       
    ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1407 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
        if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            /* --- HER LOGIC: Code Generation --- */
           // s->initialized = true;
            // $1 is the variable name, $3.place is the source temp/var
            emit("*", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            /* --- PASS UP --- */
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
   
    ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1436 "Parser.y"
    {
        Symbol* s = lookup((yyvsp[(1) - (3)].str), current_scope);
       if (!s) {
            fprintf(stderr,"Line %d:Variable %s used before declaration\n",yylineno,(yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else if (s->kind == SYM_CONST) {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        }
        else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
             fprintf(stderr, "Line %d: Addition applied to non-numeric type %s",yylineno, type_name(s->type));
            (yyval.info).type = SYM_ERROR;
            (yyval.info).place = NULL;
        } 
        else {
            /* --- HER LOGIC: Code Generation --- */
           // s->initialized = true;
            // $1 is the variable name, $3.place is the source temp/var
            emit("/", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].info).place, (yyvsp[(1) - (3)].str)); 
            /* --- PASS UP --- */
            (yyval.info).type = s->type;
            (yyval.info).place = (yyvsp[(1) - (3)].str);
        }
    ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1463 "Parser.y"
    {
        syntax_error("Invalid expression after '+='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1469 "Parser.y"
    {
        syntax_error("Invalid expression after '-='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1475 "Parser.y"
    {
        syntax_error("Invalid expression after '*='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1481 "Parser.y"
    {
        syntax_error("Invalid expression after '/='");
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
        yyerrok;
    ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1489 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
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

  case 142:

/* Line 1455 of yacc.c  */
#line 1514 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot subtract non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
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

  case 143:

/* Line 1455 of yacc.c  */
#line 1539 "Parser.y"
    { 
    /* Pass through both fields */
    (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;
;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1546 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if (((yyvsp[(1) - (3)].info).type != SYM_INT && (yyvsp[(1) - (3)].info).type != SYM_FLOAT) || 
             ((yyvsp[(3) - (3)].info).type != SYM_INT && (yyvsp[(3) - (3)].info).type != SYM_FLOAT)) {
        fprintf(stderr, "Line %d: Cannot multiply non-numeric types\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
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

  case 145:

/* Line 1455 of yacc.c  */
#line 1568 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = NULL;
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

  case 146:

/* Line 1455 of yacc.c  */
#line 1584 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = NULL;
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

  case 147:

/* Line 1455 of yacc.c  */
#line 1600 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1604 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].info).type == SYM_ERROR || (yyvsp[(3) - (3)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR; 
        (yyval.info).place = NULL;
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

  case 149:

/* Line 1455 of yacc.c  */
#line 1620 "Parser.y"
    { (yyval.info).type = (yyvsp[(1) - (1)].info).type;
    (yyval.info).place = (yyvsp[(1) - (1)].info).place;;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1624 "Parser.y"
    { 
    /* Pass through both Type and Place from the inner expression */
    (yyval.info) = (yyvsp[(2) - (3)].info); 
;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1628 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(2) - (2)].info).type == SYM_ERROR) {
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if ((yyvsp[(2) - (2)].info).type == SYM_INT || (yyvsp[(2) - (2)].info).type == SYM_FLOAT) {
        /* Valid numeric type, propagate the type up */
        (yyval.info).type = (yyvsp[(2) - (2)].info).type;
        
        /* --- HER LOGIC: Code Generation --- */
        char *t = newTemp();
        emit("negative", (yyvsp[(2) - (2)].info).place, "", t);
        (yyval.info).place = t;
    }
    else {
        fprintf(stderr, "Line %d: Unary minus applied to non-numeric type %s\n", 
                yylineno, type_name((yyvsp[(2) - (2)].info).type));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1650 "Parser.y"
    { 
    (yyval.info).type = SYM_INT;    // For your Type Checking
    (yyval.info).place = (yyvsp[(1) - (1)].str);        // For her Code Gen (The string value "5", "10", etc.)
;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1654 "Parser.y"
    { 
    (yyval.info).type = SYM_FLOAT;  // For your Type Checking
    (yyval.info).place = (yyvsp[(1) - (1)].str);        // For her Code Gen (The string value "3.14", etc.)
;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1658 "Parser.y"
    { 
    Symbol* s = lookup((yyvsp[(1) - (1)].str), current_scope);
    
    /* --- YOUR LOGIC: Type Checking --- */
    if (!s) {
        fprintf(stderr,"Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL) {
        fprintf(stderr, "Line %d: Unsupported type in expression: %s\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        if (!s->initialized) {
            fprintf(stderr,"Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (1)].str));
            // Note: We flag the error but usually continue to avoid cascading errors, 
            // or you can set SYM_ERROR here if you want to stop compilation.
            // For now, I will allow it to proceed with code gen to catch other errors:
        }
        
        s->used = true;
        
        /* --- MERGED OUTPUT --- */
        (yyval.info).type = s->type;  // Pass the type up
        (yyval.info).place = (yyvsp[(1) - (1)].str);      // Pass the variable name ("x", "count") up
    }
;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1687 "Parser.y"
    {
    /* --- YOUR LOGIC: Type Checking --- */
    if ((yyvsp[(1) - (1)].info).type == SYM_VOID) {
        fprintf(stderr, "Line %d: Void function used in expression\n", yylineno);
        (yyval.info).type = SYM_ERROR;
        (yyval.info).place = NULL;
    }
    else {
        /* Pass through the result from function_call */
        (yyval.info).type = (yyvsp[(1) - (1)].info).type;
        (yyval.info).place = (yyvsp[(1) - (1)].info).place;
    }
;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1702 "Parser.y"
    {
    current_scope = create_table(211, current_scope);
;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1707 "Parser.y"
    {
        SymbolTable* old = current_scope;
        print_table(current_scope);
        report_unused(current_scope);
        printf("_____________________________ \n");
        current_scope = current_scope->parent;
        free_table(old);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 4057 "Parser.tab.c"
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
#line 1717 "Parser.y"


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
    extern char *yytext;
    fprintf(stderr, "Line %d: %s (found '%s')\n", 
            yylineno-1, msg, yytext);
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

int main(int argc, char **argv)
{
    current_scope = create_table(211, NULL); // global scope
    initQuadTable();
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin)
        {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        print_table(current_scope);
        report_unused(current_scope);
        printQuadruples();
        free_table(current_scope);
        return 0;
    }

    return 1;
}
