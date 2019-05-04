
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
#line 1 "calc.y"

void yyerror (char *s);
int yylex();
#include<iostream>
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <ctype.h>
#include <unordered_map>
#include <utility>
#include <typeinfo>

#include "scope.hpp"
using namespace std;
OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable);
Scope *lookUp(char *name, Scope *currentTable);
// int symbols[52];
// int symbolVal(char symbol);
// void updateSymbolVal(char symbol, int val);

Scope* mainscope=NULL;
Scope* currentcope=NULL;
string variable;
void StoreVarib(char*V);
int x;


/* Line 189 of yacc.c  */
#line 103 "y.tab.c"

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
     exit_command = 258,
     Rakam = 259,
     TOKEN_Hroof = 260,
     TOKEN_3ashry = 261,
     TOKEN_Harf = 262,
     TOKEN_Boolean = 263,
     CONSTANT_TOKEN = 264,
     TOKEN_Atba3 = 265,
     LONG_INTEGER = 266,
     DOUBE_FLOATING_POINT = 267,
     STRING_VALUE = 268,
     CHARACTER_VALUE = 269,
     TrueFalse = 270,
     SCOPE_START_TOKEN = 271,
     SCOPE_END_TOKEN = 272,
     STATEMENT_TERMINATOR_TOKEN = 273,
     IF_STATEMENT_TOKEN = 274,
     ELSE_STATEMENT_TOKEN = 275,
     SWITCH_CASE_BEGINNING_TOKEN = 276,
     SWITCH_CASE_START_CASES_TOKEN = 277,
     SWITCH_CASE_END_CASES_TOKEN = 278,
     SWITCH_DEFAULT_CASE_BEGINNING_TOKEN = 279,
     FOR_LOOP_STATMENT_TOKEN = 280,
     WHILE_LOOP_STATEMENT_TOKEN = 281,
     DO_STATEMENT_TOKEN = 282,
     IDENTIFIER_TOKEN = 283,
     OR = 284,
     AND = 285,
     NOT = 286,
     EQUAL_SIGN = 287,
     EXP_NOT = 288,
     SHIFT_LEFT = 289,
     SHIFT_RIGHT = 290,
     GREATER_THAN_EQUAL = 291,
     LESS_THAN_EQUAL = 292,
     EQUAL_EQUAL = 293,
     NOT_EQUAL = 294
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
#define TOKEN_Atba3 265
#define LONG_INTEGER 266
#define DOUBE_FLOATING_POINT 267
#define STRING_VALUE 268
#define CHARACTER_VALUE 269
#define TrueFalse 270
#define SCOPE_START_TOKEN 271
#define SCOPE_END_TOKEN 272
#define STATEMENT_TERMINATOR_TOKEN 273
#define IF_STATEMENT_TOKEN 274
#define ELSE_STATEMENT_TOKEN 275
#define SWITCH_CASE_BEGINNING_TOKEN 276
#define SWITCH_CASE_START_CASES_TOKEN 277
#define SWITCH_CASE_END_CASES_TOKEN 278
#define SWITCH_DEFAULT_CASE_BEGINNING_TOKEN 279
#define FOR_LOOP_STATMENT_TOKEN 280
#define WHILE_LOOP_STATEMENT_TOKEN 281
#define DO_STATEMENT_TOKEN 282
#define IDENTIFIER_TOKEN 283
#define OR 284
#define AND 285
#define NOT 286
#define EQUAL_SIGN 287
#define EXP_NOT 288
#define SHIFT_LEFT 289
#define SHIFT_RIGHT 290
#define GREATER_THAN_EQUAL 291
#define LESS_THAN_EQUAL 292
#define EQUAL_EQUAL 293
#define NOT_EQUAL 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 30 "calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 214 of yacc.c  */
#line 227 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 239 "y.tab.c"

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
#define YYLAST   794

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  103
/* YYNRULES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
      40,    41,    48,    46,     2,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,     2,
      51,     2,    50,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    45,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    43,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    20,    23,    25,
      28,    30,    33,    35,    38,    40,    43,    45,    49,    51,
      55,    59,    62,    65,    68,    72,    74,    76,    78,    80,
      82,    84,    88,    92,    96,   100,   102,   103,   112,   113,
     120,   121,   133,   134,   143,   144,   152,   154,   156,   157,
     170,   171,   180,   181,   190,   194,   198,   202,   204,   206,
     210,   214,   216,   220,   224,   228,   232,   234,   238,   242,
     244,   248,   252,   254,   258,   261,   264,   266,   270,   272,
     275,   277,   279,   281,   283,   285,   289,   293,   297,   301,
     305,   309,   313,   317,   321,   325,   329,   333,   337,   339,
     343,   345,   349,   352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    57,    18,    -1,     3,    18,    -1,    54,
      18,    -1,    53,    54,    18,    -1,    53,    57,    18,    -1,
      53,    68,    -1,    68,    -1,    53,    59,    -1,    59,    -1,
      53,    62,    -1,    62,    -1,    53,    70,    -1,    70,    -1,
      53,    72,    -1,    72,    -1,    53,     3,    18,    -1,    18,
      -1,    53,    74,    18,    -1,    53,    77,    18,    -1,    77,
      18,    -1,    55,    56,    -1,    55,    57,    -1,     9,    55,
      57,    -1,     4,    -1,     6,    -1,     8,    -1,     7,    -1,
       5,    -1,    28,    -1,    56,    32,    74,    -1,    56,    32,
      77,    -1,    56,    32,    85,    -1,    56,    32,    58,    -1,
      13,    -1,    -1,    19,    40,    84,    41,    16,    60,    53,
      17,    -1,    -1,    59,    20,    16,    61,    53,    17,    -1,
      -1,    21,    40,    28,    41,    22,    42,    64,    24,    63,
      53,    23,    -1,    -1,    64,    40,    82,    41,    16,    65,
      53,    17,    -1,    -1,    40,    82,    41,    16,    66,    53,
      17,    -1,    57,    -1,    54,    -1,    -1,    25,    40,    67,
      18,    85,    18,    57,    41,    16,    69,    53,    17,    -1,
      -1,    26,    40,    85,    41,    16,    71,    53,    17,    -1,
      -1,    27,    73,    53,    26,    40,    85,    41,    18,    -1,
      74,    43,    75,    -1,    74,    44,    75,    -1,    74,    45,
      75,    -1,    75,    -1,    76,    -1,    75,    34,    76,    -1,
      75,    35,    76,    -1,    78,    -1,    76,    46,    78,    -1,
      76,    47,    78,    -1,    77,    46,    79,    -1,    77,    47,
      79,    -1,    79,    -1,    78,    48,    80,    -1,    78,    49,
      80,    -1,    80,    -1,    79,    48,    81,    -1,    79,    49,
      81,    -1,    81,    -1,    40,    74,    41,    -1,    47,    80,
      -1,    33,    80,    -1,    82,    -1,    40,    77,    41,    -1,
      83,    -1,    47,    81,    -1,    11,    -1,    14,    -1,    15,
      -1,    28,    -1,    12,    -1,    75,    50,    75,    -1,    75,
      36,    75,    -1,    75,    51,    75,    -1,    75,    37,    75,
      -1,    75,    38,    75,    -1,    75,    39,    75,    -1,    77,
      50,    77,    -1,    77,    36,    77,    -1,    77,    51,    77,
      -1,    77,    37,    77,    -1,    77,    38,    77,    -1,    77,
      39,    77,    -1,    85,    29,    86,    -1,    86,    -1,    86,
      30,    87,    -1,    87,    -1,    40,    85,    41,    -1,    31,
      87,    -1,    84,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   113,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   136,   137,   138,   141,   142,   143,   144,   145,
     147,   149,   150,   155,   156,   165,   177,   177,   178,   178,
     182,   182,   185,   185,   185,   185,   188,   189,   193,   193,
     197,   197,   199,   199,   202,   203,   204,   205,   208,   209,
     210,   217,   218,   219,   222,   223,   224,   227,   228,   229,
     232,   233,   234,   237,   238,   239,   240,   243,   244,   245,
     248,   249,   250,   251,   259,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   278,   279,   282,
     283,   286,   287,   288
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "exit_command", "Rakam", "TOKEN_Hroof",
  "TOKEN_3ashry", "TOKEN_Harf", "TOKEN_Boolean", "CONSTANT_TOKEN",
  "TOKEN_Atba3", "LONG_INTEGER", "DOUBE_FLOATING_POINT", "STRING_VALUE",
  "CHARACTER_VALUE", "TrueFalse", "SCOPE_START_TOKEN", "SCOPE_END_TOKEN",
  "STATEMENT_TERMINATOR_TOKEN", "IF_STATEMENT_TOKEN",
  "ELSE_STATEMENT_TOKEN", "SWITCH_CASE_BEGINNING_TOKEN",
  "SWITCH_CASE_START_CASES_TOKEN", "SWITCH_CASE_END_CASES_TOKEN",
  "SWITCH_DEFAULT_CASE_BEGINNING_TOKEN", "FOR_LOOP_STATMENT_TOKEN",
  "WHILE_LOOP_STATEMENT_TOKEN", "DO_STATEMENT_TOKEN", "IDENTIFIER_TOKEN",
  "OR", "AND", "NOT", "EQUAL_SIGN", "EXP_NOT", "SHIFT_LEFT", "SHIFT_RIGHT",
  "GREATER_THAN_EQUAL", "LESS_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "'('", "')'", "':'", "'|'", "'&'", "'^'", "'+'", "'-'", "'*'", "'/'",
  "'>'", "'<'", "$accept", "line", "declaration", "data_type", "TEST_ID",
  "assignment", "string_value_assignment", "if_statement", "$@1", "$@2",
  "switch_statement", "$@3", "case_statement", "$@4", "$@5",
  "for_iterator", "for_statement", "$@6", "while_statement", "$@7",
  "repeat_statement", "$@8", "expbitwise", "exp", "expAddSubtract",
  "double_value_expAddSubtract", "component", "double_value_component",
  "factor", "double_value_factor", "term", "double_value_term", "Bexp",
  "Bexp1", "Bexpand", "Bexpbracket", 0
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
      40,    41,    58,   124,    38,    94,    43,    45,    42,    47,
      62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    54,    54,    54,    55,    55,    55,    55,    55,
      56,    57,    57,    57,    57,    58,    60,    59,    61,    59,
      63,    62,    65,    64,    66,    64,    67,    67,    69,    68,
      71,    70,    73,    72,    74,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    77,    77,    77,    78,    78,    78,
      79,    79,    79,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    82,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    85,    85,    86,
      86,    87,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       3,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     0,     8,     0,     6,
       0,    11,     0,     8,     0,     7,     1,     1,     0,    12,
       0,     8,     0,     8,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     2,     2,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    25,    29,    26,    28,    27,     0,    84,    18,
       0,     0,     0,     0,    52,    30,     0,     0,     0,     0,
       0,     0,     0,    10,    12,     8,    14,    16,     0,    66,
      72,    78,     3,     0,     0,     0,     0,     0,     0,     0,
      79,     1,     0,    80,    81,    82,    83,     0,     0,     0,
       0,     0,     9,    11,     7,    13,    15,     0,    57,    58,
       0,    61,    69,    76,     4,    22,    23,     0,     2,     0,
      21,     0,     0,     0,     0,    24,    83,     0,     0,     0,
       0,    47,    46,     0,     0,     0,   103,     0,    98,   100,
       0,    77,    17,     0,     0,    75,     0,    74,     5,     6,
      19,     0,     0,     0,     0,     0,     0,     0,    20,     0,
       0,    35,    34,    31,    57,    32,    33,    38,    64,    65,
      70,    71,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,     0,     0,     0,    73,    54,    55,    56,    59,    60,
      62,    63,    67,    68,     0,    86,    88,    89,    90,    85,
      87,    92,    94,    95,    96,    91,    93,    36,     0,     0,
     101,    97,    50,    99,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,    37,     0,
      40,     0,     0,    51,    53,     0,     0,     0,    48,    44,
       0,     0,     0,     0,    41,    42,     0,     0,     0,    49,
      45,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,   112,    23,   176,   154,
      24,   196,   184,   208,   203,    83,    25,   202,    26,   179,
      27,    38,    57,    58,    59,    28,    61,    29,    62,    30,
      63,    31,    86,    87,    88,    89
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -158
static const yytype_int16 yypact[] =
{
     699,    52,  -158,  -158,  -158,  -158,  -158,   131,  -158,  -158,
      47,    58,    61,    63,  -158,  -158,     3,     3,   339,    72,
      53,    75,    78,    90,  -158,  -158,  -158,  -158,    -8,     6,
    -158,  -158,  -158,    53,    94,    95,   147,   738,   699,    36,
    -158,  -158,   110,  -158,  -158,  -158,    98,    64,    94,    94,
     122,   128,    90,  -158,  -158,  -158,  -158,    28,     1,    20,
      -5,    51,  -158,  -158,  -158,    75,  -158,   701,  -158,   132,
    -158,     3,     3,     3,     3,  -158,  -158,   277,   743,   108,
     116,  -158,  -158,   142,   738,   738,  -158,   -13,   135,  -158,
     654,  -158,  -158,    64,    64,  -158,    50,  -158,  -158,  -158,
    -158,    64,    64,    64,    64,    64,    64,    64,  -158,    64,
      64,  -158,  -158,   -20,   277,   743,   148,  -158,     6,     6,
    -158,  -158,    64,    64,    64,    64,    64,    64,     3,     3,
       3,     3,     3,     3,   165,   161,   738,  -158,   726,    11,
     738,   169,   738,   149,  -158,     1,     1,     1,    20,    20,
      51,    51,  -158,  -158,   699,     1,     1,     1,     1,     1,
       1,    86,    86,    86,    86,    86,    86,  -158,   145,     2,
    -158,   135,  -158,  -158,   738,   384,   699,   158,    53,   699,
      15,  -158,   429,    74,    -7,   167,   474,    42,  -158,   168,
    -158,    74,   172,  -158,  -158,   183,   699,   171,  -158,  -158,
     263,   194,   699,   699,  -158,  -158,   519,   564,   699,  -158,
    -158,   609,  -158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,   -29,    -6,   211,   199,   -14,  -158,    -4,  -158,  -158,
      29,  -158,  -158,  -158,  -158,  -158,    31,  -158,    39,  -158,
      41,  -158,   -40,   196,    38,   -16,    56,    73,   -46,   -12,
    -157,  -158,   186,   -56,    82,   -77
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -31
static const yytype_int16 yytable[] =
{
      39,    95,    60,    97,    51,    40,    66,   137,    96,    90,
      70,   116,    50,   108,    52,     8,   140,   190,    78,    75,
     178,    78,    82,   101,   102,   103,   189,   113,   141,   139,
      81,   140,    39,   191,   197,   104,   105,    40,    71,    72,
     140,    71,    72,    16,   140,    96,   100,    53,    97,    54,
      17,   115,   170,    96,    73,    74,   187,    55,   172,    56,
     194,   120,   121,   152,   153,   173,   106,   107,    78,   138,
      32,   101,   102,   103,    60,    43,    51,    91,    44,    45,
     169,    15,    71,    72,    50,    43,    52,    34,    44,    45,
      64,   144,    76,   101,   102,   103,    68,    47,    35,   109,
     110,    36,    76,    37,    93,    43,     8,    67,    44,    45,
      69,    94,   161,   162,   163,   164,   165,   166,   180,    53,
      78,    54,    76,    80,    78,   175,    78,    47,    92,    55,
     -30,    56,    71,    72,    48,     2,     3,     4,     5,     6,
      98,    49,   148,   149,   118,   119,    99,   182,   117,   134,
     186,     2,     3,     4,     5,     6,     7,   135,    78,    60,
     136,    51,   150,   151,   185,   142,    60,   200,    51,    50,
      60,    52,    51,   206,   207,    15,    50,   140,    52,   211,
      50,   167,    52,   168,    60,   172,    51,   177,   198,   174,
      60,    60,    51,    51,    50,    60,    52,    51,   183,   199,
      50,    50,    52,    52,    53,    50,    54,    52,   192,   195,
     205,    53,   201,    54,    55,    53,    56,    54,    33,    65,
      79,    55,   171,    56,     0,    55,     0,    56,     0,    53,
      77,    54,     0,    77,     0,    53,    53,    54,    54,    55,
      53,    56,    54,     0,     0,    55,    55,    56,    56,     0,
      55,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   114,     0,     0,    42,     2,     3,     4,
       5,     6,     7,     0,    43,     8,     0,    44,    45,     0,
      77,   114,    10,     0,    11,     0,   204,     0,    12,    13,
      14,    46,     0,     0,     0,     0,    47,   145,   146,   147,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
      49,   104,   105,   122,   123,   124,   125,     0,   155,   156,
     157,   158,   159,   160,     0,     0,     0,   126,   127,     0,
       0,     0,    77,     0,     0,     0,    77,     0,    77,    41,
       0,     0,    42,     2,     3,     4,     5,     6,     7,     0,
      43,     8,     0,    44,    45,     0,     0,     0,    10,     0,
      11,     0,     0,     0,    12,    13,    14,    46,     0,     0,
      77,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    42,     2,     3,
       4,     5,     6,     7,     0,    43,     8,     0,    44,    45,
       0,   181,     0,    10,     0,    11,     0,     0,     0,    12,
      13,    14,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,    49,    42,     2,     3,     4,     5,     6,     7,     0,
      43,     8,     0,    44,    45,     0,   188,     0,    10,     0,
      11,     0,     0,     0,    12,    13,    14,    46,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    42,     2,     3,
       4,     5,     6,     7,     0,    43,     8,     0,    44,    45,
       0,   193,     0,    10,     0,    11,     0,     0,     0,    12,
      13,    14,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,    49,    42,     2,     3,     4,     5,     6,     7,     0,
      43,     8,     0,    44,    45,     0,   209,     0,    10,     0,
      11,     0,     0,     0,    12,    13,    14,    46,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    42,     2,     3,
       4,     5,     6,     7,     0,    43,     8,     0,    44,    45,
       0,   210,     0,    10,     0,    11,     0,     0,     0,    12,
      13,    14,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,    49,    42,     2,     3,     4,     5,     6,     7,     0,
      43,     8,     0,    44,    45,     0,   212,     0,    10,     0,
      11,     0,     0,     0,    12,    13,    14,    46,     0,     0,
       0,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,    49,    42,     2,     3,
       4,     5,     6,     7,     0,    43,     8,     0,    44,    45,
       0,     0,     0,    10,     0,    11,     0,     0,     0,    12,
     143,    14,    46,     0,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
       0,    49,     1,     2,     3,     4,     5,     6,     7,     0,
       0,     8,    43,     8,   111,    44,    45,     9,    10,     0,
      11,     0,     0,     0,    12,    13,    14,    15,     0,    76,
       0,     0,    84,     0,    47,     0,     0,     0,     0,    16,
       0,    85,     0,     0,     0,     0,    17,     0,    49,    43,
       8,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,    76,    91,     0,    84,
       0,    47,    71,    72,     0,     0,   132,   133,    85,   128,
     129,   130,   131,     0,     0,    49,     0,     0,     0,    71,
      72,     0,     0,   132,   133
};

static const yytype_int16 yycheck[] =
{
      16,    47,    18,    49,    18,    17,    20,    84,    48,    38,
      18,    67,    18,    18,    18,    12,    29,    24,    34,    33,
      18,    37,    36,    43,    44,    45,   183,    67,    41,    85,
      36,    29,    48,    40,   191,    34,    35,    49,    46,    47,
      29,    46,    47,    40,    29,    85,    18,    18,    94,    18,
      47,    67,    41,    93,    48,    49,    41,    18,    16,    18,
      18,    73,    74,   109,   110,   142,    46,    47,    84,    85,
      18,    43,    44,    45,    90,    11,    90,    41,    14,    15,
     136,    28,    46,    47,    90,    11,    90,    40,    14,    15,
      18,    41,    28,    43,    44,    45,    18,    33,    40,    48,
      49,    40,    28,    40,    40,    11,    12,    32,    14,    15,
      20,    47,   128,   129,   130,   131,   132,   133,   174,    90,
     136,    90,    28,    28,   140,   154,   142,    33,    18,    90,
      32,    90,    46,    47,    40,     4,     5,     6,     7,     8,
      18,    47,   104,   105,    71,    72,    18,   176,    16,    41,
     179,     4,     5,     6,     7,     8,     9,    41,   174,   175,
      18,   175,   106,   107,   178,    30,   182,   196,   182,   175,
     186,   175,   186,   202,   203,    28,   182,    29,   182,   208,
     186,    16,   186,    22,   200,    16,   200,    42,    16,    40,
     206,   207,   206,   207,   200,   211,   200,   211,    40,    16,
     206,   207,   206,   207,   175,   211,   175,   211,    41,    41,
      16,   182,    41,   182,   175,   186,   175,   186,     7,    20,
      34,   182,   140,   182,    -1,   186,    -1,   186,    -1,   200,
      34,   200,    -1,    37,    -1,   206,   207,   206,   207,   200,
     211,   200,   211,    -1,    -1,   206,   207,   206,   207,    -1,
     211,    -1,   211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    14,    15,    -1,
      84,    85,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    -1,    33,   101,   102,   103,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    34,    35,    36,    37,    38,    39,    -1,   122,   123,
     124,   125,   126,   127,    -1,    -1,    -1,    50,    51,    -1,
      -1,    -1,   136,    -1,    -1,    -1,   140,    -1,   142,     0,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    -1,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
     174,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    11,    12,    13,    14,    15,    18,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,    -1,    28,
      -1,    -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    40,
      -1,    40,    -1,    -1,    -1,    -1,    47,    -1,    47,    11,
      12,    -1,    14,    15,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    39,    28,    41,    -1,    31,
      -1,    33,    46,    47,    -1,    -1,    50,    51,    40,    36,
      37,    38,    39,    -1,    -1,    47,    -1,    -1,    -1,    46,
      47,    -1,    -1,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    12,    18,
      19,    21,    25,    26,    27,    28,    40,    47,    53,    54,
      55,    56,    57,    59,    62,    68,    70,    72,    77,    79,
      81,    83,    18,    55,    40,    40,    40,    40,    73,    77,
      81,     0,     3,    11,    14,    15,    28,    33,    40,    47,
      54,    57,    59,    62,    68,    70,    72,    74,    75,    76,
      77,    78,    80,    82,    18,    56,    57,    32,    18,    20,
      18,    46,    47,    48,    49,    57,    28,    75,    77,    84,
      28,    54,    57,    67,    31,    40,    84,    85,    86,    87,
      53,    41,    18,    40,    47,    80,    74,    80,    18,    18,
      18,    43,    44,    45,    34,    35,    46,    47,    18,    48,
      49,    13,    58,    74,    75,    77,    85,    16,    79,    79,
      81,    81,    36,    37,    38,    39,    50,    51,    36,    37,
      38,    39,    50,    51,    41,    41,    18,    87,    77,    85,
      29,    41,    30,    26,    41,    75,    75,    75,    76,    76,
      78,    78,    80,    80,    61,    75,    75,    75,    75,    75,
      75,    77,    77,    77,    77,    77,    77,    16,    22,    85,
      41,    86,    16,    87,    40,    53,    60,    42,    18,    71,
      85,    17,    53,    40,    64,    57,    53,    41,    17,    82,
      24,    40,    41,    17,    18,    41,    63,    82,    16,    16,
      53,    41,    69,    66,    23,    16,    53,    53,    65,    17,
      17,    53,    17
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
        case 2:

/* Line 1455 of yacc.c  */
#line 113 "calc.y"
    {printf("Matched assignment\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 114 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 115 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 116 "calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 117 "calc.y"
    {printf("Matched assignment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 118 "calc.y"
    {printf("Matched loop: for\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 119 "calc.y"
    {printf("Matched loop: for\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 120 "calc.y"
    {printf("Matched flow control: if\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 121 "calc.y"
    {printf("Matched flow control: if\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 122 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 123 "calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 124 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 125 "calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 126 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 127 "calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 128 "calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 129 "calc.y"
    {printf("Matched Empty statement\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 130 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 131 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 132 "calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 136 "calc.y"
    { printf("ya rab %s\n", (yyvsp[(2) - (2)].VARIABLE));}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 137 "calc.y"
    { variable=(yyvsp[(2) - (2)].VARIABLE);printf("VARIABLE_TRYY = %s\n", variable);cout<<"VARIABLE_COUT_TRYYY = "<<variable<<endl;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 138 "calc.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 141 "calc.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 142 "calc.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 143 "calc.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 144 "calc.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 145 "calc.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 147 "calc.y"
    {(yyval.VARIABLE)=(yyvsp[(1) - (1)].VARIABLE); variable=(yyval.VARIABLE);printf("VARIABLE = %s\n", variable);cout<<"VARIABLE_COUT = "<<variable<<endl;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 149 "calc.y"
    { ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 150 "calc.y"
    { Values val;
				val.Number = (yyvsp[(3) - (3)].DOOBLE);
				
				insert(DOUBLE,(yyvsp[(1) - (3)].VARIABLE),false,val, currentcope); printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].DOOBLE)).name()[0]);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 155 "calc.y"
    { printf("ya rab %c\n", typeid((yyvsp[(3) - (3)].BOOOL)).name()[0]);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 156 "calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 165 "calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 177 "calc.y"
    {x=1;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 177 "calc.y"
    {x=0;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 178 "calc.y"
    {x=1;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 178 "calc.y"
    {x=0;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 182 "calc.y"
    {x=1;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 182 "calc.y"
    {x=0;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 185 "calc.y"
    {x=1;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 185 "calc.y"
    {x=0;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 185 "calc.y"
    {x=1;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 185 "calc.y"
    {x=0;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 188 "calc.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 189 "calc.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 193 "calc.y"
    {x=1;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 193 "calc.y"
    {x=0;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 197 "calc.y"
    {x=1;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 197 "calc.y"
    {x=0;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 199 "calc.y"
    {x=1;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 199 "calc.y"
    {x=0;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 202 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) | (yyvsp[(3) - (3)].NUM);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 203 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) & (yyvsp[(3) - (3)].NUM);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 204 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) ^ (yyvsp[(3) - (3)].NUM);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 205 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 208 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 209 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) << (yyvsp[(3) - (3)].NUM);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 210 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) >> (yyvsp[(3) - (3)].NUM);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 217 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 218 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) + (yyvsp[(3) - (3)].NUM);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 219 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) - (yyvsp[(3) - (3)].NUM);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 222 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) + (yyvsp[(3) - (3)].DOOBLE); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 223 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) - (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 224 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 227 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) * (yyvsp[(3) - (3)].NUM);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 228 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (3)].NUM) / (yyvsp[(3) - (3)].NUM);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 229 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 232 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) * (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 233 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (3)].DOOBLE) / (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 234 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 237 "calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 238 "calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 239 "calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 240 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 243 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(2) - (3)].DOOBLE);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 244 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 245 "calc.y"
    {(yyval.DOOBLE) = -(yyvsp[(2) - (2)].DOOBLE);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 248 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); printf("i matched integer %d\n",(yyvsp[(1) - (1)].NUM));}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 249 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER); printf("i matched TTT %d\n",(yyvsp[(1) - (1)].LETTER));}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 250 "calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 251 "calc.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 259 "calc.y"
    {(yyval.DOOBLE) = (yyvsp[(1) - (1)].DOOBLE); printf("i matched double %f\n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 264 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) > (yyvsp[(3) - (3)].NUM);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 265 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) >= (yyvsp[(3) - (3)].NUM);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 266 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) < (yyvsp[(3) - (3)].NUM);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 267 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) <= (yyvsp[(3) - (3)].NUM);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 268 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) == (yyvsp[(3) - (3)].NUM);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 269 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].NUM) != (yyvsp[(3) - (3)].NUM);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 270 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) > (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 271 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) >= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 272 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) < (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 273 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) <= (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 274 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) == (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 275 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].DOOBLE) != (yyvsp[(3) - (3)].DOOBLE);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 278 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) || (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 279 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 282 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (3)].BOOOL) && (yyvsp[(3) - (3)].BOOOL);}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 283 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 286 "calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 287 "calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);}
    break;



/* Line 1455 of yacc.c  */
#line 2458 "y.tab.c"
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
#line 291 "calc.y"
                     /* C code */

void StoreVarib(char*V){
	variable = V;
}
// int computeSymbolIndex(char token)
// {
// 	int idx = -1;
// 	if(islower(token)) {
// 		idx = token - 'a' + 26;
// 	} else if(isupper(token)) {
// 		idx = token - 'A';
// 	}
// 	return idx;
// } 

// /* returns the value of a given symbol */
// int symbolVal(char symbol)
// {
// 	int bucket = computeSymbolIndex(symbol);
// 	return symbols[bucket];
// }

// /* updates the value of a given symbol */
// void updateSymbolVal(char symbol, int val)
// {
// 	int bucket = computeSymbolIndex(symbol);
// 	symbols[bucket] = val;
// }

OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable)
{

    // first check for duplication
    unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name);

    if (itr == currentTable->currentLockup.end())
    {
        
            Symbol*s = new Symbol();
            s->type = type;
            s->isConst = isConstant;
            s->value = value;
			pair <char*,Symbol> newP;
			cout<<"HI";
			newP=make_pair(name,*s);
			currentTable->currentLockup.insert(newP);
            //currentTable->currentLockup[name]=move(s);

			Scope *Dum =  lookUp(name, currentTable);
			itr = currentTable->currentLockup.find(name);
			cout<<"HI inserted ... "<<name<<endl;
			cout<<"name:"<<name<<"value:"<<itr->second.value.Number<<endl;
			cout<<"DONE... "<<endl;
            return SUCCESSFUL_INSERTION;
        
    }
	//TEST ONLY
	
	cout<<"FAILED"<<endl;
    return DUPLICATE_INSERTION;
}

Scope *lookUp(char *name, Scope *currentTable)
{

    // base case: not found in alllllll scopes: 2o7a
    if (currentTable == NULL)
        return NULL;

    if (currentTable->currentLockup.find(name) == currentTable->currentLockup.end())
    {
        return lookUp(name, currentTable->above);
    }
    return currentTable;
}

OPERATION_RETURN update(char *name, int newType, Values value, Scope *currentTable)
{

    Scope *currTable = lookUp(name, currentTable);

    if (currTable != NULL)
    {
        unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name); //madaam mesh b null yeb2a wesh la2ah
        // check semantics errors:
        if (itr->second.isConst)
        {
            return SEMANTIC_ERROR_ATTEMPT_CHANGING_CONSTANT;
        }
        if (newType == itr->second.type)
        {
            itr->second.value = value;
            return SUCCESSFUL_UPDATE;
        }
        return SEMANTIC_ERROR_TYPE_INCOMPATIBLE;
    }
    return SYMBOL_NOT_FOUND;
}

Scope *createMainScope()
{
    Scope *mainScope = new Scope();
    mainScope->above = NULL;
    return mainScope;
}



int main (void) {
	
	mainscope=createMainScope();
	currentcope=mainscope;

	cout<<currentcope;
	return yyparse ( );
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 

