
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
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    SymbolTable *current_scope;
    Symbol *current_function = NULL;
    Param *current_param = NULL;
    int arg_count = 0;
    bool param_error = false;
    DATATYPE current_type;
    KIND current_kind;
    void report_unused(SymbolTable * table);



/* Line 189 of yacc.c  */
#line 99 "Parser.tab.c"

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
#line 27 "Parser.y"

#include "enums_def.h"



/* Line 209 of yacc.c  */
#line 129 "Parser.tab.c"

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
#line 31 "Parser.y"

    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;



/* Line 214 of yacc.c  */
#line 213 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 225 "Parser.tab.c"

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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNRULES -- Number of states.  */
#define YYNSTATES  230

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
      43,    45,    47,    50,    53,    54,    58,    60,    64,    68,
      72,    76,    89,   100,   118,   130,   143,   150,   156,   167,
     170,   175,   179,   183,   193,   202,   203,   209,   213,   215,
     219,   236,   246,   248,   251,   262,   266,   270,   273,   275,
     279,   283,   286,   290,   294,   298,   302,   306,   310,   314,
     318,   322,   326,   330,   334,   337,   340,   344,   348,   352,
     356,   360,   364,   366,   370,   374,   378,   380,   384,   386,
     390,   393,   395,   397,   399,   401,   402
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    84,    -1,    65,    -1,    68,    -1,
      72,    -1,    79,    -1,    76,    -1,    70,    -1,    69,    -1,
      75,    -1,    56,    85,    -1,    56,    -1,    50,    -1,    22,
      -1,    23,    -1,    21,    -1,    24,    -1,    63,    42,    -1,
      63,    67,    -1,    -1,    64,    66,    67,    -1,    25,    -1,
      25,    34,    85,    -1,    25,    34,    12,    -1,    25,    34,
      10,    -1,    25,    34,    82,    -1,    43,     7,    82,     8,
      13,    89,    61,    45,    14,    90,    44,    68,    -1,    43,
       7,    82,     8,    13,    89,    61,    45,    14,    90,    -1,
      43,     7,    82,     8,    13,    89,    61,    45,    14,    90,
      44,    13,    89,    61,    45,    14,    90,    -1,    48,    13,
      89,    61,    45,    14,    90,    49,     7,    82,     8,    -1,
      46,     7,    89,    71,    20,    84,     8,    13,    61,    45,
      14,    90,    -1,    22,    25,    34,    85,    47,    85,    -1,
      25,    34,    85,    47,    85,    -1,    52,     7,    82,     8,
      13,    89,    61,    45,    14,    90,    -1,    63,    25,    -1,
      63,    25,    20,    73,    -1,    63,    25,     7,    -1,    57,
      25,     7,    -1,    74,    89,    73,     8,    13,    61,    45,
      14,    90,    -1,    74,     8,    13,    89,    61,    45,    14,
      90,    -1,    -1,    25,     7,    77,    78,     8,    -1,    25,
       7,     8,    -1,    85,    -1,    78,    20,    85,    -1,    53,
       7,    25,     8,    13,    89,    80,    55,    13,    89,    61,
      45,    14,    90,    14,    90,    -1,    53,     7,    25,     8,
      13,    89,    80,    14,    90,    -1,    81,    -1,    81,    80,
      -1,    54,     7,     9,     8,    13,    89,    61,    45,    14,
      90,    -1,    82,    39,    83,    -1,    82,    40,    83,    -1,
      41,    83,    -1,    83,    -1,    82,    39,    85,    -1,    82,
      40,    85,    -1,    41,    85,    -1,     7,    82,     8,    -1,
      85,    28,    85,    -1,    85,    26,    85,    -1,    85,    27,
      85,    -1,    85,    29,    85,    -1,    85,    30,    12,    -1,
      85,    30,    85,    -1,    85,    31,    12,    -1,    85,    31,
      85,    -1,    25,    34,    85,    -1,    25,    34,    10,    -1,
      25,    34,    82,    -1,    25,    32,    -1,    25,    33,    -1,
      25,    36,    85,    -1,    25,    35,    85,    -1,    25,    37,
      85,    -1,    25,    38,    85,    -1,    85,     4,    86,    -1,
      85,     3,    86,    -1,    86,    -1,    86,     5,    87,    -1,
      86,     6,    87,    -1,    86,    16,    87,    -1,    87,    -1,
      88,    17,    87,    -1,    88,    -1,     7,    85,     8,    -1,
       3,    88,    -1,     9,    -1,    11,    -1,    25,    -1,    76,
      -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   103,   105,   105,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   122,   135,   137,   143,
     149,   155,   164,   173,   181,   180,   186,   198,   215,   231,
     248,   265,   270,   274,   283,   288,   293,   310,   330,   335,
     349,   364,   377,   390,   396,   402,   401,   437,   466,   498,
     527,   548,   568,   568,   570,   575,   585,   595,   605,   610,
     624,   638,   651,   652,   663,   674,   685,   696,   706,   717,
     727,   739,   766,   792,   819,   834,   849,   869,   889,   904,
     919,   933,   947,   949,   963,   983,  1002,  1004,  1018,  1020,
    1021,  1033,  1034,  1035,  1061,  1076,  1081
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
  "declaration", "$@1", "inner_declaration", "Ifstmt", "repeat", "forloop",
  "iterator", "whileloop", "parameters", "function_header", "function",
  "function_call", "$@2", "list", "switchstmt", "case_structure",
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
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    64,    65,    66,    65,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    70,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    77,    76,    76,    78,    78,
      79,    79,    80,    80,    81,    82,    82,    82,    82,    82,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    86,    87,    87,    88,
      88,    88,    88,    88,    88,    89,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     3,     1,     3,     3,     3,
       3,    12,    10,    17,    11,    12,     6,     5,    10,     2,
       4,     3,     3,     9,     8,     0,     5,     3,     1,     3,
      16,     9,     1,     2,    10,     3,     3,     2,     1,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     3,     1,     3,
       2,     1,     1,     1,     1,     0,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    18,    19,    21,     0,     0,     0,     0,    17,
       0,     0,    16,     0,     0,     2,     0,     4,     0,    24,
       7,     8,    13,    12,     9,    95,    14,    11,    10,     6,
      45,    74,    75,     0,     0,     0,     0,     0,     0,    95,
      95,     0,     0,     0,     0,    91,    92,    93,    94,    15,
      82,    86,    88,     0,     1,     3,    26,    22,    23,     0,
       0,     0,    47,     0,     0,    72,     0,    73,    58,    71,
      77,    76,    78,    79,     0,     0,     0,     0,     0,     0,
      90,     0,     0,     0,     0,     0,     0,     0,    42,     5,
      41,     0,    26,    25,    95,     0,     0,     0,    48,     0,
       0,    57,    61,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,    81,
      80,    83,    84,    85,    87,    29,    28,    30,    27,     0,
      39,     0,    46,     0,    62,    55,    59,    56,    60,    64,
      65,    63,    66,    67,    68,    69,    70,    95,     0,     0,
       0,     0,    95,    95,     0,     0,     0,    49,     0,     0,
       0,     0,     0,    96,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    96,     0,
       0,     0,    37,     0,     0,     0,     0,    96,     0,    53,
      44,    96,    96,    36,     0,     0,    96,     0,    51,    95,
      43,    32,     0,     0,    38,     0,     0,     0,    96,    34,
      95,     0,    95,    31,    35,     0,     0,     0,     0,    96,
       0,     0,     0,     0,    96,    96,    96,    54,    50,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    59,    58,
      21,    22,    23,   114,    24,    96,    25,    26,    48,    63,
      97,    28,   176,   177,    67,    68,    29,    75,    50,    51,
      52,    61,   173
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -176
static const yytype_int16 yypact[] =
{
     409,  -176,  -176,  -176,  -176,   404,    12,    19,    23,  -176,
      25,    36,   185,    47,    78,  -176,    39,  -176,    -1,  -176,
    -176,  -176,  -176,  -176,  -176,    82,  -176,  -176,  -176,  -176,
     100,  -176,  -176,   113,   185,   185,   185,   185,   184,  -176,
    -176,   184,    87,   185,   185,  -176,  -176,   110,  -176,    65,
      75,  -176,   101,   112,  -176,   409,    11,  -176,  -176,   103,
     117,   190,  -176,   185,   184,  -176,   398,    53,  -176,   447,
      65,    65,    65,    65,     7,   447,    17,   409,    14,   118,
    -176,    79,   185,   185,   185,   185,   185,   185,  -176,  -176,
    -176,    64,    91,  -176,  -176,   106,   124,    15,    65,    26,
     441,  -176,   447,   398,   398,   185,   185,   185,   185,   130,
     476,   131,   121,   114,   129,   105,   139,   146,  -176,    75,
      75,  -176,  -176,  -176,  -176,  -176,  -176,    53,   447,   409,
     140,   149,  -176,   185,  -176,  -176,   447,  -176,   447,    65,
      65,    65,    65,  -176,    65,  -176,    65,  -176,   133,   185,
     138,   176,  -176,  -176,   125,   190,   409,    65,   409,   185,
       1,   457,   161,  -176,   409,   119,   213,  -176,   132,   136,
       5,   185,   169,   135,   141,   182,     6,   119,  -176,   225,
     262,   185,    65,   409,   196,   274,   195,  -176,   192,  -176,
    -176,  -176,  -176,    65,   162,   184,  -176,   200,  -176,  -176,
    -176,   174,   311,    71,  -176,   207,   409,    27,  -176,  -176,
    -176,   186,  -176,  -176,  -176,   409,   323,   409,   199,  -176,
     206,   360,   216,   372,  -176,  -176,  -176,  -176,  -176,  -176
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -176,  -176,  -176,   -70,   -45,   -48,  -176,  -176,  -176,   193,
      38,  -176,  -176,  -176,  -176,    98,  -176,  -176,     0,  -176,
    -176,  -176,    77,  -176,   -27,   -41,   107,    -6,    13,   156,
     212,   -38,  -175
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      27,    76,    77,   190,    82,    83,    49,   115,    82,    83,
      89,    74,   198,    95,    78,   111,   200,   201,    90,    38,
     187,   204,   116,   132,    56,   101,    39,    69,    70,    71,
      72,    73,    41,   214,   134,   133,    40,    99,    81,   112,
     212,    57,   113,    42,   222,    91,   103,   104,   171,   227,
     228,   229,   181,   103,   104,    27,   129,    98,   100,   154,
     102,   188,   135,   137,   127,   103,   104,    43,    82,    83,
       6,    64,    53,    45,   125,    46,   126,    27,    54,   209,
      84,    85,    82,    83,    55,   128,   168,   118,   169,    47,
      60,    86,   103,   104,   174,   119,   120,   136,   138,   139,
     140,   141,   142,   144,   146,    66,    89,    95,    62,   158,
     103,   104,    79,   194,   164,   165,    43,    30,    87,    88,
      64,    89,    45,    65,    46,    91,   117,   157,    92,    27,
      94,   130,   131,    43,    89,    89,   211,    44,    47,    45,
      89,    46,   143,   160,   147,   218,   148,   220,   149,   150,
     151,    27,   152,   170,    66,    47,    27,    89,    27,   153,
     155,   206,   156,   161,    27,   182,    27,   159,   203,   172,
     166,    89,   215,   175,   217,   193,    89,   179,    89,    27,
      27,   180,   183,    27,   184,    27,   185,    43,    43,   186,
     163,    64,    44,    45,    45,    46,    46,     1,     2,     3,
       4,     5,    27,   195,   197,   199,    27,   202,   205,    47,
      47,     1,     2,     3,     4,    27,    27,    27,   207,     6,
     210,    27,     7,    27,     8,    66,     9,   178,    10,    11,
     225,   216,    12,    13,     1,     2,     3,     4,     5,   191,
     121,   122,   123,   124,   221,   213,     1,     2,     3,     4,
       5,   223,    93,   167,   189,    80,     6,   162,     0,     7,
       0,     8,     0,     9,     0,    10,    11,     0,     6,    12,
      13,     7,     0,     8,     0,     9,   192,    10,    11,     0,
       0,    12,    13,     1,     2,     3,     4,     5,   196,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       0,     0,     0,     0,     0,     6,     0,     0,     7,     0,
       8,     0,     9,     0,    10,    11,     0,     6,    12,    13,
       7,     0,     8,     0,     9,   208,    10,    11,     0,     0,
      12,    13,     1,     2,     3,     4,     5,   219,     0,     0,
       0,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     6,     0,     0,     7,     0,     8,
       0,     9,     0,    10,    11,     0,     6,    12,    13,     7,
       0,     8,     0,     9,   224,    10,    11,     0,     0,    12,
      13,     1,     2,     3,     4,     5,   226,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
       0,    43,     0,     6,     0,    64,     7,    45,     8,    46,
       9,    30,    10,    11,     0,     6,    12,    13,     7,     0,
       8,     0,     9,    47,    10,    11,     0,     0,    12,    13,
       1,     2,     3,     4,     5,     0,    31,    32,    33,    34,
      35,    36,    37,     0,    82,    83,     0,     0,     0,   118,
      82,    83,     6,     0,     0,     7,     0,     8,     0,     9,
       0,    10,    11,     0,     0,    12,    13,   105,   106,   107,
     108,   109,   110,   105,   106,   107,   108,   109,   110,    43,
       0,     0,     0,    44,     0,    45,     0,    46,   145,    31,
      32,    33,    34,    35,    36,    37,     0,     0,     0,     0,
       0,    47
};

static const yytype_int16 yycheck[] =
{
       0,    39,    40,   178,     3,     4,    12,    77,     3,     4,
      55,    38,   187,    61,    41,     8,   191,   192,     7,     7,
      14,   196,     8,     8,    25,    66,     7,    33,    34,    35,
      36,    37,     7,   208,     8,    20,    13,    64,    44,    22,
      13,    42,    25,     7,   219,    34,    39,    40,    47,   224,
     225,   226,    47,    39,    40,    55,    94,    63,    64,   129,
      66,    55,   103,   104,    91,    39,    40,     3,     3,     4,
      43,     7,    25,     9,    10,    11,    12,    77,     0,     8,
       5,     6,     3,     4,    45,    91,   156,     8,   158,    25,
       8,    16,    39,    40,   164,    82,    83,   103,   104,   105,
     106,   107,   108,   109,   110,    41,   151,   155,     8,   147,
      39,    40,    25,   183,   152,   153,     3,     7,    17,     7,
       7,   166,     9,    10,    11,    34,     8,   133,    25,   129,
      13,    25,     8,     3,   179,   180,   206,     7,    25,     9,
     185,    11,    12,   149,    13,   215,    25,   217,    34,    20,
      45,   151,    13,   159,    41,    25,   156,   202,   158,    13,
      20,   199,    13,    25,   164,   171,   166,    34,   195,     8,
      45,   216,   210,    54,   212,   181,   221,    45,   223,   179,
     180,    45,    13,   183,    49,   185,    45,     3,     3,     7,
      14,     7,     7,     9,     9,    11,    11,    21,    22,    23,
      24,    25,   202,     7,     9,    13,   206,    45,     8,    25,
      25,    21,    22,    23,    24,   215,   216,   217,    44,    43,
      13,   221,    46,   223,    48,    41,    50,    14,    52,    53,
      14,    45,    56,    57,    21,    22,    23,    24,    25,    14,
      84,    85,    86,    87,    45,   207,    21,    22,    23,    24,
      25,    45,    59,   155,   177,    43,    43,   150,    -1,    46,
      -1,    48,    -1,    50,    -1,    52,    53,    -1,    43,    56,
      57,    46,    -1,    48,    -1,    50,    14,    52,    53,    -1,
      -1,    56,    57,    21,    22,    23,    24,    25,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,
      48,    -1,    50,    -1,    52,    53,    -1,    43,    56,    57,
      46,    -1,    48,    -1,    50,    14,    52,    53,    -1,    -1,
      56,    57,    21,    22,    23,    24,    25,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    46,    -1,    48,
      -1,    50,    -1,    52,    53,    -1,    43,    56,    57,    46,
      -1,    48,    -1,    50,    14,    52,    53,    -1,    -1,    56,
      57,    21,    22,    23,    24,    25,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,     3,    -1,    43,    -1,     7,    46,     9,    48,    11,
      50,     7,    52,    53,    -1,    43,    56,    57,    46,    -1,
      48,    -1,    50,    25,    52,    53,    -1,    -1,    56,    57,
      21,    22,    23,    24,    25,    -1,    32,    33,    34,    35,
      36,    37,    38,    -1,     3,     4,    -1,    -1,    -1,     8,
       3,     4,    43,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    52,    53,    -1,    -1,    56,    57,    26,    27,    28,
      29,    30,    31,    26,    27,    28,    29,    30,    31,     3,
      -1,    -1,    -1,     7,    -1,     9,    -1,    11,    12,    32,
      33,    34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    50,
      52,    53,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    68,    69,    70,    72,    74,    75,    76,    79,    84,
       7,    32,    33,    34,    35,    36,    37,    38,     7,     7,
      13,     7,     7,     3,     7,     9,    11,    25,    76,    85,
      86,    87,    88,    25,     0,    45,    25,    42,    67,    66,
       8,    89,     8,    77,     7,    10,    41,    82,    83,    85,
      85,    85,    85,    85,    82,    85,    89,    89,    82,    25,
      88,    85,     3,     4,     5,     6,    16,    17,     7,    62,
       7,    34,    25,    67,    13,    63,    73,    78,    85,    82,
      85,    83,    85,    39,    40,    26,    27,    28,    29,    30,
      31,     8,    22,    25,    71,    61,     8,     8,     8,    86,
      86,    87,    87,    87,    87,    10,    12,    82,    85,    89,
      25,     8,     8,    20,     8,    83,    85,    83,    85,    85,
      85,    85,    85,    12,    85,    12,    85,    13,    25,    34,
      20,    45,    13,    13,    61,    20,    13,    85,    89,    34,
      85,    25,    84,    14,    89,    89,    45,    73,    61,    61,
      85,    47,     8,    90,    61,    54,    80,    81,    14,    45,
      45,    47,    85,    13,    49,    45,     7,    14,    55,    80,
      90,    14,    14,    85,    61,     7,    14,     9,    90,    13,
      90,    90,    45,    82,    90,     8,    89,    44,    14,     8,
      13,    61,    13,    68,    90,    89,    45,    89,    61,    14,
      61,    45,    90,    45,    14,    14,    14,    90,    90,    90
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
#line 103 "Parser.y"
    { printf("Correct Syntax\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 108 "Parser.y"
    {
    if (!current_function)
    {
        fprintf(stderr, "Line %d:Return Statement not inside a function\n", yylineno);
    }
    else if (!type_compatible(current_function->type, (yyvsp[(2) - (2)].dtype)))
    {
        fprintf(stderr, "Line %d: Return type mismatch. Function %s returns %s, but returning %s\n",
                yylineno,
                current_function->name,
                type_name(current_function->type),
                type_name((yyvsp[(2) - (2)].dtype)));
    }
;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 123 "Parser.y"
    {
    if (!current_function)
    {
        fprintf(stderr, "Line %d: Return statement not inside a function\n", yylineno);
    }
    else if (current_function->type != SYM_VOID)
    {
        fprintf(stderr, "Line %d: Function '%s' should return %s\n",
                yylineno, current_function->name,
                type_name(current_function->type));
    }
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 138 "Parser.y"
    {
    (yyval.dtype) = SYM_INT;
    current_type = SYM_INT;
    current_kind = VAR;
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 144 "Parser.y"
    {
    (yyval.dtype) = SYM_FLOAT;
    current_type = SYM_FLOAT;
    current_kind = VAR;
;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 150 "Parser.y"
    {
    (yyval.dtype) = SYM_BOOL;
    current_type = SYM_BOOL;
    current_kind = VAR;
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 156 "Parser.y"
    {
    (yyval.dtype) = SYM_STRING;
    current_type = SYM_STRING;
    current_kind = VAR;
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    {
    current_type = (yyvsp[(1) - (2)].dtype);
    current_kind = SYM_CONST;
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    {
    current_kind = SYM_CONST;
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 187 "Parser.y"
    { // Multiple declaration check , Symbol insertion
    if (lookup_current((yyvsp[(1) - (1)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Multiple declaration of variable %s\n ", yylineno, (yyvsp[(1) - (1)].str));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(1) - (1)].str), current_type, current_kind, false, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 199 "Parser.y"
    {
    if (lookup_current((yyvsp[(1) - (3)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Multiple declaration of variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if (!type_compatible(current_type, (yyvsp[(3) - (3)].dtype)))
    {
        fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", yylineno, type_name((yyvsp[(3) - (3)].dtype)), type_name(current_type));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 216 "Parser.y"
    {
    if (lookup_current((yyvsp[(1) - (3)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Multiple declaration of variable %s\n ", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if (!type_compatible(current_type, SYM_BOOL))
    {
        fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", yylineno, type_name((yyvsp[(3) - (3)].b)), type_name(current_type));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 232 "Parser.y"
    {
    if (lookup_current((yyvsp[(1) - (3)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Multiple declaration of variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if (!type_compatible(current_type, SYM_STRING))
    {
        // ERROR WAS HERE: changed $3 to current_type
        fprintf(stderr, "Line %d:Type mismatch: cannot assign string to %s\n", yylineno, type_name(current_type));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 249 "Parser.y"
    { // Multiple declaration check , Symbol insertion
    if (lookup_current((yyvsp[(1) - (3)].str), current_scope))
    {
        fprintf(stderr, "Line %d:Multiple declaration of variable %s\n", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if (!type_compatible(current_type, (yyvsp[(3) - (3)].dtype)))
    {
        fprintf(stderr, "Line %d:Type mismatch: cannot assign %s to %s\n", yylineno, type_name((yyvsp[(3) - (3)].dtype)), type_name(current_type));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(1) - (3)].str), current_type, current_kind, true, NULL);
        insert(s, current_scope);
    }
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    {
    if ((yyvsp[(4) - (6)].dtype) != SYM_INT || (yyvsp[(6) - (6)].dtype) != SYM_INT)
    {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }
    if (lookup_current((yyvsp[(2) - (6)].str), current_scope))
    {
        fprintf(stderr, "Line %d:iterator %s has been declared before \n", yylineno, (yyvsp[(2) - (6)].str));
    }
    else
    {
        Symbol *s = create_symbol((yyvsp[(2) - (6)].str), SYM_INT, VAR, true, NULL);
        insert(s, current_scope);
        s->used = true;
    }
;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 311 "Parser.y"
    {
    if ((yyvsp[(3) - (5)].dtype) != SYM_INT || (yyvsp[(5) - (5)].dtype) != SYM_INT)
    {
        fprintf(stderr, "Line %d: For loop range must be Integers\n", yylineno);
    }
    Symbol *s = lookup((yyvsp[(1) - (5)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:Variable %s used before declaration\n", yylineno, (yyvsp[(1) - (5)].str));
    }
    else
    {
        s->initialized = true;
        s->used = true;
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 336 "Parser.y"
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

  case 40:

/* Line 1455 of yacc.c  */
#line 350 "Parser.y"
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

  case 41:

/* Line 1455 of yacc.c  */
#line 365 "Parser.y"
    {

    if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
        fprintf(stderr, "Line %d:Function %s redeclared \n", yylineno, (yyvsp[(2) - (3)].str));
    else
    {
        ParamList *plist = create_param_list();
        Symbol *f = create_symbol((yyvsp[(2) - (3)].str), (yyvsp[(1) - (3)].dtype), FUNC, true, plist);
        insert(f, current_scope);
        current_function = f;
    }
;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 378 "Parser.y"
    {
    if (lookup_current((yyvsp[(2) - (3)].str), current_scope))
        fprintf(stderr, "Line %d:Function %s redeclared \n", yylineno, (yyvsp[(2) - (3)].str));
    else
    {
        ParamList *plist = create_param_list();
        Symbol *f = create_symbol((yyvsp[(2) - (3)].str), SYM_VOID, FUNC, true, plist);
        insert(f, current_scope);
        current_function = f;
    }
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 402 "Parser.y"
    {
    Symbol *f = lookup((yyvsp[(1) - (2)].str), current_scope);
    if (!f)
        fprintf(stderr, "Line %d:Function %s not defined \n", yylineno, (yyvsp[(1) - (2)].str));
    else if (f->kind != FUNC)
        fprintf(stderr, "Line %d:Identifier %s is not a function\n", yylineno, (yyvsp[(1) - (2)].str));
    else
    {
        current_function = f;
        current_param = f->params->head;
        arg_count = 0;
        param_error = false;
    }
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 417 "Parser.y"
    {
    if (!param_error && current_param != NULL)
    {
        Param *curr_param = current_function->params->head;
        fprintf(stderr, "Line %d:Incorrect number of parameters, function %s expects: (%s", yylineno, current_function->name, type_name(curr_param->type));
        curr_param = curr_param->next;
        while (curr_param)
        {
            fprintf(stderr, ", %s", type_name(curr_param->type));
            curr_param = curr_param->next;
        }
        fprintf(stderr, ")\n");
        param_error = true;
    }
    else
    {
        current_function->used = (yyvsp[(4) - (5)].b);
        (yyval.dtype) = current_function->type;
    }
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 438 "Parser.y"
    {
    Symbol *f = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!f)
        fprintf(stderr, "Line %d:Function %s not defined \n", yylineno, (yyvsp[(1) - (3)].str));
    else if (f->kind != FUNC)
        fprintf(stderr, "Line %d:Identifier %s is not a function\n", yylineno, (yyvsp[(1) - (3)].str));
    else
    {
        if (f->params->size != 0)
        {
            Param *curr_param = current_function->params->head;
            fprintf(stderr, "Line %d:Incorrect number of parameters, function %s expects: (%s", yylineno, current_function->name, type_name(curr_param->type));
            curr_param = curr_param->next;
            while (curr_param)
            {
                fprintf(stderr, ", %s", type_name(curr_param->type));
                curr_param = curr_param->next;
            }
            fprintf(stderr, ")\n");
        }
        else
        {
            f->used = true;
            (yyval.dtype) = f->type;
        }
    }
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 467 "Parser.y"
    {
    arg_count++;
    if (!current_param && !param_error)
    {
        Param *curr_param = current_function->params->head;
        if(curr_param){
        fprintf(stderr, "Line %d:Incorrect number of parameters, function %s expects: (%s", yylineno, current_function->name, type_name(curr_param->type));
        curr_param = curr_param->next;
        while (curr_param)
        {
            fprintf(stderr, ", %s", type_name(curr_param->type));
            curr_param = curr_param->next;
        }
        fprintf(stderr, ")\n");
    } else{
        fprintf(stderr, "Line %d:Incorrect number of parameters, function %s expects no parameters\n", yylineno, current_function->name);
    }
        param_error = true;
    }
    else if (!type_compatible((yyvsp[(1) - (1)].dtype), current_param->type))
    {
        if (!param_error)
        {
            fprintf(stderr, "Line %d:Parameter %d of %s has type %s, expected %s\n", yylineno, arg_count, current_function->name, type_name((yyvsp[(1) - (1)].dtype)), type_name(current_param->type));
            param_error = true;
        }
    }
    if (current_param)
        current_param = current_param->next;
    (yyval.b) = !param_error;
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 499 "Parser.y"
    {
    arg_count++;
    if (!current_param && !param_error)
    {
        Param *curr_param = current_function->params->head;
        fprintf(stderr, "Line %d:Incorrect number of parameters, function %s expects: (%s", yylineno, current_function->name, type_name(curr_param->type));
        curr_param = curr_param->next;
        while (curr_param)
        {
            fprintf(stderr, ", %s", type_name(curr_param->type));
            curr_param = curr_param->next;
        }
        fprintf(stderr, ")\n");
        param_error = true;
    }
    else if (!type_compatible((yyvsp[(3) - (3)].dtype), current_param->type))
    {
        if (!param_error)
        {
            fprintf(stderr, "Line %d:Parameter %d of %s has type %s, expected %s\n", yylineno, arg_count, current_function->name, type_name((yyvsp[(1) - (3)].b)), type_name(current_param->type));
            param_error = true;
        }
    }
    if (current_param)
        current_param = current_param->next;
    (yyval.b) = !param_error;
;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 533 "Parser.y"
    { // net2aked en identifier of type int 3lshan manensash
    Symbol *s = lookup((yyvsp[(3) - (16)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:%s is not declared\n", yylineno, (yyvsp[(3) - (16)].str));
    }
    else if (s->type != SYM_INT)
    {
        fprintf(stderr, "Line %d: Variable %s must be integer", yylineno, (yyvsp[(3) - (16)].str));
    }
    else
    {
        s->used = true;
    }
;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 552 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(3) - (9)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:%s is not declared\n", yylineno, (yyvsp[(3) - (9)].str));
    }
    else if (s->type != SYM_INT)
    {
        fprintf(stderr, "Line %d: Variable %s must be integer", yylineno, (yyvsp[(3) - (9)].str));
    }
    else
    {
        s->used = true;
    }
;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 576 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s or %s are not boolean operands \n", yylineno, (yyvsp[(1) - (3)].dtype), (yyvsp[(3) - (3)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 586 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s or %s are not boolean operands \n", yylineno, (yyvsp[(1) - (3)].dtype), (yyvsp[(3) - (3)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 596 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s is not a boolean operand\n", yylineno, (yyvsp[(2) - (2)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 606 "Parser.y"
    {
    (yyval.dtype) = (yyvsp[(1) - (1)].dtype);
;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 611 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
    {
        (yyval.dtype) = SYM_ERROR;
    }
    else if ((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s or %s are not boolean operands \n", yylineno, (yyvsp[(1) - (3)].dtype), (yyvsp[(3) - (3)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 625 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
    {
        (yyval.dtype) = SYM_ERROR;
    }
    else if ((yyvsp[(1) - (3)].dtype) != SYM_BOOL || (yyvsp[(3) - (3)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s or %s are not boolean operands \n", yylineno, (yyvsp[(1) - (3)].dtype), (yyvsp[(3) - (3)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 639 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(2) - (2)].dtype) != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: %s is not a boolean operand\n", yylineno, (yyvsp[(2) - (2)].dtype));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = SYM_BOOL;
;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 651 "Parser.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 653 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
        ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 664 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
        ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 675 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
        ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 686 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
        ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 697 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_BOOL)
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot %s to boolean", yylineno, type_name((yyvsp[(1) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 707 "Parser.y"
    {
    if (((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) &&
        ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 718 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_BOOL)
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot %s to boolean", yylineno, type_name((yyvsp[(1) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 728 "Parser.y"
    {
    if ((((yyvsp[(1) - (3)].dtype) == SYM_INT || (yyvsp[(1) - (3)].dtype) == SYM_FLOAT) && ((yyvsp[(3) - (3)].dtype) == SYM_INT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)) ||
        ((yyvsp[(1) - (3)].dtype) == SYM_BOOL && (yyvsp[(3) - (3)].dtype) == SYM_BOOL))
        (yyval.dtype) = SYM_BOOL;
    else
    {
        fprintf(stderr, "Line %d:Invalid comparison operands. Cannot compare %s to %s", yylineno, type_name((yyvsp[(1) - (3)].dtype)), type_name((yyvsp[(3) - (3)].dtype)));
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 740 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:Variable %s used before declaration\n", yylineno, (yyvsp[(1) - (3)].str));
        (yyval.dtype) = SYM_ERROR;
    }
    else
    {

        if (!type_compatible(s->type, (yyvsp[(3) - (3)].dtype)))
        {
            fprintf(stderr, "Line %d: Type mismatch: cannot assign %s to %s \n", yylineno, type_name((yyvsp[(3) - (3)].dtype)), type_name(s->type));
        }
        else if (s->kind == SYM_CONST)
        {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
        }
        else
        {
            s->initialized = true;
            (yyval.dtype) = s->type;
        }
    }
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 767 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:Variable %s used before declaration\n", yylineno, (yyvsp[(1) - (3)].str));
        (yyval.dtype) = SYM_ERROR;
    }
    else
    {
        if (!type_compatible(s->type, SYM_STRING))
        {
            fprintf(stderr, "Line %d: Type mismatch: cannot assign string to %s \n", yylineno, type_name(s->type));
        }
        else if (s->kind == SYM_CONST)
        {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
        }
        else
        {
            s->initialized = true;
            (yyval.dtype) = s->type;
        }
    }
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 793 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    // Symbol* s = lookup($1, current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:Variable %s used before declaration\n", yylineno, (yyvsp[(1) - (3)].str));
        (yyval.dtype) = SYM_ERROR;
    }
    else
    {
        if (!type_compatible(s->type, (yyvsp[(3) - (3)].dtype)))
        {
            fprintf(stderr, "Line %d: Type mismatch: cannot assign Boolean to %s \n", yylineno, type_name(s->type));
        }
        else if (s->kind == SYM_CONST)
        {
            fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
        }
        else
        {
            s->initialized = true;
            (yyval.dtype) = s->type;
        }
    }
;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 820 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (2)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (2)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (2)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (2)].str));
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT)
        fprintf(stderr, "Line %d: Increment applied to non-numeric type %s", type_name(s->type));
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 835 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (2)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (2)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (2)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (2)].str));
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT)
        fprintf(stderr, "Line %d: Increment applied to non-numeric type %s", type_name(s->type));
;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 850 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
    {
        fprintf(stderr, "Line %d: Addition applied to non-numeric type %s", type_name(s->type));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = s->type;
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 870 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
    {
        fprintf(stderr, "Line %d: Subtraction applied to non-numeric type %s", type_name(s->type));
        (yyval.dtype) = SYM_ERROR;
    }
    else
        (yyval.dtype) = s->type;
;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 890 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
        fprintf(stderr, "Line %d: Multiplication applied to non-numeric type %s", type_name(s->type));
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 905 "Parser.y"
    {
    Symbol *s = lookup((yyvsp[(1) - (3)].str), current_scope);
    if (!s)
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (!s->initialized)
        fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (3)].str));
    else if (s->kind == SYM_CONST)
    {
        fprintf(stderr, "Line %d:Cannot assign to const variable %s ", yylineno, (yyvsp[(1) - (3)].str));
    }
    else if ((s->type != SYM_INT && s->type != SYM_FLOAT) || ((yyvsp[(3) - (3)].dtype) != SYM_INT && (yyvsp[(3) - (3)].dtype) != SYM_FLOAT))
        fprintf(stderr, "Line %d: Division applied to non-numeric type %s", type_name(s->type));
;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 920 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype) = SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot add non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 934 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype) = SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot subtract non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 947 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 950 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype) = SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot multiply non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 964 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype) = SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot divide non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
    if ((yyvsp[(3) - (3)].dtype) == 0)
    {
        yyerror("Division By zero");
        (yyval.dtype) = SYM_ERROR;
    }
    // else $$=$1/$3;
;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 984 "Parser.y"
    {
    if ((int)(yyvsp[(3) - (3)].dtype) == 0)
    {
        yyerror("Modulo By zero");
    }
    // else $$=(int)$1 % (int)$3;
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    // else if ($1 == SYM_FLOAT || $3 == SYM_FLOAT)
    // $$=SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot mod non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1002 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1005 "Parser.y"
    {
    if ((yyvsp[(1) - (3)].dtype) == SYM_ERROR || (yyvsp[(3) - (3)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_FLOAT || (yyvsp[(3) - (3)].dtype) == SYM_FLOAT)
        (yyval.dtype) = SYM_FLOAT;
    else if ((yyvsp[(1) - (3)].dtype) == SYM_INT && (yyvsp[(3) - (3)].dtype) == SYM_INT)
        (yyval.dtype) = SYM_INT;
    else
    {
        fprintf(stderr, "Line %d: Cannot apply power to non-numeric types\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1018 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1020 "Parser.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1022 "Parser.y"
    {
    if ((yyvsp[(2) - (2)].dtype) == SYM_ERROR)
        (yyval.dtype) = SYM_ERROR;
    else if ((yyvsp[(2) - (2)].dtype) == SYM_INT || (yyvsp[(2) - (2)].dtype) == SYM_FLOAT)
        (yyval.dtype) = (yyvsp[(2) - (2)].dtype);
    else
    {
        fprintf(stderr, "Line %d: Unary minus applied to non-numeric type\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1033 "Parser.y"
    { (yyval.dtype) = SYM_INT; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1034 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 1036 "Parser.y"
    { // handles use before init.
    Symbol *s = lookup((yyvsp[(1) - (1)].str), current_scope);
    if (!s)
    {
        fprintf(stderr, "Line %d:Variable %s not declared\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.dtype) = SYM_ERROR;
    }
    else if (s->type != SYM_INT && s->type != SYM_FLOAT && s->type != SYM_BOOL)
    {
        fprintf(stderr, "Line %d: Unsupported type in expression\n", yylineno, (yyvsp[(1) - (1)].str));
        (yyval.dtype) = SYM_ERROR;
    }
    else
    {
        if (!s->initialized)
        {
            fprintf(stderr, "Line %d:Variable %s used before initialization\n", yylineno, (yyvsp[(1) - (1)].str));
        }
        else
        {
            s->used = true;
            (yyval.dtype) = s->type;
        }
    }
;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1062 "Parser.y"
    {
    if ((yyvsp[(1) - (1)].dtype) == SYM_VOID)
    {
        fprintf(stderr,
                "Line %d: Void function used in expression\n", yylineno);
        (yyval.dtype) = SYM_ERROR;
    }
    else
    {
        (yyval.dtype) = (yyvsp[(1) - (1)].dtype);
    }
;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1076 "Parser.y"
    {
    current_scope = create_table(211, current_scope);
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1081 "Parser.y"
    {
    SymbolTable *old = current_scope;
    current_scope = current_scope->parent;
    report_unused(current_scope);
    // print_table(current_scope);
    free_table(old);
;}
    break;



/* Line 1455 of yacc.c  */
#line 2905 "Parser.tab.c"
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
#line 1089 "Parser.y"


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

int main(int argc, char **argv)
{
    current_scope = create_table(211, NULL); // global scope

    if (argc > 1)
    {
        yyin = fopen(argv[1], "r");
        if (!yyin)
        {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0)
    {
        // report_unused(current_scope);
        free_table(current_scope);
        return 0;
    }

    return 1;
}
