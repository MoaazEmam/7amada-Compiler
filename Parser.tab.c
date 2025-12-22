
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
    void syntax_error(const char* msg);
    void report_unused(SymbolTable * table);



/* Line 189 of yacc.c  */
#line 101 "Parser.tab.c"

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
#line 29 "Parser.y"

#include "enums_def.h"



/* Line 209 of yacc.c  */
#line 131 "Parser.tab.c"

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
#line 33 "Parser.y"

    int i;
    float f;
    char *str;
    _Bool b;
    DATATYPE dtype;



/* Line 214 of yacc.c  */
#line 215 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 227 "Parser.tab.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   644

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  258

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
       0,     0,     3,     5,     8,    11,    13,    17,    21,    25,
      27,    29,    31,    33,    35,    37,    39,    41,    43,    46,
      48,    50,    52,    54,    56,    58,    61,    64,    67,    68,
      72,    74,    78,    82,    86,    90,    94,   105,   114,   130,
     133,   137,   141,   145,   157,   170,   177,   183,   194,   197,
     202,   206,   210,   220,   229,   230,   236,   240,   242,   246,
     263,   273,   275,   278,   289,   293,   297,   300,   302,   306,
     310,   313,   317,   321,   325,   329,   333,   337,   341,   345,
     349,   353,   357,   361,   365,   369,   373,   377,   381,   385,
     389,   393,   397,   401,   404,   407,   411,   415,   419,   423,
     427,   431,   435,   439,   443,   447,   449,   453,   457,   461,
     463,   467,   469,   473,   477,   480,   482,   484,   486,   488,
     489
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    61,     1,
      -1,    62,    -1,    61,    45,    62,    -1,    61,     1,    62,
      -1,    61,    45,     1,    -1,    85,    -1,    65,    -1,    68,
      -1,    73,    -1,    80,    -1,    77,    -1,    71,    -1,    70,
      -1,    76,    -1,    56,    86,    -1,    56,    -1,    50,    -1,
      22,    -1,    23,    -1,    21,    -1,    24,    -1,    63,    42,
      -1,    63,    67,    -1,    63,     1,    -1,    -1,    64,    66,
      67,    -1,    25,    -1,    25,    34,    86,    -1,    25,    34,
      12,    -1,    25,    34,    10,    -1,    25,    34,    83,    -1,
      25,    34,     1,    -1,    43,    69,    13,    90,    61,    45,
      14,    91,    44,    68,    -1,    43,    69,    13,    90,    61,
      45,    14,    91,    -1,    43,    69,    13,    90,    61,    45,
      14,    91,    44,    13,    90,    61,    45,    14,    91,    -1,
      43,     1,    -1,     7,    83,     8,    -1,     7,    83,     1,
      -1,     7,     1,     8,    -1,    48,    13,    90,    61,    45,
      14,    91,    49,     7,    83,     8,    -1,    46,     7,    90,
      72,    20,    85,     8,    13,    61,    45,    14,    91,    -1,
      22,    25,    34,    86,    47,    86,    -1,    25,    34,    86,
      47,    86,    -1,    52,     7,    83,     8,    13,    90,    61,
      45,    14,    91,    -1,    63,    25,    -1,    63,    25,    20,
      74,    -1,    63,    25,     7,    -1,    57,    25,     7,    -1,
      75,    90,    74,     8,    13,    61,    45,    14,    91,    -1,
      75,     8,    13,    90,    61,    45,    14,    91,    -1,    -1,
      25,     7,    78,    79,     8,    -1,    25,     7,     8,    -1,
      86,    -1,    79,    20,    86,    -1,    53,     7,    25,     8,
      13,    90,    81,    55,    13,    90,    61,    45,    14,    91,
      14,    91,    -1,    53,     7,    25,     8,    13,    90,    81,
      14,    91,    -1,    82,    -1,    82,    81,    -1,    54,     7,
       9,     8,    13,    90,    61,    45,    14,    91,    -1,    83,
      39,    84,    -1,    83,    40,    84,    -1,    41,    84,    -1,
      84,    -1,    83,    39,    86,    -1,    83,    40,    86,    -1,
      41,    86,    -1,     7,    83,     1,    -1,     7,     1,     8,
      -1,     7,    83,     8,    -1,    86,    28,     1,    -1,    86,
      28,    86,    -1,    86,    26,     1,    -1,    86,    26,    86,
      -1,    86,    27,     1,    -1,    86,    27,    86,    -1,    86,
      29,     1,    -1,    86,    29,    86,    -1,    86,    30,     1,
      -1,    86,    30,    12,    -1,    86,    30,    86,    -1,    86,
      31,     1,    -1,    86,    31,    12,    -1,    86,    31,    86,
      -1,    25,    34,     1,    -1,    25,     1,    86,    -1,    25,
      34,    86,    -1,    25,    34,    10,    -1,    25,    34,    83,
      -1,    25,    32,    -1,    25,    33,    -1,    25,    36,     1,
      -1,    25,    36,    86,    -1,    25,    35,     1,    -1,    25,
      35,    86,    -1,    25,    37,     1,    -1,    25,    37,    86,
      -1,    25,    38,     1,    -1,    25,    38,    86,    -1,    86,
       4,    87,    -1,    86,     3,    87,    -1,    87,    -1,    87,
       5,    88,    -1,    87,     6,    88,    -1,    87,    16,    88,
      -1,    88,    -1,    89,    17,    88,    -1,    89,    -1,     7,
      86,     1,    -1,     7,    86,     8,    -1,     3,    89,    -1,
       9,    -1,    11,    -1,    25,    -1,    77,    -1,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   105,   106,   111,   112,   113,   117,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   137,
     150,   152,   158,   164,   170,   177,   186,   187,   189,   188,
     194,   206,   222,   238,   255,   271,   277,   280,   282,   286,
     293,   294,   303,   311,   313,   318,   335,   355,   360,   374,
     389,   402,   415,   417,   421,   420,   456,   485,   517,   546,
     567,   587,   587,   589,   594,   604,   614,   624,   629,   643,
     657,   671,   675,   680,   681,   686,   697,   702,   713,   718,
     729,   734,   745,   750,   760,   771,   776,   786,   799,   804,
     809,   836,   862,   889,   904,   918,   923,   942,   947,   966,
     971,   985,   990,  1005,  1019,  1033,  1035,  1049,  1069,  1088,
    1090,  1104,  1107,  1112,  1113,  1125,  1126,  1127,  1153,  1168,
    1173
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
  "declaration", "$@1", "inner_declaration", "Ifstmt", "if_condition",
  "repeat", "forloop", "iterator", "whileloop", "parameters",
  "function_header", "function", "function_call", "$@2", "list",
  "switchstmt", "case_structure", "inner_case", "condition",
  "inner_condition", "assignment", "EXPR", "T", "M", "G", "enter_scope",
  "exit_scope", 0
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
       0,    58,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    64,    65,    65,    66,    65,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    71,    72,    72,    73,    74,    74,
      75,    75,    76,    76,    78,    77,    77,    79,    79,    80,
      80,    81,    81,    82,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    89,    90,
      91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     0,     3,
       1,     3,     3,     3,     3,     3,    10,     8,    15,     2,
       3,     3,     3,    11,    12,     6,     5,    10,     2,     4,
       3,     3,     9,     8,     0,     5,     3,     1,     3,    16,
       9,     1,     2,    10,     3,     3,     2,     1,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       3,     1,     3,     3,     2,     1,     1,     1,     1,     0,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    23,    21,    22,    24,     0,     0,     0,     0,    20,
       0,     0,    19,     0,     0,     2,     0,     5,     0,    28,
      10,    11,    16,    15,    12,   119,    17,    14,    13,     9,
       0,    54,    93,    94,     0,     0,     0,     0,     0,    39,
       0,     0,   119,   119,     0,     0,     0,     0,   115,   116,
     117,   118,    18,   105,   109,   111,     0,     1,     4,     0,
      27,    30,    25,    26,     0,     0,     0,    89,    56,     0,
      88,     0,    91,     0,    92,    67,    90,    97,    98,    95,
      96,    99,   100,   101,   102,     0,     0,     0,   119,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,     0,
       0,    51,     7,     8,     6,    50,     0,    30,    29,   119,
       0,     0,     0,    57,     0,     0,     0,    66,    70,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    41,    40,
       0,     0,     0,     0,     0,     0,     0,   112,   113,   104,
     103,   106,   107,   108,   110,    35,    33,    32,    34,    31,
       0,    48,     0,    55,     0,    72,    71,    73,    64,    68,
      65,    69,    76,    77,    78,    79,    74,    75,    80,    81,
      82,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,     0,   119,   119,     0,     0,     0,    58,     0,     0,
       0,     0,     0,   120,     0,     0,     0,    49,     0,   120,
       0,     0,     0,     0,     0,     0,     0,    61,   120,     0,
      37,     0,    46,     0,     0,     0,     0,   120,     0,    62,
      53,   120,     0,    45,     0,     0,   120,     0,    60,   119,
      52,   119,    36,     0,     0,    47,     0,     0,     0,   120,
      43,   119,     0,     0,    44,     0,     0,     0,     0,   120,
     120,     0,     0,    38,   120,   120,    63,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    64,    63,
      21,    41,    22,    23,   133,    24,   111,    25,    26,    51,
      69,   112,    28,   206,   207,    74,    75,    29,    87,    53,
      54,    55,    66,   203
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
     469,   -69,   -69,   -69,   -69,   121,     7,    12,   -12,   -69,
      14,    18,   348,    -2,    33,   -69,    17,   -69,    43,   -69,
     -69,   -69,   -69,   -69,   -69,    47,   -69,   -69,   -69,   -69,
     348,    64,   -69,   -69,   499,   562,   567,   574,   587,   -69,
     162,    30,   -69,   -69,   295,    22,   348,   348,   -69,   -69,
      75,   -69,   104,    86,   -69,    78,    91,   -69,   469,    53,
     -69,    27,   -69,   -69,    79,   113,   508,   104,   -69,   348,
     -69,   209,   -69,   401,   106,   -69,   524,   -69,   104,   -69,
     104,   -69,   104,   -69,   104,   132,    49,   524,   -69,    72,
     469,    85,   141,   -69,   259,   348,   348,   348,   348,   348,
     348,   -69,   -69,   -69,   -69,   -69,   126,   100,   -69,   -69,
     127,   154,    29,   104,   156,   160,   434,   -69,   524,   401,
     401,   594,   599,   606,   619,   532,   555,   -69,   -69,   -69,
     469,   145,   140,   158,    19,   166,   169,   -69,   -69,    86,
      86,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   106,   524,
     469,   173,   193,   -69,   348,   -69,   -69,   -69,   -69,   524,
     -69,   524,   -69,   104,   -69,   104,   -69,   104,   -69,   104,
     -69,   -69,   104,   -69,   -69,   104,    21,   174,   348,   182,
     469,   218,   -69,   -69,    25,   508,   469,   104,   234,   348,
       9,   189,   203,   -69,   469,   163,   271,   -69,    26,   -69,
      13,   348,   201,   181,    34,   224,    32,   163,   -69,   287,
     200,   348,   104,   469,   242,   324,   243,   -69,   240,   -69,
     -69,   -69,     2,   104,    35,   295,   -69,   246,   -69,   -69,
     -69,   -69,   -69,   340,   136,   -69,   252,   469,   469,   -69,
     -69,   -69,    38,    39,   -69,   469,   377,   393,    41,   -69,
     -69,   430,   255,   -69,   -69,   -69,   -69,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,    -9,   -49,   -62,   -69,   -69,   -69,   212,
      51,   -69,   -69,   -69,   -69,   -69,    93,   -69,   -69,     0,
     -69,   -69,   -69,    74,   -69,   -33,   -68,   110,    -6,    16,
     448,   233,   -40,   249
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      27,    43,    89,    90,   110,   117,    52,    86,    39,   102,
     104,    91,    95,    96,    40,   231,    95,    96,    58,    42,
     180,    44,   180,    56,    67,    45,   180,   180,    76,    78,
      80,    82,    84,    57,   105,   180,   180,   153,   115,   180,
     180,    94,   180,    88,    60,     6,   217,    92,   130,   154,
     128,   158,   160,    -3,   103,    65,   201,   129,    27,    27,
     211,   106,    59,   113,   181,   116,   188,   118,    61,   150,
     196,   209,    68,   148,     1,     2,     3,     4,     5,   215,
     233,   134,    31,   246,   247,    62,   251,   218,   119,   120,
      27,    97,    98,   135,   131,   100,     6,   132,   101,     7,
     149,     8,    99,     9,   107,    10,    11,    95,    96,    12,
      13,   139,   140,   159,   161,   163,   165,   167,   169,   172,
     175,   176,    30,   110,   119,   120,   109,   145,    31,    46,
      27,   102,   104,    71,   106,    48,   146,    49,   147,   104,
     127,   184,   194,   195,   240,   119,   120,   104,   187,   136,
      27,    50,   151,    32,    33,    34,    35,    36,    37,    38,
     104,   156,   152,    85,   155,    46,   104,    73,   157,    71,
     177,    48,   190,    49,   178,   119,   120,   198,   179,   182,
      27,    27,   183,   200,   104,   204,    27,    50,    27,   237,
      30,   238,   234,   185,    27,   212,    27,   104,   104,   119,
     120,   245,   104,    73,   224,   223,   186,   191,   189,    27,
     114,   202,    46,    27,   213,    27,    71,   205,    48,   103,
      49,    32,    33,    34,    35,    36,    37,    38,   242,   243,
     214,   216,   193,    27,    50,   103,   248,    27,    27,     1,
       2,     3,     4,     5,   222,    27,    27,    27,   199,   225,
      73,    27,   227,   229,   236,     1,     2,     3,     4,     5,
     137,     6,    95,    96,     7,   241,     8,   138,     9,   255,
      10,    11,   103,   232,    12,    13,   108,     6,   197,    93,
       7,   219,     8,     0,     9,   208,    10,    11,   103,   192,
      12,    13,     1,     2,     3,     4,     5,     0,    46,     0,
       0,   221,    71,     0,    48,     0,    49,     0,     1,     2,
       3,     4,     5,     0,     6,     0,     0,     7,     0,     8,
      50,     9,     0,    10,    11,   103,     0,    12,    13,     0,
       6,     0,     0,     7,     0,     8,    73,     9,   226,    10,
      11,   103,     0,    12,    13,     1,     2,     3,     4,     5,
       0,    46,     0,     0,   239,    47,     0,    48,     0,    49,
       0,     1,     2,     3,     4,     5,     0,     6,     0,     0,
       7,     0,     8,    50,     9,     0,    10,    11,   103,     0,
      12,    13,     0,     6,     0,     0,     7,     0,     8,     0,
       9,   249,    10,    11,   103,     0,    12,    13,     1,     2,
       3,     4,     5,     0,    46,     0,     0,   250,    71,     0,
      48,     0,    49,     0,     1,     2,     3,     4,     5,     0,
       6,     0,     0,     7,     0,     8,    50,     9,     0,    10,
      11,   103,     0,    12,    13,   137,     6,    95,    96,     7,
       0,     8,   138,     9,   254,    10,    11,     0,   210,    12,
      13,     1,     2,     3,     4,     5,     0,   220,     0,     0,
     121,   122,   123,   124,   125,   126,   228,     0,     0,     0,
     230,     0,     0,     6,     0,   235,     7,     0,     8,     0,
       9,     0,    10,    11,     0,     0,    12,    13,   244,     0,
       1,     2,     3,     4,     5,     0,     0,     0,   252,   253,
      70,     0,    46,   256,   257,     0,    71,     0,    48,    72,
      49,     0,     6,     0,     0,     7,     0,     8,     0,     9,
       0,    10,    11,     0,    50,    12,    13,    95,    96,     1,
       2,     3,     4,   170,     0,    46,     0,     0,     0,    47,
      73,    48,     0,    49,   171,   141,   142,   143,   144,     0,
     121,   122,   123,   124,   125,   126,   173,    50,    46,     0,
       0,     0,    47,    77,    48,    46,    49,   174,    79,    47,
      46,    48,     0,    49,    47,    81,    48,    46,    49,     0,
      50,    47,     0,    48,     0,    49,     0,    50,    83,     0,
      46,     0,    50,     0,    47,   162,    48,    46,    49,    50,
     164,    47,    46,    48,     0,    49,    47,   166,    48,    46,
      49,     0,    50,    47,     0,    48,     0,    49,     0,    50,
     168,     0,    46,     0,    50,     0,    47,     0,    48,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50
};

static const yytype_int16 yycheck[] =
{
       0,    13,    42,    43,    66,    73,    12,    40,     1,    58,
      59,    44,     3,     4,     7,    13,     3,     4,     1,     7,
       1,     7,     1,    25,    30,     7,     1,     1,    34,    35,
      36,    37,    38,     0,     7,     1,     1,     8,    71,     1,
       1,    47,     1,    13,     1,    43,    14,    25,    88,    20,
       1,   119,   120,     0,     1,     8,    47,     8,    58,    59,
      47,    34,    45,    69,    45,    71,    45,    73,    25,   109,
      45,    45,     8,   106,    21,    22,    23,    24,    25,    45,
      45,    90,     7,    45,    45,    42,    45,    55,    39,    40,
      90,     5,     6,     8,    22,    17,    43,    25,     7,    46,
     106,    48,    16,    50,    25,    52,    53,     3,     4,    56,
      57,    95,    96,   119,   120,   121,   122,   123,   124,   125,
     126,   130,     1,   185,    39,    40,    13,     1,     7,     3,
     130,   180,   181,     7,    34,     9,    10,    11,    12,   188,
       8,   150,   182,   183,     8,    39,    40,   196,   154,     8,
     150,    25,    25,    32,    33,    34,    35,    36,    37,    38,
     209,     1,     8,     1,     8,     3,   215,    41,     8,     7,
      25,     9,   178,    11,    34,    39,    40,   186,    20,    13,
     180,   181,    13,   189,   233,   194,   186,    25,   188,   229,
       1,   231,   225,    20,   194,   201,   196,   246,   247,    39,
      40,   241,   251,    41,   213,   211,    13,    25,    34,   209,
       1,     8,     3,   213,    13,   215,     7,    54,     9,     1,
      11,    32,    33,    34,    35,    36,    37,    38,   237,   238,
      49,     7,    14,   233,    25,     1,   245,   237,   238,    21,
      22,    23,    24,    25,    44,   245,   246,   247,    14,     7,
      41,   251,     9,    13,     8,    21,    22,    23,    24,    25,
       1,    43,     3,     4,    46,    13,    48,     8,    50,    14,
      52,    53,     1,   222,    56,    57,    64,    43,   185,    46,
      46,   207,    48,    -1,    50,    14,    52,    53,     1,   179,
      56,    57,    21,    22,    23,    24,    25,    -1,     3,    -1,
      -1,    14,     7,    -1,     9,    -1,    11,    -1,    21,    22,
      23,    24,    25,    -1,    43,    -1,    -1,    46,    -1,    48,
      25,    50,    -1,    52,    53,     1,    -1,    56,    57,    -1,
      43,    -1,    -1,    46,    -1,    48,    41,    50,    14,    52,
      53,     1,    -1,    56,    57,    21,    22,    23,    24,    25,
      -1,     3,    -1,    -1,    14,     7,    -1,     9,    -1,    11,
      -1,    21,    22,    23,    24,    25,    -1,    43,    -1,    -1,
      46,    -1,    48,    25,    50,    -1,    52,    53,     1,    -1,
      56,    57,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,
      50,    14,    52,    53,     1,    -1,    56,    57,    21,    22,
      23,    24,    25,    -1,     3,    -1,    -1,    14,     7,    -1,
       9,    -1,    11,    -1,    21,    22,    23,    24,    25,    -1,
      43,    -1,    -1,    46,    -1,    48,    25,    50,    -1,    52,
      53,     1,    -1,    56,    57,     1,    43,     3,     4,    46,
      -1,    48,     8,    50,    14,    52,    53,    -1,   199,    56,
      57,    21,    22,    23,    24,    25,    -1,   208,    -1,    -1,
      26,    27,    28,    29,    30,    31,   217,    -1,    -1,    -1,
     221,    -1,    -1,    43,    -1,   226,    46,    -1,    48,    -1,
      50,    -1,    52,    53,    -1,    -1,    56,    57,   239,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    -1,   249,   250,
       1,    -1,     3,   254,   255,    -1,     7,    -1,     9,    10,
      11,    -1,    43,    -1,    -1,    46,    -1,    48,    -1,    50,
      -1,    52,    53,    -1,    25,    56,    57,     3,     4,    21,
      22,    23,    24,     1,    -1,     3,    -1,    -1,    -1,     7,
      41,     9,    -1,    11,    12,    97,    98,    99,   100,    -1,
      26,    27,    28,    29,    30,    31,     1,    25,     3,    -1,
      -1,    -1,     7,     1,     9,     3,    11,    12,     1,     7,
       3,     9,    -1,    11,     7,     1,     9,     3,    11,    -1,
      25,     7,    -1,     9,    -1,    11,    -1,    25,     1,    -1,
       3,    -1,    25,    -1,     7,     1,     9,     3,    11,    25,
       1,     7,     3,     9,    -1,    11,     7,     1,     9,     3,
      11,    -1,    25,     7,    -1,     9,    -1,    11,    -1,    25,
       1,    -1,     3,    -1,    25,    -1,     7,    -1,     9,    -1,
      11,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    50,
      52,    53,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    68,    70,    71,    73,    75,    76,    77,    80,    85,
       1,     7,    32,    33,    34,    35,    36,    37,    38,     1,
       7,    69,     7,    13,     7,     7,     3,     7,     9,    11,
      25,    77,    86,    87,    88,    89,    25,     0,     1,    45,
       1,    25,    42,    67,    66,     8,    90,    86,     8,    78,
       1,     7,    10,    41,    83,    84,    86,     1,    86,     1,
      86,     1,    86,     1,    86,     1,    83,    86,    13,    90,
      90,    83,    25,    89,    86,     3,     4,     5,     6,    16,
      17,     7,    62,     1,    62,     7,    34,    25,    67,    13,
      63,    74,    79,    86,     1,    83,    86,    84,    86,    39,
      40,    26,    27,    28,    29,    30,    31,     8,     1,     8,
      90,    22,    25,    72,    61,     8,     8,     1,     8,    87,
      87,    88,    88,    88,    88,     1,    10,    12,    83,    86,
      90,    25,     8,     8,    20,     8,     1,     8,    84,    86,
      84,    86,     1,    86,     1,    86,     1,    86,     1,    86,
       1,    12,    86,     1,    12,    86,    61,    25,    34,    20,
       1,    45,    13,    13,    61,    20,    13,    86,    45,    34,
      86,    25,    85,    14,    90,    90,    45,    74,    61,    14,
      86,    47,     8,    91,    61,    54,    81,    82,    14,    45,
      91,    47,    86,    13,    49,    45,     7,    14,    55,    81,
      91,    14,    44,    86,    61,     7,    14,     9,    91,    13,
      91,    13,    68,    45,    83,    91,     8,    90,    90,    14,
       8,    13,    61,    61,    91,    90,    45,    45,    61,    14,
      14,    45,    91,    91,    14,    14,    91,    91
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
#line 105 "Parser.y"
    { printf("Correct Syntax\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 106 "Parser.y"
    {
    syntax_error("Missing '.' at the end of statement");
    yyerrok;
;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 113 "Parser.y"
    {
    syntax_error("Missing '.' at the end of statement");
    yyerrok;
;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 117 "Parser.y"
    {
    syntax_error("Invalid statement");
    yyerrok;
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 123 "Parser.y"
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

  case 19:

/* Line 1455 of yacc.c  */
#line 138 "Parser.y"
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

  case 21:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    {
    (yyval.dtype) = SYM_INT;
    current_type = SYM_INT;
    current_kind = VAR;
;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 159 "Parser.y"
    {
    (yyval.dtype) = SYM_FLOAT;
    current_type = SYM_FLOAT;
    current_kind = VAR;
;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    {
    (yyval.dtype) = SYM_BOOL;
    current_type = SYM_BOOL;
    current_kind = VAR;
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {
    (yyval.dtype) = SYM_STRING;
    current_type = SYM_STRING;
    current_kind = VAR;
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {
    current_type = (yyvsp[(1) - (2)].dtype);
    current_kind = SYM_CONST;
;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 189 "Parser.y"
    {
    current_kind = SYM_CONST;
;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 195 "Parser.y"
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

  case 31:

/* Line 1455 of yacc.c  */
#line 207 "Parser.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 223 "Parser.y"
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

  case 33:

/* Line 1455 of yacc.c  */
#line 239 "Parser.y"
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

  case 34:

/* Line 1455 of yacc.c  */
#line 256 "Parser.y"
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

  case 35:

/* Line 1455 of yacc.c  */
#line 271 "Parser.y"
    {
    syntax_error("Invalid expression in assignment");
    yyerrok;
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 286 "Parser.y"
    {
        syntax_error("Missing '(' after 'law'");
        yyerrok;
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    {
          syntax_error("Missing ')' after 'law' condition");
           while (yychar != OPENBRACE &&
             yychar != CLOSEDBRACE &&
             yychar != YYEOF){
                yychar = yylex();
            }
          yyerrok;
      ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 303 "Parser.y"
    {
          syntax_error("Invalid condition inside if parentheses");
          yyclearin;
          yyerrok;
      ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
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

  case 46:

/* Line 1455 of yacc.c  */
#line 336 "Parser.y"
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

  case 48:

/* Line 1455 of yacc.c  */
#line 361 "Parser.y"
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

  case 49:

/* Line 1455 of yacc.c  */
#line 375 "Parser.y"
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

  case 50:

/* Line 1455 of yacc.c  */
#line 390 "Parser.y"
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

  case 51:

/* Line 1455 of yacc.c  */
#line 403 "Parser.y"
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

  case 54:

/* Line 1455 of yacc.c  */
#line 421 "Parser.y"
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

  case 55:

/* Line 1455 of yacc.c  */
#line 436 "Parser.y"
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

  case 56:

/* Line 1455 of yacc.c  */
#line 457 "Parser.y"
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

  case 57:

/* Line 1455 of yacc.c  */
#line 486 "Parser.y"
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

  case 58:

/* Line 1455 of yacc.c  */
#line 518 "Parser.y"
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

  case 59:

/* Line 1455 of yacc.c  */
#line 552 "Parser.y"
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

  case 60:

/* Line 1455 of yacc.c  */
#line 571 "Parser.y"
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

  case 64:

/* Line 1455 of yacc.c  */
#line 595 "Parser.y"
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

  case 65:

/* Line 1455 of yacc.c  */
#line 605 "Parser.y"
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

  case 66:

/* Line 1455 of yacc.c  */
#line 615 "Parser.y"
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

  case 67:

/* Line 1455 of yacc.c  */
#line 625 "Parser.y"
    {
    (yyval.dtype) = (yyvsp[(1) - (1)].dtype);
;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 630 "Parser.y"
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

  case 69:

/* Line 1455 of yacc.c  */
#line 644 "Parser.y"
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

  case 70:

/* Line 1455 of yacc.c  */
#line 658 "Parser.y"
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

  case 71:

/* Line 1455 of yacc.c  */
#line 671 "Parser.y"
    {
    syntax_error("Missing ')' in condition");
    yyerrok;
;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 675 "Parser.y"
    {
    syntax_error("Invalid condition inside '()'");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 680 "Parser.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 681 "Parser.y"
    {
    syntax_error("Invalid right operand for '>'");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 687 "Parser.y"
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

  case 76:

/* Line 1455 of yacc.c  */
#line 697 "Parser.y"
    {
    syntax_error("Invalid right operand for '>='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 703 "Parser.y"
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

  case 78:

/* Line 1455 of yacc.c  */
#line 713 "Parser.y"
    {
    syntax_error("Invalid right operand for '<'");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 719 "Parser.y"
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

  case 80:

/* Line 1455 of yacc.c  */
#line 729 "Parser.y"
    {
    syntax_error("Invalid right operand for '<='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 735 "Parser.y"
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

  case 82:

/* Line 1455 of yacc.c  */
#line 745 "Parser.y"
    {
    syntax_error("Invalid right operand for '=='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 751 "Parser.y"
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

  case 84:

/* Line 1455 of yacc.c  */
#line 761 "Parser.y"
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

  case 85:

/* Line 1455 of yacc.c  */
#line 771 "Parser.y"
    {
    syntax_error("Invalid right operand for '!='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 777 "Parser.y"
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

  case 87:

/* Line 1455 of yacc.c  */
#line 787 "Parser.y"
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

  case 88:

/* Line 1455 of yacc.c  */
#line 799 "Parser.y"
    {
    syntax_error("Invalid expression in assignment");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 804 "Parser.y"
    {
    syntax_error("Missing '=' in assignment");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 810 "Parser.y"
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

  case 91:

/* Line 1455 of yacc.c  */
#line 837 "Parser.y"
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

  case 92:

/* Line 1455 of yacc.c  */
#line 863 "Parser.y"
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

  case 93:

/* Line 1455 of yacc.c  */
#line 890 "Parser.y"
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

  case 94:

/* Line 1455 of yacc.c  */
#line 905 "Parser.y"
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

  case 95:

/* Line 1455 of yacc.c  */
#line 918 "Parser.y"
    {
    syntax_error("Invalid expression after '+='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 924 "Parser.y"
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

  case 97:

/* Line 1455 of yacc.c  */
#line 942 "Parser.y"
    {
    syntax_error("Invalid expression after '-='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 948 "Parser.y"
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

  case 99:

/* Line 1455 of yacc.c  */
#line 966 "Parser.y"
    {
    syntax_error("Invalid expression after '*='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 972 "Parser.y"
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

  case 101:

/* Line 1455 of yacc.c  */
#line 985 "Parser.y"
    {
    syntax_error("Invalid expression after '/='");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 991 "Parser.y"
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

  case 103:

/* Line 1455 of yacc.c  */
#line 1006 "Parser.y"
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

  case 104:

/* Line 1455 of yacc.c  */
#line 1020 "Parser.y"
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

  case 105:

/* Line 1455 of yacc.c  */
#line 1033 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1036 "Parser.y"
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

  case 107:

/* Line 1455 of yacc.c  */
#line 1050 "Parser.y"
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

  case 108:

/* Line 1455 of yacc.c  */
#line 1070 "Parser.y"
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

  case 109:

/* Line 1455 of yacc.c  */
#line 1088 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1091 "Parser.y"
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

  case 111:

/* Line 1455 of yacc.c  */
#line 1104 "Parser.y"
    { (yyval.dtype) = (yyvsp[(1) - (1)].dtype); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1107 "Parser.y"
    {
    syntax_error("Expression missing a bracket or more");
    (yyval.dtype)=SYM_ERROR;
    yyerrok;
;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1112 "Parser.y"
    { (yyval.dtype) = (yyvsp[(2) - (3)].dtype); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1114 "Parser.y"
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

  case 115:

/* Line 1455 of yacc.c  */
#line 1125 "Parser.y"
    { (yyval.dtype) = SYM_INT; ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1126 "Parser.y"
    { (yyval.dtype) = SYM_FLOAT; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1128 "Parser.y"
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

  case 118:

/* Line 1455 of yacc.c  */
#line 1154 "Parser.y"
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

  case 119:

/* Line 1455 of yacc.c  */
#line 1168 "Parser.y"
    {
    current_scope = create_table(211, current_scope);
;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1173 "Parser.y"
    {
    SymbolTable *old = current_scope;
    current_scope = current_scope->parent;
    report_unused(current_scope);
    // print_table(current_scope);
    free_table(old);
;}
    break;



/* Line 1455 of yacc.c  */
#line 3205 "Parser.tab.c"
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
#line 1181 "Parser.y"


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
