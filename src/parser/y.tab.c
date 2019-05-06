
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
#line 1 ".\\calc.y"

void yyerror (char *s);
int yylex();
#include<iostream>
#include<fstream>
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
int x=0,label_num=0,label[20],ltop=0,top=0;
string st1[100];
string temp_count="0";
string flag_count="0";
string temp="t";
string flag="f";
string switchVar="";
int valueNumber=0;
int type=0,L1=0,L2=0;
void store()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << "Store" << " ( "<<variable<<" , "<<st1[top]<<" )"<< "\n";
	myfile.close();
}
void codegen()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top-1] << " ( "<<temp<<temp_count<<" , "<<st1[top-2]<<" , "<<st1[top]<<" )"<< "\n";
	top-=2;
	st1[top]=temp+temp_count;
	temp_count[0]++;
	myfile.close();
}

void setFlag()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top-1] << " ( "<<flag<<flag_count<<" , "<<st1[top-2]<<" , "<<st1[top]<<" )"<< "\n";
	top-=2;
	st1[top]=flag+flag_count;
	flag_count[0]++;
	myfile.close();
}

void setFlag_Not()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top] << " ( "<<flag<<flag_count<<" , "<<st1[top-1]<<" )"<< "\n";
	top-=1;
	st1[top]=flag+flag_count;
	flag_count[0]++;
	myfile.close();
}

void codegen_minus()
{
	ofstream myfile;
  	myfile.open ("Code_Generated.txt",ios::app);
    myfile << st1[top] << " ( "<<temp<<temp_count<<" , "<<st1[top-1]<<" )"<< "\n";
	top-=1;
	st1[top]=temp+temp_count;
	temp_count[0]++;
	myfile.close();
}

		void switch1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<L1<<":\n";
			myfile.close();
		}
		void switch2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<L1<<"\n";
			myfile.close();
		}
		void switchMain(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label_num<<":\n";
			myfile << "cmp("<<switchVar<<" , "<<st1[top]<<") \n";
			top--;
			label_num++;
			myfile << "JNE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}
		void switch_8ear_kda(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label_num<<":\n";
			label_num++;
			myfile.close();
		}
		void for1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			myfile << "L"<<label_num<<":\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void for2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			label_num++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void for3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<label[ltop-1]<<"\n";
			myfile << "L"<<label[ltop--]<<":\n";
			ltop--;
			myfile.close();
		}

		void while1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			myfile << "L"<<label_num<<":\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void while2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			label_num++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void while3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "JMP L"<<label[ltop-1]<<"\n";
			myfile << "L"<<label[ltop--]<<":\n";
			ltop--;
			myfile.close();
		}

		void if1(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			myfile << "JE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void if2(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			myfile << "L"<<label[ltop--]<<":\n";
			myfile.close();
		}
		void if3(){
			ofstream myfile;
  			myfile.open ("Code_Generated.txt",ios::app);
			label_num++;
			flag_count[0]--;
			myfile << "cmp(f"<<flag_count<<",0) \n";
			flag_count[0]++;
			myfile << "JNE L"<<label_num<<"\n";
			label[++ltop]=label_num;
			myfile.close();
		}

		void if4(){
			printf("L%d: \n",label[ltop--]);
		}



/* Line 189 of yacc.c  */
#line 287 "y.tab.c"

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
     WHILE_LOOP_STATEMENT_TOKEN_TEST = 283,
     IDENTIFIER_TOKEN = 284,
     OR = 285,
     AND = 286,
     NOT = 287,
     EQUAL_SIGN = 288,
     EXP_NOT = 289,
     SHIFT_LEFT = 290,
     SHIFT_RIGHT = 291,
     GREATER_THAN_EQUAL = 292,
     LESS_THAN_EQUAL = 293,
     EQUAL_EQUAL = 294,
     NOT_EQUAL = 295
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
#define WHILE_LOOP_STATEMENT_TOKEN_TEST 283
#define IDENTIFIER_TOKEN 284
#define OR 285
#define AND 286
#define NOT 287
#define EQUAL_SIGN 288
#define EXP_NOT 289
#define SHIFT_LEFT 290
#define SHIFT_RIGHT 291
#define GREATER_THAN_EQUAL 292
#define LESS_THAN_EQUAL 293
#define EQUAL_EQUAL 294
#define NOT_EQUAL 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 214 ".\\calc.y"

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;



/* Line 214 of yacc.c  */
#line 413 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 425 "y.tab.c"

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
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNRULES -- Number of states.  */
#define YYNSTATES  204

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,     2,
      41,    42,    48,    46,     2,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    20,    23,    25,
      28,    30,    33,    35,    38,    40,    43,    45,    49,    51,
      55,    58,    61,    65,    67,    69,    71,    73,    75,    77,
      81,    85,    89,    91,    92,    93,   103,   104,   105,   113,
     114,   115,   116,   129,   130,   131,   132,   133,   145,   146,
     147,   148,   149,   160,   162,   164,   165,   166,   180,   181,
     182,   192,   193,   202,   203,   208,   209,   214,   215,   220,
     222,   224,   225,   230,   231,   236,   238,   239,   244,   245,
     250,   251,   256,   257,   262,   264,   268,   271,   274,   276,
     278,   280,   282,   284,   286,   287,   292,   293,   298,   299,
     304,   305,   310,   311,   316,   317,   322,   323,   328,   330,
     331,   336,   338,   342,   345
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    57,    18,    -1,     3,    18,    -1,    54,
      18,    -1,    53,    54,    18,    -1,    53,    57,    18,    -1,
      53,    78,    -1,    78,    -1,    53,    59,    -1,    59,    -1,
      53,    64,    -1,    64,    -1,    53,    81,    -1,    81,    -1,
      53,    84,    -1,    84,    -1,    53,     3,    18,    -1,    18,
      -1,    53,    86,    18,    -1,    55,    56,    -1,    55,    57,
      -1,     9,    55,    57,    -1,     4,    -1,     6,    -1,     8,
      -1,     7,    -1,     5,    -1,    29,    -1,    56,    33,    86,
      -1,    56,    33,   108,    -1,    56,    33,    58,    -1,    13,
      -1,    -1,    -1,    19,    41,   108,    42,    16,    60,    53,
      17,    61,    -1,    -1,    -1,    59,    20,    62,    16,    53,
      17,    63,    -1,    -1,    -1,    -1,    21,    65,    41,    29,
      66,    42,    22,    68,    24,    67,    53,    23,    -1,    -1,
      -1,    -1,    -1,    68,    41,   100,    69,    42,    70,    16,
      71,    53,    72,    17,    -1,    -1,    -1,    -1,    -1,    41,
     100,    73,    42,    74,    16,    75,    53,    76,    17,    -1,
      57,    -1,    54,    -1,    -1,    -1,    25,    41,    77,    18,
      79,   108,    18,    57,    42,    16,    80,    53,    17,    -1,
      -1,    -1,    26,    82,    41,   108,    42,    16,    83,    53,
      17,    -1,    -1,    85,    27,    53,    28,    41,   108,    42,
      18,    -1,    -1,    86,    43,    87,    90,    -1,    -1,    86,
      44,    88,    90,    -1,    -1,    86,    45,    89,    90,    -1,
      90,    -1,    93,    -1,    -1,    90,    35,    91,    93,    -1,
      -1,    90,    36,    92,    93,    -1,    96,    -1,    -1,    93,
      46,    94,    96,    -1,    -1,    93,    47,    95,    96,    -1,
      -1,    96,    48,    97,    99,    -1,    -1,    96,    49,    98,
      99,    -1,    99,    -1,    41,    86,    42,    -1,    47,    99,
      -1,    34,    99,    -1,   100,    -1,    11,    -1,    14,    -1,
      15,    -1,    12,    -1,    29,    -1,    -1,    90,    50,   102,
      90,    -1,    -1,    90,    37,   103,    90,    -1,    -1,    90,
      51,   104,    90,    -1,    -1,    90,    38,   105,    90,    -1,
      -1,    90,    39,   106,    90,    -1,    -1,    90,    40,   107,
      90,    -1,    -1,   108,    30,   109,   110,    -1,   110,    -1,
      -1,   110,    31,   111,   112,    -1,   112,    -1,    41,   108,
      42,    -1,    32,   112,    -1,   101,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   297,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     318,   319,   329,   332,   333,   334,   335,   336,   338,   340,
     341,   342,   351,   363,   363,   363,   364,   364,   364,   368,
     369,   369,   368,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   375,   376,   380,   380,   380,   384,   384,
     384,   386,   386,   389,   389,   390,   390,   391,   391,   392,
     395,   396,   396,   397,   397,   401,   402,   402,   403,   403,
     407,   407,   408,   408,   409,   413,   414,   415,   416,   419,
     420,   421,   422,   423,   433,   433,   434,   434,   435,   435,
     436,   436,   437,   437,   438,   438,   441,   441,   442,   445,
     445,   446,   449,   450,   451
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
  "WHILE_LOOP_STATEMENT_TOKEN", "DO_STATEMENT_TOKEN",
  "WHILE_LOOP_STATEMENT_TOKEN_TEST", "IDENTIFIER_TOKEN", "OR", "AND",
  "NOT", "EQUAL_SIGN", "EXP_NOT", "SHIFT_LEFT", "SHIFT_RIGHT",
  "GREATER_THAN_EQUAL", "LESS_THAN_EQUAL", "EQUAL_EQUAL", "NOT_EQUAL",
  "'('", "')'", "'|'", "'&'", "'^'", "'+'", "'-'", "'*'", "'/'", "'>'",
  "'<'", "$accept", "line", "declaration", "data_type", "TEST_ID",
  "assignment", "string_value_assignment", "if_statement", "$@1", "$@2",
  "$@3", "$@4", "switch_statement", "$@5", "$@6", "$@7", "case_statement",
  "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "for_iterator", "for_statement", "$@16", "$@17", "while_statement",
  "$@18", "$@19", "repeat_statement", "$@20", "expbitwise", "$@21", "$@22",
  "$@23", "exp", "$@24", "$@25", "expAddSubtract", "$@26", "$@27",
  "component", "$@28", "$@29", "factor", "term", "Bexp", "$@30", "$@31",
  "$@32", "$@33", "$@34", "$@35", "Bexp1", "$@36", "Bexpand", "$@37",
  "Bexpbracket", 0
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
     295,    40,    41,   124,    38,    94,    43,    45,    42,    47,
      62,    60
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    55,    55,    55,    55,    55,    56,    57,
      57,    57,    58,    60,    61,    59,    62,    63,    59,    65,
      66,    67,    64,    69,    70,    71,    72,    68,    73,    74,
      75,    76,    68,    77,    77,    79,    80,    78,    82,    83,
      81,    85,    84,    87,    86,    88,    86,    89,    86,    86,
      90,    91,    90,    92,    90,    93,    94,    93,    95,    93,
      97,    96,    98,    96,    96,    99,    99,    99,    99,   100,
     100,   100,   100,   100,   102,   101,   103,   101,   104,   101,
     105,   101,   106,   101,   107,   101,   109,   108,   108,   111,
     110,   110,   112,   112,   112
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       2,     2,     3,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     0,     0,     9,     0,     0,     7,     0,
       0,     0,    12,     0,     0,     0,     0,    11,     0,     0,
       0,     0,    10,     1,     1,     0,     0,    13,     0,     0,
       9,     0,     8,     0,     4,     0,     4,     0,     4,     1,
       1,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       0,     4,     0,     4,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     1,     0,
       4,     1,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      61,     0,    23,    27,    24,    26,    25,     0,    18,     0,
      39,     0,    58,    28,    61,     0,     0,     0,     0,    10,
      12,     8,    14,    16,     0,     3,     0,     0,     0,     0,
       0,     1,     0,    89,    92,    90,    91,    93,     0,     0,
       0,     0,     0,     9,    11,     7,    13,    15,     0,    69,
      70,    75,    84,    88,     4,    20,    21,     0,     2,    36,
      61,    22,    93,     0,     0,     0,   114,     0,   108,   111,
       0,    54,    53,     0,     0,    17,    87,     0,    86,     5,
       6,    19,    63,    65,    67,    71,    73,    76,    78,    80,
      82,    32,    31,    29,    69,    30,     0,    61,   113,     0,
      96,   100,   102,   104,    94,    98,   106,     0,   109,    40,
      55,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,     0,   112,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,    64,    66,    68,
      72,    74,    77,    79,    81,    83,    61,     0,    97,   101,
     103,   105,    95,    99,   107,    61,   110,     0,     0,    59,
      37,     0,    61,     0,     0,    61,    38,     0,    34,     0,
       0,     0,    61,    62,    35,    48,    41,     0,     0,    60,
       0,    61,    43,    56,    49,    61,     0,    61,     0,    42,
      44,    61,    50,     0,    57,    61,    45,    51,    61,     0,
      46,    52,     0,    47
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    92,    19,   155,   174,
      96,   166,    20,    28,   134,   181,   170,   186,   193,   198,
     202,   180,   188,   195,   199,    73,    21,   135,   187,    22,
      30,   165,    23,    24,    48,   113,   114,   115,    49,   116,
     117,    50,   118,   119,    51,   120,   121,    52,    53,    66,
     129,   125,   130,   126,   127,   128,    67,   131,    68,   133,
      69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
     589,    -8,  -123,  -123,  -123,  -123,  -123,   305,  -123,   -27,
    -123,    44,  -123,  -123,    20,    -1,     4,     5,    48,    53,
    -123,  -123,  -123,  -123,    60,  -123,     4,    88,    63,   105,
      77,  -123,    73,  -123,  -123,  -123,  -123,    68,   128,   128,
     128,    75,   101,    53,  -123,  -123,  -123,  -123,    25,    36,
      29,    58,  -123,  -123,  -123,     5,  -123,    45,  -123,  -123,
     589,  -123,  -123,    88,    88,   566,  -123,   -24,    90,  -123,
      94,  -123,  -123,   108,    88,  -123,  -123,   173,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,    52,   566,    97,   112,   274,  -123,     6,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,   115,  -123,  -123,
    -123,    10,  -123,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   589,   103,  -123,   128,   128,   128,   128,   128,
     128,    88,  -123,    88,   104,    88,   129,    36,    36,    36,
      29,    29,    58,    58,  -123,  -123,   319,    88,    36,    36,
      36,    36,    36,    36,    90,   589,  -123,   130,    32,  -123,
    -123,    21,   364,   110,     4,   589,  -123,   137,  -123,   231,
     -11,   114,   409,  -123,  -123,  -123,  -123,   231,   144,  -123,
     119,   589,  -123,  -123,  -123,   454,   122,   589,   149,  -123,
    -123,   499,  -123,   150,  -123,   589,  -123,   544,   589,   151,
     544,  -123,   156,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,   -57,   -13,   172,   165,   -14,  -123,    -9,  -123,  -123,
    -123,  -123,     8,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,    28,  -123,  -123,    39,
    -123,  -123,    50,  -123,   -20,  -123,  -123,  -123,   140,  -123,
    -123,   -36,  -123,  -123,    -3,  -123,  -123,   -31,  -122,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,   -53,  -123,    61,  -123,
     -55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -62
static const yytype_int16 yytable[] =
{
      42,    41,    56,    97,    95,    43,   106,    76,    98,    78,
      25,    99,    61,   176,    27,    72,    71,    54,   107,    77,
      31,   111,    44,    32,     2,     3,     4,     5,     6,     7,
     177,    33,    34,    13,    35,    36,   106,    93,    57,     9,
     106,    10,    45,    81,    77,    11,    12,   175,   124,    37,
     164,   106,   136,    46,    38,   182,    33,    34,    91,    35,
      36,    39,   106,   167,    47,   146,    58,    40,    82,    83,
      84,    85,    86,    59,    62,    87,    88,    63,   156,    38,
     140,   141,   158,    42,    41,    29,    64,    60,    43,   144,
     145,    75,    40,    79,   161,    82,    83,    84,   162,    33,
      34,   -28,    35,    36,    70,    44,    89,    90,   172,     2,
       3,     4,     5,     6,     7,   142,   143,    62,    74,    80,
      63,   108,    38,   109,   185,    45,   110,   106,   122,    64,
     191,   132,    42,    41,    13,    40,    46,    43,   197,    33,
      34,   200,    35,    36,   147,   159,   157,    47,    42,    41,
     171,   169,   163,    43,    44,   173,   178,    62,    42,    41,
     183,   184,    38,    43,   190,   192,   196,    65,   201,    39,
      44,    42,    41,   203,    45,    40,    43,    42,    41,    26,
      44,    55,    43,    42,    41,    46,    42,    41,    43,     0,
      45,    43,   154,    44,     0,     0,    47,    94,     0,    44,
      45,    46,     0,    65,    94,    44,     0,     0,    44,     0,
       0,    46,    47,    45,    65,   112,    82,    83,    84,    45,
       0,     0,    47,     0,    46,    45,     0,     0,    45,     0,
      46,     0,     0,     0,     0,    47,    46,     0,     0,    46,
       0,    47,    33,    34,     0,    35,    36,    47,     0,     0,
      47,     0,     0,   137,   138,   139,     0,     0,     0,     0,
      62,     0,     0,     0,     0,   148,   149,   150,   151,   152,
     153,    65,     0,    65,     0,    65,     0,    32,     2,     3,
       4,     5,     6,     7,     0,    33,    34,    65,    35,    36,
       0,     0,     0,     9,     0,    10,     0,     0,     0,    11,
      12,     0,   123,    37,     0,     0,     0,     0,    38,     2,
       3,     4,     5,     6,     0,    39,     0,     0,     0,     0,
       0,    40,    32,     2,     3,     4,     5,     6,     7,     0,
      33,    34,     0,    35,    36,     0,   160,     0,     9,     0,
      10,     0,     0,     0,    11,    12,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,    40,    32,     2,     3,
       4,     5,     6,     7,     0,    33,    34,     0,    35,    36,
       0,   168,     0,     9,     0,    10,     0,     0,     0,    11,
      12,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,    40,    32,     2,     3,     4,     5,     6,     7,     0,
      33,    34,     0,    35,    36,     0,   179,     0,     9,     0,
      10,     0,     0,     0,    11,    12,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,    40,    32,     2,     3,
       4,     5,     6,     7,     0,    33,    34,     0,    35,    36,
       0,     0,     0,     9,     0,    10,     0,   189,     0,    11,
      12,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,    40,    32,     2,     3,     4,     5,     6,     7,     0,
      33,    34,     0,    35,    36,     0,   194,     0,     9,     0,
      10,     0,     0,     0,    11,    12,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,    40,    32,     2,     3,
       4,     5,     6,     7,     0,    33,    34,     0,    35,    36,
       0,     0,     0,     9,     0,    10,     0,     0,     0,    11,
      12,   -61,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,     0,
       0,    40,     1,     2,     3,     4,     5,     6,     7,     0,
       0,    85,    86,   100,   101,   102,   103,     8,     9,     0,
      10,     0,     0,     0,    11,    12,   104,   105,    13
};

static const yytype_int16 yycheck[] =
{
      14,    14,    16,    60,    57,    14,    30,    38,    63,    40,
      18,    64,    26,    24,    41,    29,    29,    18,    42,    39,
       0,    74,    14,     3,     4,     5,     6,     7,     8,     9,
      41,    11,    12,    29,    14,    15,    30,    57,    33,    19,
      30,    21,    14,    18,    64,    25,    26,   169,    42,    29,
      18,    30,    42,    14,    34,   177,    11,    12,    13,    14,
      15,    41,    30,    42,    14,   122,    18,    47,    43,    44,
      45,    35,    36,    20,    29,    46,    47,    32,   133,    34,
     116,   117,   135,    97,    97,    41,    41,    27,    97,   120,
     121,    18,    47,    18,   147,    43,    44,    45,   155,    11,
      12,    33,    14,    15,    41,    97,    48,    49,   165,     4,
       5,     6,     7,     8,     9,   118,   119,    29,    41,    18,
      32,    31,    34,    29,   181,    97,    18,    30,    16,    41,
     187,    16,   146,   146,    29,    47,    97,   146,   195,    11,
      12,   198,    14,    15,    41,    16,    42,    97,   162,   162,
     164,    41,    22,   162,   146,    18,    42,    29,   172,   172,
      16,    42,    34,   172,    42,    16,    16,    27,    17,    41,
     162,   185,   185,    17,   146,    47,   185,   191,   191,     7,
     172,    16,   191,   197,   197,   146,   200,   200,   197,    -1,
     162,   200,   131,   185,    -1,    -1,   146,    57,    -1,   191,
     172,   162,    -1,    63,    64,   197,    -1,    -1,   200,    -1,
      -1,   172,   162,   185,    74,    42,    43,    44,    45,   191,
      -1,    -1,   172,    -1,   185,   197,    -1,    -1,   200,    -1,
     191,    -1,    -1,    -1,    -1,   185,   197,    -1,    -1,   200,
      -1,   191,    11,    12,    -1,    14,    15,   197,    -1,    -1,
     200,    -1,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,    -1,   135,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,   147,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    28,    29,    -1,    -1,    -1,    -1,    34,     4,
       5,     6,     7,     8,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    14,    15,    -1,    17,    -1,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    -1,    -1,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    14,    15,
      -1,    -1,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      -1,    47,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    35,    36,    37,    38,    39,    40,    18,    19,    -1,
      21,    -1,    -1,    -1,    25,    26,    50,    51,    29
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    18,    19,
      21,    25,    26,    29,    53,    54,    55,    56,    57,    59,
      64,    78,    81,    84,    85,    18,    55,    41,    65,    41,
      82,     0,     3,    11,    12,    14,    15,    29,    34,    41,
      47,    54,    57,    59,    64,    78,    81,    84,    86,    90,
      93,    96,    99,   100,    18,    56,    57,    33,    18,    20,
      27,    57,    29,    32,    41,    90,   101,   108,   110,   112,
      41,    54,    57,    77,    41,    18,    99,    86,    99,    18,
      18,    18,    43,    44,    45,    35,    36,    46,    47,    48,
      49,    13,    58,    86,    90,   108,    62,    53,   112,   108,
      37,    38,    39,    40,    50,    51,    30,    42,    31,    29,
      18,   108,    42,    87,    88,    89,    91,    92,    94,    95,
      97,    98,    16,    28,    42,   103,   105,   106,   107,   102,
     104,   109,    16,   111,    66,    79,    42,    90,    90,    90,
      93,    93,    96,    96,    99,    99,    53,    41,    90,    90,
      90,    90,    90,    90,   110,    60,   112,    42,   108,    16,
      17,   108,    53,    22,    18,    83,    63,    42,    17,    41,
      68,    57,    53,    18,    61,   100,    24,    41,    42,    17,
      73,    67,   100,    16,    42,    53,    69,    80,    74,    23,
      42,    53,    16,    70,    17,    75,    16,    53,    71,    76,
      53,    17,    72,    17
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
#line 297 ".\\calc.y"
    {printf("Matched assignment\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 298 ".\\calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 299 ".\\calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 300 ".\\calc.y"
    {printf("Matched Declarations\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 301 ".\\calc.y"
    {printf("Matched assignment\n");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 302 ".\\calc.y"
    {printf("Matched loop: for\n");}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 303 ".\\calc.y"
    {printf("Matched loop: for\n");;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 304 ".\\calc.y"
    {printf("Matched flow control: if\n");;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 305 ".\\calc.y"
    {printf("Matched flow control: if\n");}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 306 ".\\calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 307 ".\\calc.y"
    {printf("Matched flow control: switch\n");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 308 ".\\calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 309 ".\\calc.y"
    {printf("Matched loop: while\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 310 ".\\calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 311 ".\\calc.y"
    {printf("Matched loop: do-while\n");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 312 ".\\calc.y"
    {printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 313 ".\\calc.y"
    {printf("Matched Empty statement\n");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 314 ".\\calc.y"
    {printf("Matched Expression Statement\n");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 318 ".\\calc.y"
    { printf("ya rab %s\n", (yyvsp[(2) - (2)].VARIABLE));}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 320 ".\\calc.y"
    { Values val;
				val.Number = valueNumber;
				char * c = new char[variable.size() + 1];
				std::copy(variable.begin(), variable.end(), c);
				if(c[variable.size()-1]=='=')
					c[variable.size()-1] = '\0';
				c[variable.size()] = '\0'; // don't forget the terminating 0

				insert(type,c,false,val, currentcope);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 329 ".\\calc.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 332 ".\\calc.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 333 ".\\calc.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 334 ".\\calc.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 335 ".\\calc.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 336 ".\\calc.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 338 ".\\calc.y"
    {(yyval.VARIABLE)=(yyvsp[(1) - (1)].VARIABLE); variable=(yyvsp[(1) - (1)].VARIABLE);cout<<"VARIABLE_COUT = "<<variable<<endl;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 340 ".\\calc.y"
    {valueNumber=(yyvsp[(3) - (3)].NUM);type=2;store();}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 341 ".\\calc.y"
    { cout<<typeid((yyvsp[(3) - (3)].BOOOL)).name();store();}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 342 ".\\calc.y"
    { printf("string is matched %s\n",(yyvsp[(3) - (3)].VARIABLE));store();}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 351 ".\\calc.y"
    {
													(yyval.VARIABLE) = (yyvsp[(1) - (1)].VARIABLE);
													printf("matched string value %s\n",(yyvsp[(1) - (1)].VARIABLE)); 
												}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 363 ".\\calc.y"
    {if1();}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 363 ".\\calc.y"
    {if2();}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 363 ".\\calc.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 364 ".\\calc.y"
    {if3();}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 364 ".\\calc.y"
    {if2();}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 364 ".\\calc.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 368 ".\\calc.y"
    {L1=label_num; label_num++;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 369 ".\\calc.y"
    {switchVar=(yyvsp[(4) - (4)].VARIABLE);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 369 ".\\calc.y"
    {x=1;switch_8ear_kda();}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 369 ".\\calc.y"
    {switch1();x=0;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {st1[++top]=std::to_string((yyvsp[(3) - (3)].NUM));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {switchMain();}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {x=1;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {switch2();}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {x=0;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {st1[++top]=std::to_string((yyvsp[(2) - (2)].NUM));}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {switchMain();}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {x=1;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {switch2();}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 372 ".\\calc.y"
    {x=0;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 375 ".\\calc.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 376 ".\\calc.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 380 ".\\calc.y"
    {for1();}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 380 ".\\calc.y"
    {for2();}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 380 ".\\calc.y"
    {for3();}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 384 ".\\calc.y"
    {for1();}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 384 ".\\calc.y"
    {x=1;for2();}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 384 ".\\calc.y"
    {x=0;for3();}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 386 ".\\calc.y"
    {for1();}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 386 ".\\calc.y"
    {for2();for3();}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 389 ".\\calc.y"
    {st1[++top]="BitOR";}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 389 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) | (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 390 ".\\calc.y"
    {st1[++top]="BitAND";}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 390 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) & (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 391 ".\\calc.y"
    {st1[++top]="XOR";}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 391 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) ^ (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 392 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 395 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 396 ".\\calc.y"
    {st1[++top]="SHIFT_LEFT";}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 396 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) << (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 397 ".\\calc.y"
    {st1[++top]="SHIFT_RIGHT";}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 397 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) >> (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 401 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 402 ".\\calc.y"
    {st1[++top]="ADD";}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 402 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) + (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 403 ".\\calc.y"
    {st1[++top]="SUB";}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 403 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) - (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 407 ".\\calc.y"
    {st1[++top]="MUL";}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 407 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) * (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 408 ".\\calc.y"
    {st1[++top]="DIV";}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 408 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (4)].NUM) / (yyvsp[(4) - (4)].NUM);codegen();}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 409 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 413 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(2) - (3)].NUM);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 414 ".\\calc.y"
    {(yyval.NUM) = -(yyvsp[(2) - (2)].NUM);st1[++top]="NEG";codegen_minus();}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 415 ".\\calc.y"
    {(yyval.NUM) = ~(yyvsp[(2) - (2)].NUM);st1[++top]="BitNOT";codegen_minus();}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 416 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 419 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].NUM); st1[++top]=std::to_string((yyvsp[(1) - (1)].NUM)); printf("i matched integer %d %s\n",(yyvsp[(1) - (1)].NUM),st1[top].c_str());}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 420 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].LETTER);  printf("i matched TTT %d\n",(yyvsp[(1) - (1)].LETTER));}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 421 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 422 ".\\calc.y"
    {(yyval.NUM) = (yyvsp[(1) - (1)].DOOBLE); st1[++top]=std::to_string((yyvsp[(1) - (1)].DOOBLE)); printf("i matched double %f \n",(yyvsp[(1) - (1)].DOOBLE));}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 423 ".\\calc.y"
    {st1[++top]=(yyvsp[(1) - (1)].VARIABLE);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 433 ".\\calc.y"
    {st1[++top]="GreaterThan";}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 433 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) > (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 434 ".\\calc.y"
    {st1[++top]="GreaterThanOrEqual";}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 434 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) >= (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 435 ".\\calc.y"
    {st1[++top]="SmallerThan";}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 435 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) < (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 436 ".\\calc.y"
    {st1[++top]="SmallerThanOrEqual";}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 436 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) <= (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 437 ".\\calc.y"
    {st1[++top]="EQUAL";}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 437 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) == (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 438 ".\\calc.y"
    {st1[++top]="NotEQUAL";}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 438 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].NUM) != (yyvsp[(4) - (4)].NUM);setFlag();}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 441 ".\\calc.y"
    {st1[++top]="OR";}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 441 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].BOOOL) || (yyvsp[(4) - (4)].BOOOL);setFlag();}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 442 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 445 ".\\calc.y"
    {st1[++top]="AND";}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 445 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (4)].BOOOL) && (yyvsp[(4) - (4)].BOOOL);setFlag();}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 446 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(1) - (1)].BOOOL);}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 449 ".\\calc.y"
    {(yyval.BOOOL) = (yyvsp[(2) - (3)].BOOOL);}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 450 ".\\calc.y"
    {(yyval.BOOOL) = !(yyvsp[(2) - (2)].BOOOL);st1[++top]="NOT";setFlag_Not();}
    break;



/* Line 1455 of yacc.c  */
#line 2699 "y.tab.c"
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
#line 454 ".\\calc.y"
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
void printSymbolTable(Scope *currentTable)
{
	for ( auto it = currentTable->currentLockup.begin(); it != currentTable->currentLockup.end(); ++it )
		{
			std::cout << " " << it->first<<" "<<it->second.value.Number<<" "<<it->second.type<<"\n";
			//printf("%d\n",it->second.value.Number);
		}
}
bool finn(Scope *currentTable,char* c)
{
	for ( auto it = currentTable->currentLockup.begin(); it != currentTable->currentLockup.end(); ++it )
		{
			if(strcmp(it->first,c)==0)
				return true;
		}
	return false;
}
OPERATION_RETURN insert(int type, char* name, bool isConstant, Values value, Scope *currentTable)
{

    // first check for duplication
    unordered_map<char *, Symbol>::iterator itr = currentTable->currentLockup.find(name);
	printf("\nitr %d\n",itr);

    if (!finn(currentTable,name))
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
    		 itr = currentTable->currentLockup.find(name);

			//Scope *Dum =  lookUp(name, currentTable);
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
	const int result = remove("Code_Generated.txt");
	mainscope=createMainScope();
	currentcope=mainscope;

	cout<<currentcope;
	yyparse ( );
	printSymbolTable(currentcope);
	return 0;
}

void yyerror (char *s) { // open file in write mode, and add the error to it!
	extern int yylineno;
	FILE* f;
	f = fopen("lexerOut2.txt","w");
	fprintf(f, "%s at line %d\n", s, yylineno);
	fclose(f);
} 

