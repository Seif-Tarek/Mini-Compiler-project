/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 12 "calc.y" /* yacc.c:1909  */

	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;

#line 134 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
