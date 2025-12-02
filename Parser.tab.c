
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
    #include<stdbool.h>
    void yyerror(const char *s);
    int yylex(void);
    extern FILE *yyin;
    


/* Line 189 of yacc.c  */
#line 85 "Parser.tab.c"

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
#line 14 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;



/* Line 214 of yacc.c  */
#line 187 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "Parser.tab.c"

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   533

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  238

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
      22,    24,    26,    28,    30,    32,    34,    36,    38,    40,
      43,    46,    49,    72,    81,    99,   113,   122,   129,   134,
     137,   148,   155,   161,   163,   167,   171,   175,   179,   187,
     190,   195,   208,   220,   225,   227,   231,   244,   246,   250,
     259,   268,   277,   286,   290,   294,   297,   299,   303,   307,
     311,   315,   319,   323,   327,   329,   333,   337,   341,   344,
     347,   351,   355,   359,   363,   367,   371,   373,   377,   381,
     385,   387,   391,   393,   397,   400,   402,   404
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    45,    -1,    62,    -1,
      61,    45,    62,    -1,    82,    -1,    65,    -1,    66,    -1,
      72,    -1,    77,    -1,    75,    -1,    69,    -1,    67,    -1,
      74,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      63,    42,    -1,    63,    71,    -1,    64,    71,    -1,    43,
       7,    80,     8,    13,    61,    45,    14,    44,    43,     7,
      80,     8,    13,    61,    45,    14,    44,    13,    61,    45,
      14,    -1,    43,     7,    80,     8,    13,    61,    45,    14,
      -1,    43,     7,    80,     8,    13,    61,    45,    14,    44,
      43,     7,    80,     8,    13,    61,    45,    14,    -1,    43,
       7,    80,     8,    13,    61,    45,    14,    44,    13,    61,
      45,    14,    -1,    48,    13,    68,    14,    49,     7,    80,
       8,    -1,    61,    45,    50,    45,    61,    45,    -1,    61,
      45,    50,    45,    -1,    61,    45,    -1,    46,     7,    70,
      20,    82,     8,    13,    61,    45,    14,    -1,    22,    25,
      34,    83,    47,    83,    -1,    25,    34,    83,    47,    83,
      -1,    25,    -1,    25,    34,    83,    -1,    25,    34,    12,
      -1,    25,    34,    10,    -1,    25,    34,    80,    -1,    52,
       7,    83,     8,    13,    68,    14,    -1,    63,    25,    -1,
      63,    25,    20,    73,    -1,    63,    25,     7,    73,     8,
      13,    61,    45,    56,    83,    45,    14,    -1,    57,    25,
       7,    73,     8,    13,    61,    45,    56,    45,    14,    -1,
      25,     7,    76,     8,    -1,    83,    -1,    83,    20,    76,
      -1,    53,     7,    25,     8,    13,    78,    55,    13,    61,
      45,    14,    14,    -1,    79,    -1,    79,    45,    78,    -1,
      54,     7,    12,     8,    13,    61,    45,    14,    -1,    54,
       7,     9,     8,    13,    61,    45,    14,    -1,    54,     7,
      10,     8,    13,    61,    45,    14,    -1,    54,     7,    11,
       8,    13,    61,    45,    14,    -1,    80,    39,    81,    -1,
      80,    40,    81,    -1,    41,    81,    -1,    81,    -1,     7,
      80,     8,    -1,    83,    28,    83,    -1,    83,    26,    83,
      -1,    83,    27,    83,    -1,    83,    29,    83,    -1,    83,
      30,    83,    -1,    83,    31,    83,    -1,    75,    -1,    25,
      34,    83,    -1,    25,    34,    10,    -1,    25,    34,    80,
      -1,    25,    32,    -1,    25,    33,    -1,    25,    36,    83,
      -1,    25,    35,    83,    -1,    25,    37,    83,    -1,    25,
      38,    83,    -1,    83,     4,    84,    -1,    83,     3,    84,
      -1,    84,    -1,    84,     5,    85,    -1,    84,     6,    85,
      -1,    84,    16,    85,    -1,    85,    -1,    86,    17,    85,
      -1,    86,    -1,     7,    83,     8,    -1,     3,    86,    -1,
       9,    -1,    11,    -1,    25,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    93,    94,    95,    96,    99,
     100,   101,   104,   105,   106,   107,   109,   110,   111,   112,
     115,   116,   117,   119,   120,   121,   122,   123,   125,   127,
     128,   131,   132,   135,   136,   136,   137,   138,   138,   139,
     140,   141,   142,   145,   146,   147,   147,   150,   151,   152,
     153,   154,   155,   156,   157,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   169,   170,   171,   173,   174,   175,
     176,   178,   179,   181,   182,   183,   184,   185
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
  "declaration", "Ifstmt", "repeat", "inner_loop", "forloop", "iterator",
  "inner_declaration", "whileloop", "parameters", "function",
  "function_call", "list", "switchstmt", "case_structure", "inner_case",
  "condition", "inner_condition", "assignment", "EXPR", "T", "M", "G", 0
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
      62,    62,    62,    62,    62,    63,    63,    63,    63,    64,
      65,    65,    66,    66,    66,    66,    67,    68,    68,    68,
      69,    70,    70,    71,    71,    71,    71,    71,    72,    73,
      73,    74,    74,    75,    76,    76,    77,    78,    78,    79,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    85,    85,    86,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,    22,     8,    17,    13,     8,     6,     4,     2,
      10,     6,     5,     1,     3,     3,     3,     3,     7,     2,
       4,    12,    11,     4,     1,     3,    12,     1,     3,     8,
       8,     8,     8,     3,     3,     2,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     3,     1,     3,     2,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     4,     0,     0,     7,     8,
      13,    12,     9,    14,    11,    10,     6,     0,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     3,    33,    19,    20,    33,    21,     0,     0,
      85,    86,    87,     0,    44,    76,    80,    82,     0,    66,
      87,     0,    64,    67,    56,    65,    71,    70,    72,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       5,     0,     0,    84,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,    36,    35,    37,    34,    83,
      75,    74,    45,    77,    78,    79,    81,    57,    53,    54,
      59,    60,    58,    61,    62,    63,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    38,     0,     0,
       0,    40,     0,     0,    23,    31,     0,    27,    26,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,     0,     0,     0,     0,
       0,    46,    41,    25,     0,    50,    51,    52,    49,     0,
       0,     0,    24,     0,     0,     0,     0,    22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    13,    75,    15,    16,    17,    18,    19,    20,
      76,    21,    74,    45,    22,   113,    23,    24,    53,    25,
     156,   157,    63,    64,    26,    71,    55,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -68
static const yytype_int16 yypact[] =
{
     450,   -68,   -68,   -68,   -68,   476,    36,    45,    56,    52,
      88,    72,   114,   -68,    54,   -68,     8,   100,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,    37,   -68,   -68,
     146,    37,    37,    37,    37,   126,    84,   450,    37,   102,
     123,   -68,   450,    21,   -68,   -68,    98,   -68,    37,    37,
     -68,   -68,   -68,   130,    27,    29,   -68,   117,   126,   -68,
     124,   159,   -68,   -18,   -68,   502,    38,    38,    38,    38,
      18,   502,   116,   120,   138,   118,   147,    86,   161,    95,
     -68,    95,   101,   -68,    97,   -68,    37,    37,    37,    37,
      37,    37,    37,    43,   496,   -68,   159,   159,    37,    37,
      37,    37,    37,    37,   162,   142,    37,   160,   393,   137,
     179,   181,   170,   164,   196,   -68,   -68,   -18,   502,   -68,
      29,    29,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
      38,    38,    38,    38,    38,    38,   450,    37,    14,   432,
     197,   152,   199,   450,   153,   188,   203,   204,   173,    16,
      37,   206,   450,   126,   195,   213,   166,   182,    95,   450,
     450,    50,    37,    38,   450,   183,    46,   -68,   134,   217,
     153,   -68,   186,   191,   194,    38,   198,   450,   -68,   225,
     231,   232,   237,   450,   -68,   401,   438,    -6,   189,   235,
     242,   243,   244,   205,   220,    37,   450,   259,   -68,   450,
     450,   450,   450,   201,   253,    20,   223,   126,   224,   233,
     234,   240,   256,   -68,   262,   238,    48,   250,   287,   299,
     336,   -68,   -68,   -68,   264,   -68,   -68,   -68,   -68,   450,
     247,   348,   207,   267,   450,   249,   385,   -68
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -68,   -68,   -68,     0,   -38,   -66,   -68,   -68,   -68,   -68,
     139,   -68,   -68,   266,   -68,   -67,   -68,   -29,   200,   -68,
     119,   -68,   -33,   -58,   180,   -22,    35,    99,   251
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      14,    62,    70,    95,    80,    54,    62,   196,    65,    66,
      67,    68,    69,   112,   114,   112,    77,    86,    87,    86,
      87,    96,    97,    86,    87,    93,   104,    84,    81,    62,
      86,    87,    62,    43,    89,    90,    94,   197,   128,   129,
      48,    86,    87,    35,    49,    91,    50,    88,    51,   117,
      44,   127,    36,    62,   178,    82,   224,    96,    97,    38,
     118,   150,    52,   162,   174,   214,    54,    62,    62,    37,
      80,     1,     2,     3,     4,     5,   130,   131,   132,   133,
     134,   135,    96,    97,   138,    96,    97,    96,    97,    86,
      87,   171,   112,     6,   110,    39,     7,    40,     8,    42,
      86,    87,     9,    10,    48,   119,    72,    11,    58,    73,
      50,   115,    51,   116,    41,   149,     1,     2,     3,     4,
     166,   120,   121,    80,    62,    46,    60,    78,   163,    48,
      79,    27,    82,    58,    92,    50,   148,    51,    85,    80,
     175,   105,    61,   179,   180,   181,   182,    80,    80,    48,
      80,    60,   165,    58,   106,    50,    59,    51,   107,   172,
     173,   109,    48,   108,   176,    80,    58,    61,    50,   111,
      51,    60,   146,   205,   216,   136,   137,    80,    62,    80,
      80,    80,    80,   193,    60,   139,   142,    61,   123,   124,
     125,   126,   143,    80,   144,   145,   206,   152,    80,   208,
     209,   210,   211,   198,   147,   151,   153,   155,   158,   167,
       1,     2,     3,     4,     5,   212,   159,   160,   161,   164,
     168,   169,     1,     2,     3,     4,     5,   170,   177,   230,
     183,   185,     6,   189,   235,     7,   186,     8,   187,   190,
     191,     9,    10,   188,     6,   192,    11,     7,   199,     8,
     203,   233,   223,     9,    10,   200,   201,   202,    11,     1,
       2,     3,     4,     5,   225,   204,   207,   213,   215,   217,
     221,     1,     2,     3,     4,     5,   222,   229,   218,   219,
     234,     6,   154,    47,     7,   220,     8,   140,   122,   184,
       9,    10,   231,     6,   236,    11,     7,     0,     8,    83,
       0,   226,     9,    10,     0,     0,     0,    11,     1,     2,
       3,     4,     5,   227,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       6,     0,     0,     7,     0,     8,     0,     0,     0,     9,
      10,     0,     6,     0,    11,     7,     0,     8,     0,     0,
     228,     9,    10,     0,     0,     0,    11,     1,     2,     3,
       4,     5,   232,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     0,     0,     0,     0,     0,     6,
       0,     0,     7,     0,     8,     0,     0,     0,     9,    10,
       0,     6,     0,    11,     7,     0,     8,     0,     0,   237,
       9,    10,     0,     0,     0,    11,     1,     2,     3,     4,
       5,     0,     0,     0,     1,     2,     3,     4,     5,     0,
       0,     0,     1,     2,     3,     4,     5,     0,     6,     0,
       0,     7,     0,     8,     0,     0,     6,     9,    10,     7,
       0,     8,    11,   141,     6,     9,    10,     7,     0,     8,
      11,     0,     0,     9,    10,     0,     0,   194,    11,     1,
       2,     3,     4,     5,    28,    29,    30,    31,    32,    33,
      34,     1,     2,     3,     4,     5,     0,     0,     0,     0,
       0,     6,     0,    27,     7,     0,     8,     0,     0,     0,
       9,    10,     0,     6,   195,    11,     7,     0,     8,    86,
      87,     0,     9,    10,   119,    86,    87,    11,    28,    29,
      30,    31,    32,    33,    34,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,   101,   102,   103,    98,    99,
     100,   101,   102,   103
};

static const yytype_int16 yycheck[] =
{
       0,    30,    35,    61,    42,    27,    35,    13,    30,    31,
      32,    33,    34,    79,    81,    81,    38,     3,     4,     3,
       4,    39,    40,     3,     4,    58,     8,    49,     7,    58,
       3,     4,    61,    25,     5,     6,    58,    43,    96,    97,
       3,     3,     4,     7,     7,    16,     9,    20,    11,    82,
      42,     8,     7,    82,     8,    34,     8,    39,    40,     7,
      82,    47,    25,    47,    14,    45,    88,    96,    97,    13,
     108,    21,    22,    23,    24,    25,    98,    99,   100,   101,
     102,   103,    39,    40,   106,    39,    40,    39,    40,     3,
       4,   158,   158,    43,     8,     7,    46,    25,    48,    45,
       3,     4,    52,    53,     3,     8,    22,    57,     7,    25,
       9,    10,    11,    12,     0,   137,    21,    22,    23,    24,
     153,    86,    87,   161,   153,    25,    25,    25,   150,     3,
       7,     7,    34,     7,    17,     9,   136,    11,     8,   177,
     162,    25,    41,     9,    10,    11,    12,   185,   186,     3,
     188,    25,   152,     7,    34,     9,    10,    11,    20,   159,
     160,    14,     3,    45,   164,   203,     7,    41,     9,     8,
      11,    25,     8,   195,   207,    13,    34,   215,   207,   217,
     218,   219,   220,   183,    25,    25,    49,    41,    89,    90,
      91,    92,    13,   231,    13,    25,   196,    45,   236,   199,
     200,   201,   202,    14,     8,     8,     7,    54,    20,    14,
      21,    22,    23,    24,    25,    14,    13,    13,    45,    13,
       7,    55,    21,    22,    23,    24,    25,    45,    45,   229,
      13,    45,    43,     8,   234,    46,    45,    48,    44,     8,
       8,    52,    53,    45,    43,     8,    57,    46,    13,    48,
      45,    44,    14,    52,    53,    13,    13,    13,    57,    21,
      22,    23,    24,    25,    14,    45,     7,    14,    45,    45,
      14,    21,    22,    23,    24,    25,    14,    13,    45,    45,
      13,    43,   143,    17,    46,    45,    48,   107,    88,   170,
      52,    53,    45,    43,    45,    57,    46,    -1,    48,    48,
      -1,    14,    52,    53,    -1,    -1,    -1,    57,    21,    22,
      23,    24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    -1,    43,    -1,    57,    46,    -1,    48,    -1,    -1,
      14,    52,    53,    -1,    -1,    -1,    57,    21,    22,    23,
      24,    25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,
      -1,    43,    -1,    57,    46,    -1,    48,    -1,    -1,    14,
      52,    53,    -1,    -1,    -1,    57,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    43,    52,    53,    46,
      -1,    48,    57,    50,    43,    52,    53,    46,    -1,    48,
      57,    -1,    -1,    52,    53,    -1,    -1,    56,    57,    21,
      22,    23,    24,    25,    32,    33,    34,    35,    36,    37,
      38,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    43,    -1,     7,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    -1,    43,    56,    57,    46,    -1,    48,     3,
       4,    -1,    52,    53,     8,     3,     4,    57,    32,    33,
      34,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    26,    27,
      28,    29,    30,    31
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    52,
      53,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    69,    72,    74,    75,    77,    82,     7,    32,    33,
      34,    35,    36,    37,    38,     7,     7,    13,     7,     7,
      25,     0,    45,    25,    42,    71,    25,    71,     3,     7,
       9,    11,    25,    76,    83,    84,    85,    86,     7,    10,
      25,    41,    75,    80,    81,    83,    83,    83,    83,    83,
      80,    83,    22,    25,    70,    61,    68,    83,    25,     7,
      62,     7,    34,    86,    83,     8,     3,     4,    20,     5,
       6,    16,    17,    80,    83,    81,    39,    40,    26,    27,
      28,    29,    30,    31,     8,    25,    34,    20,    45,    14,
       8,     8,    63,    73,    73,    10,    12,    80,    83,     8,
      84,    84,    76,    85,    85,    85,    85,     8,    81,    81,
      83,    83,    83,    83,    83,    83,    13,    34,    83,    25,
      82,    50,    49,    13,    13,    25,     8,     8,    61,    83,
      47,     8,    45,     7,    68,    54,    78,    79,    20,    13,
      13,    45,    47,    83,    13,    61,    80,    14,     7,    55,
      45,    73,    61,    61,    14,    83,    61,    45,     8,     9,
      10,    11,    12,    13,    78,    45,    45,    44,    45,     8,
       8,     8,     8,    61,    56,    56,    13,    43,    14,    13,
      13,    13,    13,    45,    45,    83,    61,     7,    61,    61,
      61,    61,    14,    14,    45,    45,    80,    45,    45,    45,
      45,    14,    14,    14,     8,    14,    14,    14,    14,    13,
      61,    45,    14,    44,    13,    61,    45,    14
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
#line 80 "Parser.y"
    {printf("Correct Syntax\n");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)+(yyvsp[(3) - (3)].f);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)-(yyvsp[(3) - (3)].f);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 173 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)*(yyvsp[(3) - (3)].f);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    {if((yyvsp[(3) - (3)].f)==0){yyerror("Division By zero");}else (yyval.f)=(yyvsp[(1) - (3)].f)/(yyvsp[(3) - (3)].f);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    {if((int)(yyvsp[(3) - (3)].f)==0){yyerror("Modulo By zero");}else (yyval.f)=(int)(yyvsp[(1) - (3)].f) % (int)(yyvsp[(3) - (3)].f);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {(yyval.f)=pow((yyvsp[(1) - (3)].f),(yyvsp[(3) - (3)].f));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 181 "Parser.y"
    {(yyval.f)=(yyvsp[(2) - (3)].f);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 182 "Parser.y"
    {(yyval.f)=-(yyvsp[(2) - (2)].f);;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 183 "Parser.y"
    {(yyval.f)=(float)(yyvsp[(1) - (1)].i);;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 185 "Parser.y"
    {(yyval.f)=0;;}
    break;



/* Line 1455 of yacc.c  */
#line 1755 "Parser.tab.c"
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
#line 187 "Parser.y"


/* Subroutines */
void yyerror(const char *s) {
    extern char *yytext;  // Current token text
    fprintf(stderr, "Syntax error at '%s': %s\n", yytext, s);
}
int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            perror("Error opening file");
            return 1;
        }
    }

    if (yyparse() == 0) {
        return 0;
    }
    return 1;
}
