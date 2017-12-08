/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */

	#include <iostream>
	#include <vector>
	#include <map>
	#include <cmath>
	#include "includes/ast.h"

	int yylex (void);
	extern char *yytext;
	void yyerror (const char *);
	PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 79 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASH = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAR = 279,
    DOUBLESTAREQUAL = 280,
    ELIF = 281,
    ELSE = 282,
    ENDMARKER = 283,
    EQEQUAL = 284,
    EQUAL = 285,
    EXCEPT = 286,
    EXEC = 287,
    FINALLY = 288,
    FOR = 289,
    FROM = 290,
    GLOBAL = 291,
    GREATER = 292,
    GREATEREQUAL = 293,
    GRLT = 294,
    IF = 295,
    IMPORT = 296,
    IN = 297,
    INDENT = 298,
    IS = 299,
    LAMBDA = 300,
    LBRACE = 301,
    LEFTSHIFT = 302,
    LEFTSHIFTEQUAL = 303,
    LESS = 304,
    LESSEQUAL = 305,
    LPAR = 306,
    LSQB = 307,
    MINEQUAL = 308,
    NEWLINE = 309,
    NOT = 310,
    NOTEQUAL = 311,
    NUMBER = 312,
    OR = 313,
    PASS = 314,
    PERCENT = 315,
    PERCENTEQUAL = 316,
    PLUSEQUAL = 317,
    PRINT = 318,
    RAISE = 319,
    RBRACE = 320,
    RETURN = 321,
    RIGHTSHIFT = 322,
    RIGHTSHIFTEQUAL = 323,
    RPAR = 324,
    RSQB = 325,
    SEMI = 326,
    SLASHEQUAL = 327,
    STAREQUAL = 328,
    STRING = 329,
    TILDE = 330,
    TRY = 331,
    VBAREQUAL = 332,
    WHILE = 333,
    WITH = 334,
    YIELD = 335,
    INT = 336,
    FLOAT = 337,
    IDENT = 338,
    NAME = 339,
    PLUS = 340,
    MINUS = 341,
    STAR = 342,
    SLASH = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "includes/parse.y" /* yacc.c:355  */

	Node* node;
	int intNumber;
	float fltNumber;
	char *id;
	std::vector<Node*>* vec;

#line 216 "parse.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
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

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 247 "parse.tab.c" /* yacc.c:358  */

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   952

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  315
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  478

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    63,    66,    67,    70,    71,    74,    75,
      78,    79,    82,    83,    86,    87,    90,    96,    97,   100,
     101,   104,   105,   108,   109,   112,   113,   116,   117,   120,
     121,   124,   125,   128,   129,   132,   133,   136,   137,   140,
     141,   144,   145,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   159,   190,   195,   196,   199,   200,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   216,
     219,   222,   223,   226,   227,   230,   231,   234,   235,   238,
     241,   244,   245,   246,   247,   248,   251,   254,   257,   258,
     261,   264,   265,   268,   269,   272,   273,   276,   277,   280,
     283,   286,   287,   290,   291,   292,   295,   296,   299,   300,
     303,   304,   307,   308,   311,   312,   315,   316,   319,   322,
     323,   326,   327,   330,   331,   334,   335,   336,   337,   338,
     339,   340,   341,   344,   345,   348,   349,   352,   353,   356,
     357,   360,   361,   364,   365,   368,   369,   372,   373,   376,
     379,   380,   383,   384,   387,   388,   391,   392,   395,   396,
     399,   400,   408,   413,   420,   421,   424,   425,   428,   429,
     432,   433,   436,   437,   440,   441,   444,   445,   448,   449,
     452,   453,   456,   457,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   473,   474,   477,   478,   481,
     482,   485,   486,   489,   490,   493,   494,   500,   501,   504,
     505,   518,   519,   520,   521,   524,   530,   533,   534,   535,
     538,   540,   543,   544,   547,   548,   549,   550,   551,   552,
     556,   559,   562,   563,   566,   567,   570,   571,   574,   575,
     578,   579,   582,   583,   586,   587,   590,   591,   594,   595,
     598,   599,   600,   603,   604,   607,   608,   611,   612,   613,
     616,   617,   620,   621,   624,   625,   628,   629,   632,   633,
     636,   637,   640,   641,   644,   645,   648,   649,   652,   653,
     656,   657,   660,   661,   664,   667,   668,   671,   672,   675,
     676,   679,   680,   681,   684,   685,   688,   689,   692,   693,
     696,   697,   700,   701,   704,   705,   708,   709,   712,   713,
     716,   717,   720,   721,   724,   725
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "NEWLINE", "NOT", "NOTEQUAL", "NUMBER", "OR", "PASS",
  "PERCENT", "PERCENTEQUAL", "PLUSEQUAL", "PRINT", "RAISE", "RBRACE",
  "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI",
  "SLASHEQUAL", "STAREQUAL", "STRING", "TILDE", "TRY", "VBAREQUAL",
  "WHILE", "WITH", "YIELD", "INT", "FLOAT", "IDENT", "NAME", "PLUS",
  "MINUS", "STAR", "SLASH", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -385

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-385)))

#define YYTABLE_NINF -262

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -385,    35,  -385,   354,  -385,   791,   -35,   791,  -385,   -33,
    -385,    24,    51,  -385,    51,    51,  -385,    17,   791,   -35,
     105,   791,   667,   791,  -385,   434,  -385,  -385,   711,   791,
     791,  -385,  -385,   123,   791,   791,   791,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,   144,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,    21,   138,  -385,   156,   163,   168,
     178,    -4,    80,     4,  -385,    51,  -385,  -385,   110,  -385,
     875,  -385,  -385,   171,  -385,    97,  -385,   140,    18,   139,
     163,  -385,    32,   147,   150,     6,  -385,   184,  -385,   185,
     124,   791,   188,    44,    23,   145,  -385,   170,  -385,   148,
    -385,  -385,   174,   146,  -385,  -385,   791,  -385,  -385,   198,
    -385,    30,   203,  -385,   215,  -385,  -385,  -385,  -385,    75,
     211,   434,   434,  -385,   434,  -385,  -385,  -385,  -385,  -385,
     177,  -385,  -385,   187,  -385,    51,    51,    51,    51,  -385,
    -385,    51,  -385,  -385,    51,  -385,  -385,  -385,  -385,    51,
    -385,   103,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,   205,   667,   791,   149,   167,  -385,
    -385,   791,    30,   791,   169,   222,   224,   791,   791,   -17,
     201,   223,   229,    30,   -35,   162,  -385,   791,   164,   -11,
    -385,   165,  -385,   217,   791,    51,   236,  -385,  -385,  -385,
     236,  -385,  -385,    51,   236,  -385,  -385,   237,   236,   791,
    -385,   212,  -385,   143,    30,   155,    51,  -385,   607,   791,
      28,   138,  -385,  -385,  -385,   163,   168,   178,    -4,    80,
       4,  -385,   172,    51,   167,   724,  -385,   667,  -385,  -385,
    -385,  -385,  -385,   189,  -385,   259,  -385,  -385,  -385,   190,
    -385,   192,    30,    51,   238,   247,   179,   258,  -385,  -385,
    -385,  -385,   181,  -385,  -385,  -385,  -385,  -385,  -385,   200,
     254,   791,   255,   170,   230,   791,  -385,  -385,   231,  -385,
     791,   260,  -385,  -385,   238,   527,   791,   262,   130,   263,
     248,    30,   791,   163,  -385,  -385,  -385,   791,  -385,  -385,
     210,   253,   266,   214,  -385,   267,  -385,   233,   791,   791,
     134,  -385,   269,   273,  -385,  -385,   163,   791,  -385,    30,
     220,   207,   276,  -385,   151,   277,  -385,   270,  -385,  -385,
      29,  -385,   281,  -385,  -385,   434,   835,  -385,   791,  -385,
    -385,  -385,   447,    40,    30,   283,   275,   284,    30,   294,
    -385,  -385,  -385,  -385,   292,  -385,   299,   791,  -385,  -385,
    -385,   791,  -385,  -385,   249,  -385,    30,  -385,   290,  -385,
    -385,   179,   791,   304,   -11,   242,   791,  -385,    83,   305,
      19,   306,  -385,   271,  -385,  -385,  -385,  -385,  -385,   791,
    -385,  -385,    30,   312,  -385,    30,  -385,    30,  -385,   623,
    -385,   315,   319,  -385,  -385,   316,  -385,   321,    30,  -385,
    -385,   322,   835,  -385,  -385,  -385,   835,   323,   835,  -385,
    -385,  -385,   835,   331,  -385,  -385,    30,  -385,  -385,  -385,
     791,  -385,  -385,   778,  -385,    30,    30,  -385,   791,    38,
    -385,   835,    19,  -385,   835,  -385,  -385,  -385,   791,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    86,     0,
      87,     0,     0,     3,     0,     0,   315,     0,     0,     0,
      24,   241,   237,   239,     4,     0,   232,    80,    74,    92,
      89,   243,   219,     0,     0,     0,   313,   230,   231,   229,
     228,   217,   218,     6,    13,     0,   132,   130,     5,    37,
      42,    43,    44,    45,    46,    47,    81,    82,    83,    85,
      84,    48,    97,    98,    49,    50,    51,    38,   125,   126,
     127,   128,   129,    72,   175,   176,   178,   181,   182,   195,
     197,   199,   201,   205,   209,     0,   216,   223,   233,   173,
      57,   131,    90,   124,   116,     0,   310,     0,     0,     0,
     269,    79,   122,     0,     0,     0,   120,     0,   114,    99,
     109,     0,     0,     0,    72,     0,   240,    72,   236,     0,
     235,   234,    72,     0,   238,   180,     0,    69,    72,    96,
      88,     0,     0,   151,   153,   312,    12,    15,    14,     0,
     271,     0,     0,   172,     0,   186,   185,   187,   189,   191,
     193,   184,   188,     0,   190,     0,     0,     0,     0,   203,
     204,     0,   207,   208,     0,   214,   213,   211,   212,     0,
     215,   221,   242,    63,    65,    68,    66,    59,    62,    58,
      67,    61,    60,    64,    53,     0,     0,     0,   286,     9,
     227,     0,     0,   283,    24,     0,   267,     0,     0,     0,
     314,   101,   118,     0,     0,     0,   249,     0,     0,     0,
      31,     0,    19,    22,     0,     0,    30,   273,   278,   226,
      30,   246,   224,     0,    30,   244,   225,    78,    30,     0,
      91,     0,   160,     0,     0,     0,     0,    40,     0,   270,
       0,   177,   179,   194,   192,   183,   196,   198,   200,   202,
     206,   210,     0,     0,   286,   261,   222,     0,    52,    55,
      54,   123,   117,     0,    10,     0,   311,   281,   282,     0,
      18,     0,     0,   266,    94,     0,     0,   107,   103,   100,
     113,   105,     0,   136,   115,   108,   248,    28,    36,     0,
      26,     0,    30,   275,     0,    29,   279,   247,     0,   245,
       0,    30,    70,    73,    94,     0,   155,     0,   146,     0,
     138,     0,     0,   152,    39,    41,    71,     0,   252,   220,
       0,     0,   258,     0,   256,     0,    56,     0,     0,     0,
     297,   284,    30,     0,    17,    16,   268,     0,   121,     0,
       0,     0,   111,   119,   134,    34,    32,     0,    27,    21,
      23,    20,    30,   272,   276,     0,     0,    76,    29,    77,
      95,   163,     0,   159,     0,     0,   148,     0,     0,     0,
     149,   150,   174,   250,     0,   251,   254,   261,     8,   293,
     288,     0,   294,   296,   285,   291,     0,    93,   140,   104,
     106,   110,     0,     0,    33,     0,    29,   277,   307,    24,
     301,   165,   169,   168,    75,   161,   162,   156,   157,     0,
     154,   142,     0,     0,   141,     0,   144,     0,   257,   253,
     260,   263,   290,   295,   280,     0,   112,     0,     0,    35,
      25,     0,     0,   306,   304,   305,     0,     0,     0,   300,
     298,   299,     0,    30,   158,   145,     0,   143,   137,   255,
     265,   259,   262,     0,   292,     0,     0,   133,     0,   309,
     171,     0,   303,   167,    29,   164,   147,   264,     0,   287,
     139,   135,   274,   308,   170,   302,   166,   289
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -385,  -385,  -385,  -385,  -385,   303,    67,  -385,  -385,   307,
    -385,  -186,  -385,  -385,  -385,  -385,  -192,  -198,  -385,  -385,
    -274,    -2,  -385,   101,  -385,    92,  -385,  -385,  -385,    25,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,    46,  -385,  -385,  -385,  -385,  -385,  -385,   -40,   152,
      78,  -385,  -385,    14,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,    43,
      49,  -385,  -385,  -189,  -385,  -385,  -385,  -384,  -385,    -5,
    -385,  -136,   216,     0,  -385,  -385,     7,   208,   202,   209,
    -385,   218,  -385,   206,  -385,   -70,  -385,  -385,  -385,  -385,
    -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,  -385,
    -385,   -53,     1,  -385,  -385,    -8,  -385,   -26,  -385,  -385,
    -385,  -385,   324,  -385,  -385,  -385,  -385,  -385,  -385,   -78,
    -385,   -85,   261,  -385,   -79,  -105,  -385,  -385,   -16,  -385
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    43,     3,    44,   263,    45,    46,    47,
     195,   112,   292,   113,   348,   212,   296,   213,   289,   345,
      48,   232,   139,    50,    51,   258,   184,   185,    52,   140,
     127,   301,   302,    53,    54,    55,    56,    57,    58,    59,
      60,   338,   230,    61,    62,    63,   104,   279,   280,   108,
     281,   342,   109,   110,    64,   202,    65,    66,    67,    68,
     344,    69,    70,    71,   308,   366,   414,    72,   235,   133,
     309,   409,   410,   233,   362,   400,   443,   401,   402,    73,
     143,    74,    75,    76,    77,   155,    78,    79,    80,    81,
     161,    82,   164,    83,   169,    84,    85,    86,   171,    87,
     118,   119,   123,   115,    88,   124,   120,    89,   256,   323,
     376,   324,   325,   451,   452,   101,   196,    90,   116,   352,
     353,   217,    91,   269,   264,   265,   422,   454,   331,   332,
     382,   439,   440,   441,   433,   434,   435,    97,    92,   105
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    49,    96,   267,   130,   240,   121,   103,   271,   218,
     135,   288,   221,   107,   283,   170,   114,   117,   122,   100,
      95,   102,   100,   128,   129,   125,   165,   200,   297,   132,
     134,   361,   299,   192,   276,     4,   303,     5,   214,     7,
     209,     8,   156,   159,   -29,   310,   407,    10,   459,    94,
      12,    98,   460,   223,   462,   317,   408,   215,   463,   438,
       7,   141,    14,   160,   166,    16,    17,   277,   208,   193,
     278,    19,   215,   210,   197,    20,    21,   474,   432,   142,
     476,    22,    23,   335,   231,    25,   142,    26,   406,    27,
      94,   167,   168,    28,    29,   209,    30,    21,   -29,   251,
     351,   106,    22,    23,    31,    32,   206,    99,    26,   359,
      36,    37,    38,    39,    40,    41,    42,   215,   187,   201,
     111,   227,   370,   432,   252,    31,    32,   253,   210,   237,
     205,   211,    37,    38,    39,    40,    41,    42,   131,   216,
     385,   142,   220,   144,   242,   187,   238,   224,   188,   190,
     388,   189,     6,   228,   254,   255,   191,   365,     9,   259,
     397,   306,   245,    11,   381,   162,   163,   268,   215,   260,
     311,   312,   275,   156,   306,   411,   307,   392,   393,   416,
     157,   261,   158,   319,   172,   145,   266,   186,   354,   198,
     194,   199,   274,   146,   147,   148,   429,   424,   149,   203,
     150,   204,   286,   207,   215,   151,   152,   294,   223,   293,
     219,   153,   154,   437,   229,   298,   226,   222,   234,   398,
     403,   236,   100,   445,   304,   383,   447,   239,   448,   244,
     100,   259,   243,   262,   316,   257,   -11,   272,   270,   457,
     273,   260,  -102,   313,   187,   282,   285,   291,   287,   290,
     322,   465,   295,   300,   337,   305,   318,   466,   327,   333,
     330,   334,   339,   277,   341,   343,   470,   471,     7,   346,
     347,   350,   355,   356,   374,   369,   358,   364,   368,   373,
     336,  -260,   377,   328,   375,   384,   349,   378,   386,   389,
     316,   390,   391,   394,   395,   357,   403,   396,   412,   415,
     403,   363,   403,    49,    20,    21,   403,   134,   413,   417,
      22,    23,   372,   418,    25,   419,    26,   425,   -29,   428,
     436,   320,   442,   379,   380,   403,   430,   446,   403,   142,
     450,   455,   387,    31,    32,   453,   456,   458,   461,   315,
      37,    38,    39,    40,    41,    42,   329,   464,   136,   326,
     360,   426,   137,   404,   340,   371,   284,   367,   241,   247,
      49,     5,     6,     7,   246,     8,   449,   248,     9,   138,
     250,    10,   420,    11,    12,   469,   423,   475,   421,   249,
     473,     0,    13,   225,     0,     0,    14,   427,    15,    16,
      17,   431,     0,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,   444,    22,    23,     0,    24,    25,
       0,    26,     0,    27,   322,     0,     0,    28,    29,     0,
      30,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,    34,    35,    36,    37,    38,    39,    40,    41,
      42,     0,     0,     7,     0,   467,     0,     0,   330,     0,
       0,     0,     0,   472,     5,     6,     7,     0,     8,     0,
       0,     9,     0,   477,    10,   405,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      21,    15,    16,    17,     0,    22,    23,    18,    19,    25,
       0,    26,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    25,     0,    26,     0,    27,     0,    31,    32,
      28,    29,     0,    30,     0,    37,    38,    39,    40,    41,
      42,    31,    32,    33,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     5,     6,     7,     0,     8,     0,
       0,     9,     0,     0,    10,     0,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
       0,    15,    16,    17,     0,     0,     0,    18,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,     0,    25,     0,    26,     0,    27,     0,     0,     0,
      28,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,    31,    32,    33,     0,    34,    35,    36,    37,    38,
      39,    40,    41,    42,     5,     0,     7,     0,     8,     0,
       0,     0,     0,     0,    10,     0,     0,    12,     0,     0,
       0,     0,     7,     0,     0,     0,     0,     0,  -261,    14,
       0,     0,    16,    17,   321,     0,     0,     0,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       0,   314,    25,     0,    26,     0,    27,     0,    20,    21,
      28,    29,     0,    30,    22,    23,     7,     0,    25,     0,
      26,    31,    32,     0,     0,     0,     0,    36,    37,    38,
      39,    40,    41,    42,     0,     0,     0,    31,    32,     0,
       0,     0,     0,     0,    37,    38,    39,    40,    41,    42,
       0,     0,    20,    21,     0,     0,     0,     0,    22,    23,
       7,     0,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,     0,     0,     0,     0,     0,
       0,    31,    32,     0,     0,   321,     0,    36,    37,    38,
      39,    40,    41,    42,     0,     0,    20,    21,     0,     0,
       0,     0,    22,    23,     0,     0,    25,     0,    26,    20,
      21,     0,     0,     0,     0,    22,    23,     0,   126,    25,
       0,    26,     0,     0,     0,    31,    32,     7,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    31,    32,
       7,     0,   468,     0,     0,    37,    38,    39,    40,    41,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,    22,
      23,     0,     0,    25,     0,    26,    20,    21,     0,     0,
       0,     0,    22,    23,     7,     0,    25,     0,    26,     0,
       0,     0,    31,    32,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    31,    32,     0,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,   173,     0,
     399,    21,     0,     0,     0,     0,    22,    23,   174,     0,
      25,     0,    26,     0,     0,     0,     0,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,     0,     0,     0,     0,     0,    37,    38,    39,    40,
      41,    42,     0,   176,     0,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,   178,   179,     0,     0,
       0,     0,     0,   180,     0,     0,     0,   181,   182,     0,
       0,     0,   183
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   192,    30,   141,    22,    15,   194,   114,
      36,   209,   117,    18,   203,    85,    21,    22,    23,    12,
       6,    14,    15,    28,    29,    25,    22,    21,   220,    34,
      35,   305,   224,    15,    51,     0,   228,     7,    15,     9,
      51,    11,    10,    47,    15,   234,     6,    17,   432,    84,
      20,    84,   436,    34,   438,    27,    16,    34,   442,    40,
       9,    40,    32,    67,    60,    35,    36,    84,    24,    51,
      87,    41,    34,    84,    42,    45,    46,   461,    40,    58,
     464,    51,    52,   272,    54,    55,    58,    57,   362,    59,
      84,    87,    88,    63,    64,    51,    66,    46,    69,   169,
     292,    84,    51,    52,    74,    75,   111,    83,    57,   301,
      80,    81,    82,    83,    84,    85,    86,    34,    21,   105,
      15,   126,   311,    40,    21,    74,    75,    24,    84,    54,
       6,    87,    81,    82,    83,    84,    85,    86,    15,   114,
     332,    58,   117,     5,   144,    21,    71,   122,    51,     9,
     339,    54,     8,   128,    51,    52,    16,    27,    14,   185,
     352,    31,   155,    19,    30,    85,    86,   193,    34,   185,
      15,    16,   198,    10,    31,   364,    33,    26,    27,   368,
      12,   186,     4,   253,    74,    29,   191,    16,   293,    42,
      51,    41,   197,    37,    38,    39,   394,   386,    42,    15,
      44,    16,   207,    15,    34,    49,    50,   215,    34,   214,
      65,    55,    56,   399,    16,   223,    70,    69,    15,   355,
     356,     6,   215,   412,   229,   330,   415,    16,   417,    42,
     223,   257,    55,    84,   239,    30,    69,    15,    69,   428,
      16,   257,    41,   236,    21,    16,    84,    30,    84,    84,
     255,   443,    16,    16,    16,    43,    84,   446,    69,    69,
     265,    69,    15,    84,     6,    84,   455,   456,     9,    69,
      16,    16,    42,    42,    21,    27,    16,    15,    15,    69,
     273,    15,    15,    24,    70,    16,   291,    54,    15,    69,
     295,    84,    16,    16,    24,   300,   432,    16,    15,    15,
     436,   306,   438,   305,    45,    46,   442,   312,    33,    15,
      51,    52,   317,    21,    55,    16,    57,    27,    69,    15,
      15,   254,    16,   328,   329,   461,    84,    15,   464,    58,
      15,    15,   337,    74,    75,    16,    15,    15,    15,   238,
      81,    82,    83,    84,    85,    86,    87,    16,    45,   257,
     304,   391,    45,   358,   276,   312,   204,   308,   142,   157,
     362,     7,     8,     9,   156,    11,   419,   158,    14,    45,
     164,    17,   377,    19,    20,   453,   381,   462,   377,   161,
     459,    -1,    28,   122,    -1,    -1,    32,   392,    34,    35,
      36,   396,    -1,    -1,    40,    41,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,   409,    51,    52,    -1,    54,    55,
      -1,    57,    -1,    59,   419,    -1,    -1,    63,    64,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    -1,    -1,     9,    -1,   450,    -1,    -1,   453,    -1,
      -1,    -1,    -1,   458,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,   468,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      46,    34,    35,    36,    -1,    51,    52,    40,    41,    55,
      -1,    57,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    -1,    74,    75,
      63,    64,    -1,    66,    -1,    81,    82,    83,    84,    85,
      86,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    17,    -1,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,
      63,    64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    76,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     7,    -1,     9,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    32,
      -1,    -1,    35,    36,    21,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    45,    46,
      63,    64,    -1,    66,    51,    52,     9,    -1,    55,    -1,
      57,    74,    75,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,    52,
       9,    -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    21,    -1,    80,    81,    82,
      83,    84,    85,    86,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    -1,    57,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    -1,    67,    55,
      -1,    57,    -1,    -1,    -1,    74,    75,     9,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    74,    75,
       9,    -1,    24,    -1,    -1,    81,    82,    83,    84,    85,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    55,    -1,    57,    45,    46,    -1,    -1,
      -1,    -1,    51,    52,     9,    -1,    55,    -1,    57,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    74,    75,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,     3,    -1,
      45,    46,    -1,    -1,    -1,    -1,    51,    52,    13,    -1,
      55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    77
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    90,    91,    93,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    28,    32,    34,    35,    36,    40,    41,
      45,    46,    51,    52,    54,    55,    57,    59,    63,    64,
      66,    74,    75,    76,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    92,    94,    96,    97,    98,   109,   110,
     112,   113,   117,   122,   123,   124,   125,   126,   127,   128,
     129,   132,   133,   134,   143,   145,   146,   147,   148,   150,
     151,   152,   156,   168,   170,   171,   172,   173,   175,   176,
     177,   178,   180,   182,   184,   185,   186,   188,   193,   196,
     206,   211,   227,   168,    84,   142,   168,   226,    84,    83,
     175,   204,   175,   204,   135,   228,    84,   168,   138,   141,
     142,    15,   100,   102,   168,   192,   207,   168,   189,   190,
     195,   227,   168,   191,   194,   172,    67,   119,   168,   168,
     206,    15,   168,   158,   168,   206,    94,    98,   211,   111,
     118,    40,    58,   169,     5,    29,    37,    38,    39,    42,
      44,    49,    50,    55,    56,   174,    10,    12,     4,    47,
      67,   179,    85,    86,   181,    22,    60,    87,    88,   183,
     184,   187,    74,     3,    13,    25,    48,    53,    61,    62,
      68,    72,    73,    77,   115,   116,    16,    21,    51,    54,
       9,    16,    15,    51,    51,    99,   205,    42,    42,    41,
      21,   142,   144,    15,    16,     6,   168,    15,    24,    51,
      84,    87,   104,   106,    15,    34,   118,   210,   224,    65,
     118,   224,    69,    34,   118,   221,    70,   168,   118,    16,
     131,    54,   110,   162,    15,   157,     6,    54,    71,    16,
     170,   171,   172,    55,    42,   175,   176,   177,   178,   180,
     182,   184,    21,    24,    51,    52,   197,    30,   114,   206,
     227,   168,    84,    95,   213,   214,   168,   162,   206,   212,
      69,   100,    15,    16,   168,   206,    51,    84,    87,   136,
     137,   139,    16,   162,   138,    84,   168,    84,   106,   107,
      84,    30,   101,   168,   204,    16,   105,   105,   204,   105,
      16,   120,   121,   105,   168,    43,    31,    33,   153,   159,
     162,    15,    16,   175,    54,   112,   168,    27,    84,   184,
      95,    21,   168,   198,   200,   201,   114,    69,    24,    87,
     168,   217,   218,    69,    69,   162,   175,    16,   130,    15,
     139,     6,   140,    84,   149,   108,    69,    16,   103,   168,
      16,   105,   208,   209,   224,    42,    42,   168,    16,   105,
     130,   109,   163,   168,    15,    27,   154,   159,    15,    27,
     162,   158,   168,    69,    21,    70,   199,    15,    54,   168,
     168,    30,   219,   224,    16,   105,    15,   168,   162,    69,
      84,    16,    26,    27,    16,    24,    16,   105,   170,    45,
     164,   166,   167,   170,   168,    18,   109,     6,    16,   160,
     161,   162,    15,    33,   155,    15,   162,    15,    21,    16,
     168,   201,   215,   168,   162,    27,   137,   168,    15,   106,
      84,   168,    40,   223,   224,   225,    15,   100,    40,   220,
     221,   222,    16,   165,   168,   162,    15,   162,   162,   200,
      15,   202,   203,    16,   216,    15,    15,   162,    15,   166,
     166,    15,   166,   166,    16,   105,   162,   168,    24,   218,
     162,   162,   168,   223,   166,   220,   166,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   118,   118,   119,   119,   120,   120,   121,   121,   122,
     123,   124,   124,   124,   124,   124,   125,   126,   127,   127,
     128,   129,   129,   130,   130,   131,   131,   132,   132,   133,
     134,   135,   135,   136,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   142,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   148,   149,   149,   150,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   168,   168,   169,   169,   170,   170,   171,   171,
     172,   172,   173,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   180,   180,   181,   181,   182,
     182,   183,   183,   183,   183,   184,   184,   185,   185,   185,
     186,   186,   187,   187,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   188,   189,   189,   190,   190,   191,   191,
     192,   192,   193,   193,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   198,   199,   199,   200,   200,   200,
     201,   201,   202,   202,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   212,   212,   213,   214,   214,   215,   215,   216,
     216,   217,   217,   217,   218,   218,   219,   219,   220,   220,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   225,
     226,   226,   227,   227,   228,   228
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     3,     0,     3,     0,     3,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     3,     1,     2,     0,     3,     0,     1,     1,     2,
       4,     2,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     2,     3,     0,     1,     3,     1,     3,     3,     3,
       0,     5,     2,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     8,     5,     5,     0,     7,     4,     9,
       6,     6,     6,     4,     3,     3,     0,     3,     0,     5,
       3,     0,     3,     1,     3,     1,     1,     1,     2,     0,
       1,     4,     2,     1,     3,     1,     3,     2,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     2,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     2,     1,     2,     3,     2,     3,     4,     3,
       3,     3,     2,     3,     2,     3,     0,     3,     1,     4,
       1,     0,     1,     0,     2,     1,     3,     2,     3,     0,
       3,     2,     4,     2,     5,     0,     1,     2,     1,     2,
       7,     4,     1,     0,     2,     3,     0,     3,     0,     3,
       0,     2,     4,     2,     2,     3,     1,     0,     1,     1,
       5,     4,     3,     2,     1,     1,     5,     4,     3,     2,
       1,     3,     2,     1,     2,     0
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
  YYUSE (yytype);
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
        case 16:
#line 90 "includes/parse.y" /* yacc.c:1646  */
    {
		std::cout << "hey jude" << std::endl;
		(yyval.node) = new FuncNode((yyvsp[-3].id), (yyvsp[0].node));
		}
#line 1921 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 159 "includes/parse.y" /* yacc.c:1646  */
    { if((yyvsp[-1].id) == "PLUSEQ"){
			Node* node = new AddBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
			(yyval.node) = new AsgBinaryNode((yyvsp[-2].node), node);
			pool.add(node);
			pool.add((yyval.node));
			}
		if((yyvsp[-1].id) == "SUBEQ"){
                        Node* node = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
                        (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), node);
                        pool.add(node);
                        pool.add((yyval.node));
		}
		if((yyvsp[-1].id) == "MULEQ"){
                        Node* node = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
                        (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), node);
                        pool.add(node);
                        pool.add((yyval.node));
		}
		if((yyvsp[-1].id) == "DIVEQ"){
                        Node* node = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
                        (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), node);
                        pool.add(node);
                        pool.add((yyval.node));
		}
		if((yyvsp[-1].id) == "PEREQ"){
                        Node* node = new PerBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
                        (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), node);
                        pool.add(node);
                        pool.add((yyval.node));
		}
		}
#line 1957 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "includes/parse.y" /* yacc.c:1646  */
    { if((yyvsp[0].node) != NULL) { (yyval.node) = new AsgBinaryNode((yyvsp[-1].node), (yyvsp[0].node));
				pool.add((yyval.node));}
		}
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 196 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 1971 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 199 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.node) = (yyvsp[0].node);}
#line 1977 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id) = "PLUSEQ";}
#line 1983 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 204 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id) = "SUBEQ";}
#line 1989 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 205 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id) = "MULEQ";}
#line 1995 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 206 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id) = "DIVEQ";}
#line 2001 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 207 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id) ="PEREQ";}
#line 2007 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 213 "includes/parse.y" /* yacc.c:1646  */
    {(yyval.id)="DIVEQ";}
#line 2013 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 216 "includes/parse.y" /* yacc.c:1646  */
    { 
		std::cout << ((yyvsp[0].node))->eval() << std::endl;
		((yyvsp[0].node))->eval()->print();}
#line 2021 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 399 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2027 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 400 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
		std::cout << "new suite node" << std::endl;
		((yyval.node))->eval();
		delete (yyvsp[-1].vec);
		}
#line 2038 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 408 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.vec) = (yyvsp[-1].vec);
		(yyval.vec)->push_back((yyvsp[0].node));
		std::cout << "plus_stmt" << std::endl;
		}
#line 2048 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 413 "includes/parse.y" /* yacc.c:1646  */
    {
		(yyval.vec) = new std::vector<Node*>();
		(yyval.vec)->push_back((yyvsp[0].node));
		std::cout << "plus_stmt  & stmt " << std::endl;
		}
#line 2058 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 494 "includes/parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].id) == "PLUS") (yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
		if((yyvsp[-1].id) == "MINUS") (yyval.node) = new SubBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
		pool.add((yyval.node));
		}
#line 2067 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 500 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "PLUS"; }
#line 2073 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 501 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "MINUS";}
#line 2079 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 505 "includes/parse.y" /* yacc.c:1646  */
    { if((yyvsp[-1].id) == "MUL"){ (yyval.node) = new MulBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				}
				if((yyvsp[-1].id) == "DIV") {(yyval.node) = new DivBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				}
				if((yyvsp[-1].id) == "PERCENT") {
				(yyval.node) = new PerBinaryNode((yyvsp[-2].node),(yyvsp[0].node));
				pool.add((yyval.node));
				}
				}
#line 2095 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 518 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "MUL";}
#line 2101 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 519 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "DIV";}
#line 2107 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 520 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "PERCENT";}
#line 2113 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 521 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "DIV";}
#line 2119 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 524 "includes/parse.y" /* yacc.c:1646  */
    {	if((yyvsp[-1].id) == "POS") {(yyval.node) = new PosUnaryNode((yyvsp[0].node));
				pool.add((yyval.node));
				}
				if((yyvsp[-1].id) == "NEG") {(yyval.node) = new NegUnaryNode((yyvsp[0].node));
				pool.add((yyval.node));}
			   }
#line 2130 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 533 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "POS";}
#line 2136 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 534 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.id) = "NEG";}
#line 2142 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 538 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = new PowBinaryNode((yyvsp[-3].node),(yyvsp[0].node));
						pool.add((yyval.node));}
#line 2149 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 547 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[-1].node);}
#line 2155 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 552 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = new IdentNode((yyvsp[0].id));
		  delete [] (yyvsp[0].id);
		  pool.add((yyval.node));
		}
#line 2164 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 556 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = new IntLiteral((yyvsp[0].intNumber));
		  pool.add((yyval.node));
		}
#line 2172 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 559 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
		  pool.add((yyval.node));
		}
#line 2180 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2184 "parse.tab.c" /* yacc.c:1646  */
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
#line 728 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0)	{
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
	                                     yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}

