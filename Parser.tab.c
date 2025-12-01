
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
    


/* Line 189 of yacc.c  */
#line 84 "Parser.tab.c"

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
#line 13 "Parser.y"

    int i;
    float f;
    char * str;
    _Bool b;



/* Line 214 of yacc.c  */
#line 186 "Parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 198 "Parser.tab.c"

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
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   537

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

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
       0,     0,     3,     5,     7,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    40,
      43,    46,    66,    75,    93,   107,   116,   123,   126,   137,
     144,   150,   152,   156,   160,   164,   168,   176,   179,   184,
     197,   209,   214,   216,   220,   233,   235,   239,   248,   257,
     266,   275,   279,   283,   286,   288,   292,   296,   300,   304,
     308,   312,   316,   318,   322,   326,   330,   333,   336,   340,
     344,   348,   352,   356,   360,   362,   366,   370,   374,   376,
     380,   382,   386,   389,   391
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    -1,    60,    45,    61,
      -1,    81,    -1,    64,    -1,    65,    -1,    71,    -1,    76,
      -1,    74,    -1,    68,    -1,    66,    -1,    73,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    62,    42,    -1,
      62,    70,    -1,    63,    70,    -1,    43,     7,    79,     8,
      13,    60,    45,    14,    44,    43,    13,    60,    45,    14,
      44,    13,    60,    45,    14,    -1,    43,     7,    79,     8,
      13,    60,    45,    14,    -1,    43,     7,    79,     8,    13,
      60,    45,    14,    44,    43,     7,    79,     8,    13,    60,
      45,    14,    -1,    43,     7,    79,     8,    13,    60,    45,
      14,    44,    13,    60,    45,    14,    -1,    48,    13,    67,
      14,    49,     7,    79,     8,    -1,    60,    45,    50,    45,
      60,    45,    -1,    60,    45,    -1,    46,     7,    69,    20,
      81,     8,    13,    60,    45,    14,    -1,    22,    25,    34,
      82,    47,    82,    -1,    25,    34,    82,    47,    82,    -1,
      25,    -1,    25,    34,    25,    -1,    25,    34,    82,    -1,
      25,    34,    12,    -1,    25,    34,    10,    -1,    52,     7,
      82,     8,    13,    67,    14,    -1,    62,    25,    -1,    62,
      25,    20,    72,    -1,    62,    25,     7,    72,     8,    13,
      60,    45,    56,    82,    45,    14,    -1,    57,    25,     7,
      72,     8,    13,    60,    45,    56,    45,    14,    -1,    25,
       7,    75,     8,    -1,    82,    -1,    82,    20,    75,    -1,
      53,     7,    25,     8,    13,    77,    55,    13,    60,    45,
      14,    14,    -1,    78,    -1,    78,    45,    77,    -1,    54,
       7,    12,     8,    13,    60,    45,    14,    -1,    54,     7,
       9,     8,    13,    60,    45,    14,    -1,    54,     7,    10,
       8,    13,    60,    45,    14,    -1,    54,     7,    11,     8,
      13,    60,    45,    14,    -1,    79,    39,    80,    -1,    79,
      40,    80,    -1,    41,    80,    -1,    80,    -1,     7,    79,
       8,    -1,    82,    28,    82,    -1,    82,    26,    82,    -1,
      82,    27,    82,    -1,    82,    29,    82,    -1,    82,    30,
      82,    -1,    82,    31,    82,    -1,    74,    -1,    25,    34,
      82,    -1,    25,    34,    10,    -1,    25,    34,    79,    -1,
      25,    32,    -1,    25,    33,    -1,    25,    36,    82,    -1,
      25,    35,    82,    -1,    25,    37,    82,    -1,    25,    38,
      82,    -1,    82,     4,    83,    -1,    82,     3,    83,    -1,
      83,    -1,    83,     5,    84,    -1,    83,     6,    84,    -1,
      83,    16,    84,    -1,    84,    -1,    85,    17,    84,    -1,
      85,    -1,     7,    82,     8,    -1,     3,    85,    -1,     9,
      -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    90,    91,    92,    93,    96,    97,
      98,   101,   102,   103,   104,   106,   107,   108,   110,   111,
     112,   114,   115,   116,   117,   118,   120,   122,   123,   126,
     127,   130,   131,   131,   132,   133,   133,   134,   135,   136,
     137,   140,   141,   142,   142,   145,   146,   147,   148,   149,
     150,   151,   152,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   164,   165,   166,   168,   169,   170,   171,   173,
     174,   176,   177,   178,   179
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
  "Start", "code", "inner_code", "datatype", "const_type", "declaration",
  "Ifstmt", "repeat", "inner_loop", "forloop", "iterator",
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
       0,    58,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    63,    64,
      64,    65,    65,    65,    65,    66,    67,    67,    68,    69,
      69,    70,    70,    70,    70,    70,    71,    72,    72,    73,
      73,    74,    75,    75,    76,    77,    77,    78,    78,    78,
      78,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,    19,     8,    17,    13,     8,     6,     2,    10,     6,
       5,     1,     3,     3,     3,     3,     7,     2,     4,    12,
      11,     4,     1,     3,    12,     1,     3,     8,     8,     8,
       8,     3,     3,     2,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     1,     3,
       1,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     0,     0,     6,     7,    12,
      11,     8,    13,    10,     9,     5,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,    31,    18,    19,    31,    20,     0,     0,    83,
      84,     0,    42,    74,    78,    80,     0,    64,     0,     0,
      62,    65,    54,    63,    69,    68,    70,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,    82,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    27,     0,     0,     0,
       0,     0,     0,    35,    34,    32,    33,    81,    73,    72,
      43,    75,    76,    77,    79,    55,    51,    52,    57,    58,
      56,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,    30,     0,     0,     0,    36,     0,     0,     0,    38,
       0,     0,    22,    29,     0,    26,    25,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    39,    24,     0,     0,    48,    49,    50,    47,
       0,     0,     0,     0,     0,     0,    23,     0,     0,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    12,    73,    14,    15,    16,    17,    18,    19,    74,
      20,    72,    44,    21,   111,    22,    23,    51,    24,   154,
     155,    61,    62,    25,    69,    53,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -76
static const yytype_int16 yypact[] =
{
     449,   -76,   -76,   -76,   -76,   131,    42,    65,    64,    97,
      99,    -8,    23,    50,   -76,    16,    95,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   167,   -76,   -76,    37,
     167,   167,   167,   167,    91,     5,   449,   167,   102,   106,
     -76,   449,     9,   -76,   -76,   109,   -76,   167,   167,   -76,
     -76,   114,   111,   112,   -76,   119,    91,   -76,   148,    96,
     -76,    40,   -76,   189,    88,    88,    88,    88,    21,   189,
     126,   125,   140,   116,   158,   138,   171,   205,   -76,   205,
     512,   -76,   144,   -76,   167,   167,   167,   167,   167,   167,
     167,    31,   483,   -76,    96,    96,   167,   167,   167,   167,
     167,   167,   162,   146,   167,   160,   392,   134,   173,   178,
     176,   195,   197,   -76,   -76,   -76,    88,   -76,   112,   112,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,    88,    88,
      88,    88,    88,    88,   449,   167,     4,   431,   199,   151,
     225,   449,   179,   217,   229,   231,   193,     6,   167,   234,
     449,    91,   235,   232,   201,   209,   205,   449,   449,    11,
     167,    88,   449,   210,    44,   -76,   255,   256,   179,   -76,
     223,   230,   206,    88,   233,   449,   -76,   268,   269,   271,
     273,   449,   -76,   400,   437,    -1,    87,   274,   275,   278,
     280,   239,   241,   167,   449,    43,   -76,   449,   449,   449,
     449,   188,   282,    10,   253,    91,   449,   254,   258,   259,
     260,   303,   -76,   304,   200,    57,   279,   237,   249,   286,
     298,   -76,   -76,   -76,   312,   335,   -76,   -76,   -76,   -76,
     449,   238,   281,   314,   347,   449,   -76,   283,   384,   -76
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -76,   -76,     0,   -30,   -74,   -76,   -76,   -76,   -76,   190,
     -76,   -76,   317,   -76,   -75,   -76,   -28,   244,   -76,   168,
     -76,   -32,   -21,   240,   -11,    41,   226,   288
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      13,    60,    68,   110,   112,   110,    60,    84,    85,    84,
      85,    78,   194,    84,    85,    52,    79,    39,    63,    64,
      65,    66,    67,    40,    91,   172,    75,    70,    60,   102,
      71,    60,     1,     2,     3,     4,     5,    82,    93,   125,
      47,    42,   195,    80,    56,    92,    49,    57,    50,    34,
     205,   148,   176,   160,     6,   213,   206,     7,    43,     8,
      94,    95,    58,     9,    10,   224,    60,    60,    11,   116,
      94,    95,    35,   126,   127,    52,    78,    36,    59,    94,
      95,   169,   110,    94,    95,   128,   129,   130,   131,   132,
     133,    84,    85,   136,    47,    41,    94,    95,    56,    47,
      49,   196,    50,    56,    37,    49,    38,    50,     1,     2,
       3,     4,     5,    77,    84,    85,    58,    87,    88,   164,
      45,    58,    83,    60,   147,   118,   119,    76,    89,    78,
       6,    86,    59,     7,   146,     8,    90,   161,    26,     9,
      10,    84,    85,    80,    11,    78,   108,    84,    85,   173,
     163,   103,   117,    78,    78,    26,    78,   170,   171,   104,
     105,   106,   174,    27,    28,    29,    30,    31,    32,    33,
      47,    78,   107,   215,    48,   134,    49,    60,    50,   109,
     135,   191,   203,   140,    78,   137,   141,    78,    78,    78,
      78,   142,    84,    85,   204,    78,   150,   207,   208,   209,
     210,   143,   211,   144,    78,   145,   216,   149,    78,     1,
       2,     3,     4,     5,   223,    96,    97,    98,    99,   100,
     101,     1,     2,     3,     4,     5,     1,     2,     3,     4,
     232,     6,   151,   153,     7,   237,     8,   156,   159,   166,
       9,    10,   157,     6,   158,    11,     7,   162,     8,   165,
     185,   226,     9,    10,   168,   175,   167,    11,     1,     2,
       3,     4,     5,   227,   177,   178,   179,   180,   183,   181,
       1,     2,     3,     4,     5,   184,   187,   188,   186,   189,
       6,   190,   233,     7,   201,     8,   202,   197,   198,     9,
      10,   199,     6,   200,    11,     7,   212,     8,   214,   217,
     228,     9,    10,   218,   219,   220,    11,     1,     2,     3,
       4,     5,   229,   121,   122,   123,   124,   221,   222,     1,
       2,     3,     4,     5,   225,   230,   234,   235,   238,     6,
     120,   152,     7,    46,     8,    81,   182,     0,     9,    10,
       0,     6,     0,    11,     7,   138,     8,     0,     0,   231,
       9,    10,     0,     0,     0,    11,     1,     2,     3,     4,
       5,   236,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     0,     0,     0,     0,     0,     6,     0,
       0,     7,     0,     8,     0,     0,     0,     9,    10,     0,
       6,     0,    11,     7,     0,     8,     0,     0,   239,     9,
      10,     0,     0,     0,    11,     1,     2,     3,     4,     5,
       0,     0,     0,     1,     2,     3,     4,     5,     0,     0,
       0,     1,     2,     3,     4,     5,     0,     6,     0,     0,
       7,     0,     8,     0,     0,     6,     9,    10,     7,     0,
       8,    11,   139,     6,     9,    10,     7,     0,     8,    11,
       0,     0,     9,    10,     0,     0,   192,    11,     1,     2,
       3,     4,     5,    27,    28,    29,    30,    31,    32,    33,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
       6,     0,     0,     7,     0,     8,    84,    85,     0,     9,
      10,   117,     6,   193,    11,     7,     0,     8,     0,     0,
       0,     9,    10,     0,     0,     0,    11,     0,     0,    96,
      97,    98,    99,   100,   101,    47,     0,     0,     0,    48,
       0,    49,   113,    50,   114,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115
};

static const yytype_int16 yycheck[] =
{
       0,    29,    34,    77,    79,    79,    34,     3,     4,     3,
       4,    41,    13,     3,     4,    26,     7,    25,    29,    30,
      31,    32,    33,     0,    56,    14,    37,    22,    56,     8,
      25,    59,    21,    22,    23,    24,    25,    48,    59,     8,
       3,    25,    43,    34,     7,    56,     9,    10,    11,     7,
       7,    47,     8,    47,    43,    45,    13,    46,    42,    48,
      39,    40,    25,    52,    53,     8,    94,    95,    57,    80,
      39,    40,     7,    94,    95,    86,   106,    13,    41,    39,
      40,   156,   156,    39,    40,    96,    97,    98,    99,   100,
     101,     3,     4,   104,     3,    45,    39,    40,     7,     3,
       9,    14,    11,     7,     7,     9,     7,    11,    21,    22,
      23,    24,    25,     7,     3,     4,    25,     5,     6,   151,
      25,    25,     8,   151,   135,    84,    85,    25,    16,   159,
      43,    20,    41,    46,   134,    48,    17,   148,     7,    52,
      53,     3,     4,    34,    57,   175,     8,     3,     4,   160,
     150,    25,     8,   183,   184,     7,   186,   157,   158,    34,
      20,    45,   162,    32,    33,    34,    35,    36,    37,    38,
       3,   201,    14,   205,     7,    13,     9,   205,    11,     8,
      34,   181,   193,    49,   214,    25,    13,   217,   218,   219,
     220,    13,     3,     4,   194,   225,    45,   197,   198,   199,
     200,    25,    14,     8,   234,     8,   206,     8,   238,    21,
      22,    23,    24,    25,    14,    26,    27,    28,    29,    30,
      31,    21,    22,    23,    24,    25,    21,    22,    23,    24,
     230,    43,     7,    54,    46,   235,    48,    20,    45,     7,
      52,    53,    13,    43,    13,    57,    46,    13,    48,    14,
      44,    14,    52,    53,    45,    45,    55,    57,    21,    22,
      23,    24,    25,    14,     9,    10,    11,    12,    45,    13,
      21,    22,    23,    24,    25,    45,     8,     8,    45,     8,
      43,     8,    44,    46,    45,    48,    45,    13,    13,    52,
      53,    13,    43,    13,    57,    46,    14,    48,    45,    45,
      14,    52,    53,    45,    45,    45,    57,    21,    22,    23,
      24,    25,    14,    87,    88,    89,    90,    14,    14,    21,
      22,    23,    24,    25,    45,    13,    45,    13,    45,    43,
      86,   141,    46,    16,    48,    47,   168,    -1,    52,    53,
      -1,    43,    -1,    57,    46,   105,    48,    -1,    -1,    14,
      52,    53,    -1,    -1,    -1,    57,    21,    22,    23,    24,
      25,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    46,    -1,    48,    -1,    -1,    -1,    52,    53,    -1,
      43,    -1,    57,    46,    -1,    48,    -1,    -1,    14,    52,
      53,    -1,    -1,    -1,    57,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    43,    -1,    -1,
      46,    -1,    48,    -1,    -1,    43,    52,    53,    46,    -1,
      48,    57,    50,    43,    52,    53,    46,    -1,    48,    57,
      -1,    -1,    52,    53,    -1,    -1,    56,    57,    21,    22,
      23,    24,    25,    32,    33,    34,    35,    36,    37,    38,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    46,    -1,    48,     3,     4,    -1,    52,
      53,     8,    43,    56,    57,    46,    -1,    48,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    57,    -1,    -1,    26,
      27,    28,    29,    30,    31,     3,    -1,    -1,    -1,     7,
      -1,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    21,    22,    23,    24,    25,    43,    46,    48,    52,
      53,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      68,    71,    73,    74,    76,    81,     7,    32,    33,    34,
      35,    36,    37,    38,     7,     7,    13,     7,     7,    25,
       0,    45,    25,    42,    70,    25,    70,     3,     7,     9,
      11,    75,    82,    83,    84,    85,     7,    10,    25,    41,
      74,    79,    80,    82,    82,    82,    82,    82,    79,    82,
      22,    25,    69,    60,    67,    82,    25,     7,    61,     7,
      34,    85,    82,     8,     3,     4,    20,     5,     6,    16,
      17,    79,    82,    80,    39,    40,    26,    27,    28,    29,
      30,    31,     8,    25,    34,    20,    45,    14,     8,     8,
      62,    72,    72,    10,    12,    25,    82,     8,    83,    83,
      75,    84,    84,    84,    84,     8,    80,    80,    82,    82,
      82,    82,    82,    82,    13,    34,    82,    25,    81,    50,
      49,    13,    13,    25,     8,     8,    60,    82,    47,     8,
      45,     7,    67,    54,    77,    78,    20,    13,    13,    45,
      47,    82,    13,    60,    79,    14,     7,    55,    45,    72,
      60,    60,    14,    82,    60,    45,     8,     9,    10,    11,
      12,    13,    77,    45,    45,    44,    45,     8,     8,     8,
       8,    60,    56,    56,    13,    43,    14,    13,    13,    13,
      13,    45,    45,    82,    60,     7,    13,    60,    60,    60,
      60,    14,    14,    45,    45,    79,    60,    45,    45,    45,
      45,    14,    14,    14,     8,    45,    14,    14,    14,    14,
      13,    14,    60,    44,    45,    13,    14,    60,    45,    14
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
        case 72:

/* Line 1455 of yacc.c  */
#line 164 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)+(yyvsp[(3) - (3)].f);;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 165 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)-(yyvsp[(3) - (3)].f);;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 166 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (3)].f)*(yyvsp[(3) - (3)].f);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 169 "Parser.y"
    {if((yyvsp[(3) - (3)].f)==0){yyerror("Division By zero");}else (yyval.f)=(yyvsp[(1) - (3)].f)/(yyvsp[(3) - (3)].f);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 170 "Parser.y"
    {if((int)(yyvsp[(3) - (3)].f)==0){yyerror("Modulo By zero");}else (yyval.f)=(int)(yyvsp[(1) - (3)].f) % (int)(yyvsp[(3) - (3)].f);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 171 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 173 "Parser.y"
    {(yyval.f)=pow((yyvsp[(1) - (3)].f),(yyvsp[(3) - (3)].f));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 174 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    {(yyval.f)=(yyvsp[(2) - (3)].f);;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 177 "Parser.y"
    {(yyval.f)=-(yyvsp[(2) - (2)].f);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    {(yyval.f)=(float)(yyvsp[(1) - (1)].i);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 179 "Parser.y"
    {(yyval.f)=(yyvsp[(1) - (1)].f);;}
    break;



/* Line 1455 of yacc.c  */
#line 1739 "Parser.tab.c"
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
#line 181 "Parser.y"


/* Subroutines */
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
int main(void) {
    return yyparse();
}
