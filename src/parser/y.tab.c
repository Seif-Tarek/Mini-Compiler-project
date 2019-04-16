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
#line 1 "calc.y" /* yacc.c:339  */

void yyerror (char *s);
int yylex();
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
int symbols[52];
int symbolVal(char symbol);
void updateSymbolVal(char symbol, int val);

#line 77 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    exit_command = 258,
    Rakam = 259,
    TOKEN_Hroof = 260,
    TOKEN_3ashry = 261,
    TOKEN_Harf = 262,
    TOKEN_Boolean = 263,
    CONSTANT_TOKEN = 264,
    LONG_INTEGER = 265,
    DOUBE_FLOATING_POINT = 266,
    STRING_VALUE = 267,
    CHARACTER_VALUE = 268,
    TrueFalse = 269,
    SCOPE_START_TOKEN = 270,
    SCOPE_END_TOKEN = 271,
    STATEMENT_TERMINATOR_TOKEN = 272,
    IF_STATEMENT_TOKEN = 273,
    ELSE_STATEMENT_TOKEN = 274,
    SWITCH_CASE_BEGINNING_TOKEN = 275,
    SWITCH_CASE_START_CASES_TOKEN = 276,
    SWITCH_CASE_END_CASES_TOKEN = 277,
    SWITCH_DEFAULT_CASE_BEGINNING_TOKEN = 278,
    FOR_LOOP_STATMENT_TOKEN = 279,
    WHILE_LOOP_STATEMENT_TOKEN = 280,
    DO_STATEMENT_TOKEN = 281,
    IDENTIFIER_TOKEN = 282,
    OR = 283,
    AND = 284,
    NOT = 285,
    SHIFT_LEFT = 286,
    SHIFT_RIGHT = 287,
    GREATER_THAN_EQUAL = 288,
    LESS_THAN_EQUAL = 289,
    EQUAL_EQUAL = 290,
    NOT_EQUAL = 291
  };
#endif
/* Tokens.  */
#define exit_command 258
#define Rakam 259
#define TOKEN_Hroof 260
#define TOKEN_3ashry 261
#define TOKEN_Harf 262
#define TOKEN_Boolean 263
#define CONSTANT_TOKEN 264
#define LONG_INTEGER 265
#define DOUBE_FLOATING_POINT 266
#define STRING_VALUE 267
#define CHARACTER_VALUE 268
#define TrueFalse 269
#define SCOPE_START_TOKEN 270
#define SCOPE_END_TOKEN 271
#define STATEMENT_TERMINATOR_TOKEN 272
#define IF_STATEMENT_TOKEN 273
#define ELSE_STATEMENT_TOKEN 274
#define SWITCH_CASE_BEGINNING_TOKEN 275
#define SWITCH_CASE_START_CASES_TOKEN 276
#define SWITCH_CASE_END_CASES_TOKEN 277
#define SWITCH_DEFAULT_CASE_BEGINNING_TOKEN 278
#define FOR_LOOP_STATMENT_TOKEN 279
#define WHILE_LOOP_STATEMENT_TOKEN 280
#define DO_STATEMENT_TOKEN 281
#define IDENTIFIER_TOKEN 282
#define OR 283
#define AND 284
#define NOT 285
#define SHIFT_LEFT 286
#define SHIFT_RIGHT 287
#define GREATER_THAN_EQUAL 288
#define LESS_THAN_EQUAL 289
#define EQUAL_EQUAL 290
#define NOT_EQUAL 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "calc.y" /* yacc.c:355  */

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;

#line 197 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   683

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
      38,    39,    46,    44,     2,    45,     2,    47,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
      50,    37,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,    48,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    88,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     109,   110,   111,   114,   115,   116,   117,   118,   121,   124,
     125,   132,   133,   137,   140,   140,   143,   144,   148,   152,
     155,   158,   159,   160,   161,   164,   165,   166,   169,   170,
     171,   174,   175,   176,   179,   180,   181,   182,   186,   187,
     188,   189,   190,   191,   195,   196,   197,   198,   199,   200,
     203,   204,   207,   208,   211,   212,   213
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "exit_command", "Rakam", "TOKEN_Hroof",
  "TOKEN_3ashry", "TOKEN_Harf", "TOKEN_Boolean", "CONSTANT_TOKEN",
  "LONG_INTEGER", "DOUBE_FLOATING_POINT", "STRING_VALUE",
  "CHARACTER_VALUE", "TrueFalse", "SCOPE_START_TOKEN", "SCOPE_END_TOKEN",
  "STATEMENT_TERMINATOR_TOKEN", "IF_STATEMENT_TOKEN",
  "ELSE_STATEMENT_TOKEN", "SWITCH_CASE_BEGINNING_TOKEN",
  "SWITCH_CASE_START_CASES_TOKEN", "SWITCH_CASE_END_CASES_TOKEN",
  "SWITCH_DEFAULT_CASE_BEGINNING_TOKEN", "FOR_LOOP_STATMENT_TOKEN",
  "WHILE_LOOP_STATEMENT_TOKEN", "DO_STATEMENT_TOKEN", "IDENTIFIER_TOKEN",
  "OR", "AND", "NOT", "SHIFT_LEFT", "SHIFT_RIGHT", "GREATER_THAN_EQUAL",
  "LESS_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL", "'='", "'('", "')'",
  "':'", "'|'", "'&'", "'^'", "'+'", "'-'", "'*'", "'/'", "'~'", "'>'",
  "'<'", "$accept", "line", "declaration", "data_type", "assignment",
  "assingment_value", "if_statement", "switch_statement", "case_statement",
  "for_iterator", "for_statement", "while_statement", "repeat_statement",
  "expbitwise", "exp", "expAddSubtract", "component", "factor", "term",
  "Bexp", "Bexp1", "Bexpand", "Bexpbracket", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    61,    40,    41,
      58,   124,    38,    94,    43,    45,    42,    47,   126,    62,
      60
};
# endif

#define YYPACT_NINF -121

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-121)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     215,    -8,  -121,  -121,  -121,  -121,  -121,   164,  -121,   -12,
      11,    19,    28,   215,    16,   267,    38,    43,    51,    57,
    -121,  -121,  -121,  -121,  -121,    67,    68,    69,    81,    24,
     635,    24,  -121,    88,  -121,  -121,  -121,  -121,  -121,    16,
      68,    68,    68,    95,   100,    57,  -121,  -121,  -121,  -121,
       4,     9,    -1,    27,  -121,  -121,  -121,    16,  -121,  -121,
     103,  -121,  -121,   264,    82,    83,  -121,  -121,   107,    24,
      24,  -121,   -14,    55,  -121,    90,  -121,    61,   264,    92,
    -121,    22,  -121,  -121,  -121,  -121,  -121,    68,    68,    68,
      68,    68,    68,    68,    68,    68,   215,    68,    68,    68,
      68,    68,    68,   114,   111,    24,  -121,   -10,    24,   118,
      24,    24,  -121,     9,     9,     9,    -1,    -1,    27,    27,
    -121,  -121,   313,     9,     9,     9,     9,     9,     9,   215,
      96,     5,  -121,    55,   215,  -121,     0,  -121,   359,    99,
      67,   405,    15,  -121,    87,   -22,   101,  -121,  -121,   102,
     124,    87,   127,   129,   215,   109,   215,   215,   451,   146,
     497,   543,   140,   215,  -121,  -121,  -121,   589,  -121
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    23,    27,    24,    26,    25,     0,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      12,     8,    14,    16,     3,     0,     0,     0,     0,     0,
       0,     0,     1,     0,    58,    59,    61,    60,    62,    63,
       0,     0,     0,     0,     0,     9,    11,     7,    13,    15,
       0,    44,    45,    48,    53,    57,     4,    20,    21,     2,
       0,    22,    63,     0,     0,     0,    37,    36,     0,     0,
       0,    76,     0,    71,    73,     0,    28,    29,    44,    30,
      17,     0,    55,    56,     5,     6,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,     0,     0,
       0,     0,    54,    41,    42,    43,    46,    47,    49,    50,
      51,    52,     0,    65,    67,    68,    69,    64,    66,     0,
       0,     0,    74,    70,     0,    72,     0,    32,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    39,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    35,    33,     0,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -121,    80,   -11,   159,   -15,  -121,    -7,    -3,  -121,  -121,
      37,    41,    45,   -20,   158,     1,    17,   -36,  -120,   139,
     -28,    65,   -62
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    76,    19,    20,   145,    68,
      21,    22,    23,    50,    51,    52,    53,    54,    55,    71,
      72,    73,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      44,   150,    58,    79,    43,    82,    83,   106,    45,    24,
      61,    77,    46,    67,   108,    44,   151,    66,   108,    43,
      81,    86,   140,    45,   149,   109,    26,    46,   108,   132,
     134,   155,   148,   108,    34,    35,    36,    37,    38,   142,
      90,    91,   107,    92,    93,    87,    88,    89,   135,    27,
      81,    62,    47,    31,    69,    56,    48,    28,   120,   121,
      49,   112,    70,    87,    88,    89,    29,    47,    59,    41,
      57,    48,    42,    94,    95,    49,    60,   131,    34,    35,
      36,    37,    38,   136,   110,     2,     3,     4,     5,     6,
       7,   116,   117,    30,    14,    62,    65,    34,    35,    36,
      37,    38,    87,    88,    89,    80,    40,    44,    14,   118,
     119,    43,    84,    41,    62,    45,    42,    85,    96,    46,
     108,   103,   104,    44,   105,   146,    44,    43,   111,   129,
      43,    45,   130,   134,    45,    46,   139,   144,    46,   154,
     152,   153,   156,    44,   157,    44,    44,    43,   159,    43,
      43,    45,    44,    45,    45,    46,    43,    46,    46,    47,
      45,   163,   166,    48,    46,    64,    25,    49,     2,     3,
       4,     5,     6,   133,     0,    47,   122,     0,    47,    48,
       0,     0,    48,    49,    63,     0,    49,    63,     0,    78,
       0,     0,     0,     0,     0,    47,     0,    47,    47,    48,
       0,    48,    48,    49,    47,    49,    49,     0,    48,   138,
       0,     0,    49,     0,   141,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     0,     0,    63,    78,     0,
       0,     0,     8,     9,   158,    10,   160,   161,     0,    11,
      12,    13,    14,   167,     0,   113,   114,   115,     0,     0,
       0,     0,     0,     0,     0,   123,   124,   125,   126,   127,
     128,     0,     0,    63,     0,     0,    63,    32,    63,    63,
      33,     2,     3,     4,     5,     6,     7,    34,    35,    36,
      37,    38,     0,     0,     0,     9,     0,    10,     0,     0,
       0,    11,    12,    13,    39,    90,    91,    97,    98,    99,
     100,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    41,   101,   102,    42,    33,     2,     3,     4,
       5,     6,     7,    34,    35,    36,    37,    38,     0,   137,
       0,     9,     0,    10,     0,     0,     0,    11,    12,    13,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    42,    33,     2,     3,     4,     5,     6,     7,    34,
      35,    36,    37,    38,     0,   143,     0,     9,     0,    10,
       0,     0,     0,    11,    12,    13,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,     0,     0,    42,    33,     2,
       3,     4,     5,     6,     7,    34,    35,    36,    37,    38,
       0,   147,     0,     9,     0,    10,     0,     0,     0,    11,
      12,    13,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,     0,     0,    42,    33,     2,     3,     4,     5,     6,
       7,    34,    35,    36,    37,    38,     0,   162,     0,     9,
       0,    10,     0,     0,     0,    11,    12,    13,    39,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
       0,     0,     0,     0,     0,     0,    41,     0,     0,    42,
      33,     2,     3,     4,     5,     6,     7,    34,    35,    36,
      37,    38,     0,   164,     0,     9,     0,    10,     0,     0,
       0,    11,    12,    13,    39,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,     0,     0,     0,
       0,     0,    41,     0,     0,    42,    33,     2,     3,     4,
       5,     6,     7,    34,    35,    36,    37,    38,     0,   165,
       0,     9,     0,    10,     0,     0,     0,    11,    12,    13,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,     0,     0,     0,     0,     0,     0,    41,     0,
       0,    42,    33,     2,     3,     4,     5,     6,     7,    34,
      35,    36,    37,    38,     0,   168,     0,     9,     0,    10,
       0,     0,     0,    11,    12,    13,    39,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,     0,     0,
       0,     0,     0,     0,    41,     0,     0,    42,    33,     2,
       3,     4,     5,     6,     7,    34,    35,    36,    37,    38,
       0,     0,     0,     9,     0,    10,     0,     0,     0,    11,
      75,    13,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,     0,     0,     0,     0,     0,     0,
      41,     0,     0,    42
};

static const yytype_int16 yycheck[] =
{
      15,    23,    17,    31,    15,    41,    42,    69,    15,    17,
      25,    31,    15,    28,    28,    30,    38,    28,    28,    30,
      40,    17,    17,    30,   144,    39,    38,    30,    28,    39,
      15,   151,    17,    28,    10,    11,    12,    13,    14,    39,
      31,    32,    70,    44,    45,    41,    42,    43,   110,    38,
      70,    27,    15,    37,    30,    17,    15,    38,    94,    95,
      15,    39,    38,    41,    42,    43,    38,    30,    17,    45,
      27,    30,    48,    46,    47,    30,    19,   105,    10,    11,
      12,    13,    14,   111,    29,     4,     5,     6,     7,     8,
       9,    90,    91,    13,    27,    27,    27,    10,    11,    12,
      13,    14,    41,    42,    43,    17,    38,   122,    27,    92,
      93,   122,    17,    45,    27,   122,    48,    17,    15,   122,
      28,    39,    39,   138,    17,   140,   141,   138,    38,    15,
     141,   138,    21,    15,   141,   138,    40,    38,   141,    15,
      39,    39,    15,   158,    15,   160,   161,   158,    39,   160,
     161,   158,   167,   160,   161,   158,   167,   160,   161,   122,
     167,    15,    22,   122,   167,    26,     7,   122,     4,     5,
       6,     7,     8,   108,    -1,   138,    96,    -1,   141,   138,
      -1,    -1,   141,   138,    26,    -1,   141,    29,    -1,    31,
      -1,    -1,    -1,    -1,    -1,   158,    -1,   160,   161,   158,
      -1,   160,   161,   158,   167,   160,   161,    -1,   167,   129,
      -1,    -1,   167,    -1,   134,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    69,    70,    -1,
      -1,    -1,    17,    18,   154,    20,   156,   157,    -1,    24,
      25,    26,    27,   163,    -1,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    98,    99,   100,   101,
     102,    -1,    -1,   105,    -1,    -1,   108,     0,   110,   111,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    49,    50,    48,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    -1,    16,    -1,    18,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    48,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    -1,    18,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    48,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    -1,    18,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    -1,    48,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    17,    18,
      20,    24,    25,    26,    27,    52,    53,    54,    55,    57,
      58,    61,    62,    63,    17,    54,    38,    38,    38,    38,
      52,    37,     0,     3,    10,    11,    12,    13,    14,    27,
      38,    45,    48,    53,    55,    57,    58,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    17,    27,    55,    17,
      19,    55,    27,    65,    70,    27,    53,    55,    60,    30,
      38,    70,    71,    72,    73,    25,    56,    64,    65,    71,
      17,    64,    68,    68,    17,    17,    17,    41,    42,    43,
      31,    32,    44,    45,    46,    47,    15,    33,    34,    35,
      36,    49,    50,    39,    39,    17,    73,    71,    28,    39,
      29,    38,    39,    65,    65,    65,    66,    66,    67,    67,
      68,    68,    52,    65,    65,    65,    65,    65,    65,    15,
      21,    71,    39,    72,    15,    73,    71,    16,    52,    40,
      17,    52,    39,    16,    38,    59,    55,    16,    17,    69,
      23,    38,    39,    39,    15,    69,    15,    15,    52,    39,
      52,    52,    16,    15,    16,    16,    22,    52,    16
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    55,    56,
      56,    57,    57,    58,    59,    59,    60,    60,    61,    62,
      63,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    69,    69,
      69,    69,    69,    69,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     7,     5,    12,     7,     6,     1,     1,    11,     7,
       7,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     1,     3,     1,     3,     2,     1
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 88 "calc.y" /* yacc.c:1646  */
    {printf("Matched assignment\n");}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 89 "calc.y" /* yacc.c:1646  */
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 90 "calc.y" /* yacc.c:1646  */
    {printf("Matched Declarations\n");}
#line 1524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 91 "calc.y" /* yacc.c:1646  */
    {printf("Matched Declarations\n");}
#line 1530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 92 "calc.y" /* yacc.c:1646  */
    {printf("Matched assignment\n");;}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 93 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: for\n");}
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 94 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: for\n");;}
#line 1548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 95 "calc.y" /* yacc.c:1646  */
    {printf("Matched flow control: if\n");;}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 96 "calc.y" /* yacc.c:1646  */
    {printf("Matched flow control: if\n");}
#line 1560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "calc.y" /* yacc.c:1646  */
    {printf("Matched flow control: switch\n");}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "calc.y" /* yacc.c:1646  */
    {printf("Matched flow control: switch\n");}
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 99 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: while\n");}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: while\n");}
#line 1584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 101 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: do-while\n");}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 102 "calc.y" /* yacc.c:1646  */
    {printf("Matched loop: do-while\n");}
#line 1596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 103 "calc.y" /* yacc.c:1646  */
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 104 "calc.y" /* yacc.c:1646  */
    {printf("Matched Empty statement\n");}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 105 "calc.y" /* yacc.c:1646  */
    {printf("Matched Expression Statement\n");}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 109 "calc.y" /* yacc.c:1646  */
    {;}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 110 "calc.y" /* yacc.c:1646  */
    {;}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 111 "calc.y" /* yacc.c:1646  */
    {;}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 114 "calc.y" /* yacc.c:1646  */
    {;}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "calc.y" /* yacc.c:1646  */
    {;}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 116 "calc.y" /* yacc.c:1646  */
    {;}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 117 "calc.y" /* yacc.c:1646  */
    {;}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "calc.y" /* yacc.c:1646  */
    {;}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 121 "calc.y" /* yacc.c:1646  */
    {;}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "calc.y" /* yacc.c:1646  */
    {;}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 125 "calc.y" /* yacc.c:1646  */
    {;}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 132 "calc.y" /* yacc.c:1646  */
    {;}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "calc.y" /* yacc.c:1646  */
    {;}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 137 "calc.y" /* yacc.c:1646  */
    {;}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 140 "calc.y" /* yacc.c:1646  */
    {;}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 143 "calc.y" /* yacc.c:1646  */
    {;}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 144 "calc.y" /* yacc.c:1646  */
    {;}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 148 "calc.y" /* yacc.c:1646  */
    {;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 152 "calc.y" /* yacc.c:1646  */
    {;}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 155 "calc.y" /* yacc.c:1646  */
    {;}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 158 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) | (yyvsp[0].NUM);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 159 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) & (yyvsp[0].NUM);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 160 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) ^ (yyvsp[0].NUM);}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 161 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 164 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 165 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) << (yyvsp[0].NUM);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 166 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) >> (yyvsp[0].NUM);}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 169 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 170 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) + (yyvsp[0].NUM);}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 171 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) - (yyvsp[0].NUM);}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 174 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) * (yyvsp[0].NUM);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-2].NUM) / (yyvsp[0].NUM);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 179 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[-1].NUM);}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 180 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = -(yyvsp[0].NUM);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 181 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = ~(yyvsp[0].NUM);}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 182 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 186 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].NUM);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 187 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].DOOBLE);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 188 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].LETTER);}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 189 "calc.y" /* yacc.c:1646  */
    {;}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 190 "calc.y" /* yacc.c:1646  */
    {(yyval.NUM) = (yyvsp[0].BOOOL);}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 191 "calc.y" /* yacc.c:1646  */
    {;}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 195 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) > (yyvsp[0].NUM);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 196 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) >= (yyvsp[0].NUM);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 197 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) < (yyvsp[0].NUM);}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 198 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) <= (yyvsp[0].NUM);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 199 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) == (yyvsp[0].NUM);}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 200 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].NUM) != (yyvsp[0].NUM);}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 203 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].BOOOL) || (yyvsp[0].BOOOL);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 204 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[0].BOOOL);}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 207 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-2].BOOOL) && (yyvsp[0].BOOOL);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 208 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[0].BOOOL);}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 211 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = (yyvsp[-1].BOOOL);}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 212 "calc.y" /* yacc.c:1646  */
    {(yyval.BOOOL) = !(yyvsp[0].BOOOL);}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1948 "y.tab.c" /* yacc.c:1646  */
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 216 "calc.y" /* yacc.c:1906  */
                     /* C code */

int computeSymbolIndex(char token)
{
	int idx = -1;
	if(islower(token)) {
		idx = token - 'a' + 26;
	} else if(isupper(token)) {
		idx = token - 'A';
	}
	return idx;
} 

/* returns the value of a given symbol */
int symbolVal(char symbol)
{
	int bucket = computeSymbolIndex(symbol);
	return symbols[bucket];
}

/* updates the value of a given symbol */
void updateSymbolVal(char symbol, int val)
{
	int bucket = computeSymbolIndex(symbol);
	symbols[bucket] = val;
}

int main (void) {
	/* init symbol table */
	int i;
	for(i=0; i<52; i++) {
		symbols[i] = 0;
	}

	return yyparse ( );
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 

