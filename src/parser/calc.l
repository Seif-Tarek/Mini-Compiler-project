%{
#include "y.tab.h"
void yyerror (char *s);
int yylex();
%}
%option nounput yylineno
%%



8oor        			     {return exit_command;}
Rakam                        {return Rakam;}
Kelma                        {return TOKEN_Hroof;}
TeF                          {return TOKEN_Boolean;}
7rf                          {return TOKEN_Harf;}
Atba3                        {return TOKEN_Atba3;}
3ashry                       {return TOKEN_3ashry;}
Sabet                        {return CONSTANT_TOKEN;}
Law                          {return IF_STATEMENT_TOKEN;}
Aew                          {return ELSE_STATEMENT_TOKEN;}
Lma                          {return SWITCH_CASE_BEGINNING_TOKEN;}
Yb2a                         {return SWITCH_CASE_START_CASES_TOKEN;}
5las                         {return SWITCH_CASE_END_CASES_TOKEN;}
8ear_Kda                     {return SWITCH_DEFAULT_CASE_BEGINNING_TOKEN;}
Lef_3ala                     {return FOR_LOOP_STATMENT_TOKEN;}
Tool_Ma                      {return WHILE_LOOP_STATEMENT_TOKEN;}
E3mly                        {return DO_STATEMENT_TOKEN;}
E3ml                         {return SCOPE_START_TOKEN;}
Bas                          {return SCOPE_END_TOKEN;}
True                         {yylval.BOOOL = 1; return TrueFalse;}
False                        {yylval.BOOOL = 2; return TrueFalse;}
\|\|                         {return OR;}
&&                           {return AND;}
!                            {return NOT;}
\<\<                         {return SHIFT_LEFT;}
\>\>                         {return SHIFT_RIGHT;}
\>=                          {return GREATER_THAN_EQUAL;}
\<=                          {return LESS_THAN_EQUAL;}
==                           {return EQUAL_EQUAL;}
!=                           {return NOT_EQUAL;}
[_a-zA-Z][a-zA-Z0-9\._]*     {yylval.VARIABLE = yytext; return IDENTIFIER_TOKEN;}
[0-9]+                       {yylval.NUM = atoi(yytext); return LONG_INTEGER;}
[ \t\n]                      ;
[\+\-*/%=()|&^<>]            {return yytext[0];}
[0-9]+\.[0-9]+               {yylval.DOOBLE = atof(yytext); return DOUBE_FLOATING_POINT;}
'.'                          {yylval.LETTER = yytext[1]; return CHARACTER_VALUE;}
\"(\\.|[^\\\"])*\"            {yylval.VARIABLE = yytext; return STRING_VALUE;}
;                            {return STATEMENT_TERMINATOR_TOKEN;}
.                            {ECHO; yyerror ("unexpected character");}


%%
int yywrap (void) {return 1;}

