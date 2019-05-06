%{
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

%}

%union {
	long NUM; 
	int BOOOL;
	char* VARIABLE;
	double DOOBLE;
	char LETTER;
}         

/* Yacc definitions */

%start line
%token exit_command

// Tokens for Keywords
	%token Rakam
	%token TOKEN_Hroof
	%token TOKEN_3ashry
	%token TOKEN_Harf
	%token TOKEN_Boolean
	%token CONSTANT_TOKEN
	%token TOKEN_Atba3

// Tokens for Constant Numerics
	%token <NUM>	  LONG_INTEGER
	%token <DOOBLE>   DOUBE_FLOATING_POINT
	%token <VARIABLE> STRING_VALUE
	%token <LETTER>   CHARACTER_VALUE	
	%token <BOOOL> 	  TrueFalse

// Tokens for scope identification:
	%token SCOPE_START_TOKEN
	%token SCOPE_END_TOKEN
	%token STATEMENT_TERMINATOR_TOKEN

// flow control tokens:

// if-else if:
	%token IF_STATEMENT_TOKEN
	%token ELSE_STATEMENT_TOKEN

// switch case:
	%token SWITCH_CASE_BEGINNING_TOKEN
	%token SWITCH_CASE_START_CASES_TOKEN
	%token SWITCH_CASE_END_CASES_TOKEN
	%token SWITCH_DEFAULT_CASE_BEGINNING_TOKEN

// for:
	%token FOR_LOOP_STATMENT_TOKEN

// while:
	%token WHILE_LOOP_STATEMENT_TOKEN

// Do while:
	%token DO_STATEMENT_TOKEN
	%token WHILE_LOOP_STATEMENT_TOKEN_TEST


// Coding:
	%token <VARIABLE> IDENTIFIER_TOKEN
	%token OR
	%token AND
	%token NOT
	%token EQUAL_SIGN
	%token EXP_NOT
	%token SHIFT_LEFT
	%token SHIFT_RIGHT
	%token GREATER_THAN_EQUAL
	%token LESS_THAN_EQUAL
	%token EQUAL_EQUAL
	%token NOT_EQUAL

// Utilities:

	%type <VARIABLE> assignment  //Needs editing
	%type <NUM> line exp expbitwise expAddSubtract term factor component	
	%type <BOOOL>  Bexp Bexp1 Bexpand Bexpbracket // 0 or 1 integers.
	%type <VARIABLE> string_value_assignment TEST_ID

	// EDITTTTTTTTTTTTTTTTTTTT
%%

/* descriptions of expected inputs     corresponding actions (in C) */

line    : assignment STATEMENT_TERMINATOR_TOKEN			{printf("Matched assignment\n");}
		| exit_command STATEMENT_TERMINATOR_TOKEN		{printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
		| declaration STATEMENT_TERMINATOR_TOKEN		{printf("Matched Declarations\n");}
		| line declaration STATEMENT_TERMINATOR_TOKEN	{printf("Matched Declarations\n");}
		| line assignment STATEMENT_TERMINATOR_TOKEN	{printf("Matched assignment\n");;}
		| line for_statement 							{printf("Matched loop: for\n");}
		| for_statement									{printf("Matched loop: for\n");;}
		| line if_statement								{printf("Matched flow control: if\n");;}
		| if_statement									{printf("Matched flow control: if\n");}
		| line switch_statement							{printf("Matched flow control: switch\n");}
		| switch_statement								{printf("Matched flow control: switch\n");}
		| line  while_statement							{printf("Matched loop: while\n");}
		| while_statement								{printf("Matched loop: while\n");}
		| line repeat_statement							{printf("Matched loop: do-while\n");}
		| repeat_statement								{printf("Matched loop: do-while\n");}
		| line exit_command STATEMENT_TERMINATOR_TOKEN	{printf("Matched fedahya\n");exit(EXIT_SUCCESS);}
		| STATEMENT_TERMINATOR_TOKEN 					{printf("Matched Empty statement\n");}
		| line expbitwise STATEMENT_TERMINATOR_TOKEN 	{printf("Matched Expression Statement\n");}
        ;
		
// Decalarations of variables and constants:
declaration: data_type TEST_ID 							{ printf("ya rab %s\n", $2);} // updateSymbolVal() } // TODO: update Symbol table
		| data_type assignment							 	  		
		 { Values val;
				val.Number = valueNumber;
				char * c = new char[variable.size() + 1];
				std::copy(variable.begin(), variable.end(), c);
				if(c[variable.size()-1]=='=')
					c[variable.size()-1] = '\0';
				c[variable.size()] = '\0'; // don't forget the terminating 0

				insert(type,c,false,val, currentcope);}
		| CONSTANT_TOKEN data_type assignment 						{;} // TODO: when it's a constant, mark it so you can not update it later on
		;
		
data_type: Rakam 		{;} 
		| TOKEN_3ashry 	{;}
		| TOKEN_Boolean {;}
		| TOKEN_Harf 	{;}
		| TOKEN_Hroof   {;}
		;		
TEST_ID: IDENTIFIER_TOKEN {$$=$1; variable=$1;cout<<"VARIABLE_COUT = "<<variable<<endl;}
;
assignment : TEST_ID  EQUAL_SIGN expbitwise {valueNumber=$3;type=2;store();}				
			| TEST_ID  EQUAL_SIGN Bexp1 { cout<<typeid($3).name();store();} // updateSymbolVal($1,$3); } // TODO: gowa el function law el variable msh mawgood, zawedo
			| TEST_ID  EQUAL_SIGN string_value_assignment { printf("string is matched %s\n",$3);store();}
		;

// print_stmt:  TOKEN_Harf Bexp1  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf expbitwise  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf double_value_exp  {printf("%s\n",$2);}
// 		  |  TOKEN_Harf string_value_assignment  {printf("%s\n",$2);}
// 		  ;

string_value_assignment:  STRING_VALUE			{
													$$ = $1;
													printf("matched string value %s\n",$1); 
												}		 //    $$ = symbolVal($1);
				//| IDENTIFIER_TOKEN		{;} //    $$ = symbolVal($1);
												
						;

// Flow Control Statements:

// 1. If-else: // FIX

if_statement: IF_STATEMENT_TOKEN '('Bexp1')' SCOPE_START_TOKEN {if1();} line SCOPE_END_TOKEN {if2();}  	{;} // TODO: replace exp with Bexp
		| if_statement ELSE_STATEMENT_TOKEN{if3();} SCOPE_START_TOKEN line SCOPE_END_TOKEN {if2();}		{;}
		;

// 2. switch case:
switch_statement: SWITCH_CASE_BEGINNING_TOKEN {L1=label_num; label_num++;}
	'('IDENTIFIER_TOKEN {switchVar=$4;} ')' SWITCH_CASE_START_CASES_TOKEN  case_statement SWITCH_DEFAULT_CASE_BEGINNING_TOKEN{x=1;switch_8ear_kda();} line SWITCH_CASE_END_CASES_TOKEN {switch1();x=0;} 
		;

case_statement: case_statement '('term {st1[++top]=std::to_string($3);} ')' {switchMain();}  SCOPE_START_TOKEN{x=1;}  line {switch2();} SCOPE_END_TOKEN {x=0;} | '('term {st1[++top]=std::to_string($2);} ')' {switchMain();}  SCOPE_START_TOKEN{x=1;} line {switch2();} SCOPE_END_TOKEN {x=0;} 
		;
// 3. for loop:
for_iterator: assignment 				{;}
		| declaration					{;} 
		;

			 
for_statement: FOR_LOOP_STATMENT_TOKEN  '('for_iterator STATEMENT_TERMINATOR_TOKEN {for1();} Bexp1 STATEMENT_TERMINATOR_TOKEN assignment')' SCOPE_START_TOKEN {for2();} line SCOPE_END_TOKEN     {for3();} 
		;

// 4. While: 
while_statement: WHILE_LOOP_STATEMENT_TOKEN  {for1();}'(' Bexp1')'  SCOPE_START_TOKEN {x=1;for2();} line SCOPE_END_TOKEN {x=0;for3();}
// 5. Do While:
repeat_statement: {for1();} DO_STATEMENT_TOKEN  line WHILE_LOOP_STATEMENT_TOKEN_TEST  '('Bexp1')' STATEMENT_TERMINATOR_TOKEN  {for2();for3();}
				  ;

expbitwise	: expbitwise '|'  {st1[++top]="BitOR";}  exp	 	    {$$ = $1 | $4;codegen();}
			| expbitwise '&'  {st1[++top]="BitAND";} exp    	    {$$ = $1 & $4;codegen();}
 			| expbitwise '^'  {st1[++top]="XOR";}    exp	            {$$ = $1 ^ $4;codegen();}
	    	| exp        	            	{$$ = $1;}
	    	;

exp    	: expAddSubtract                		  {$$ = $1;}
       	| exp SHIFT_LEFT  {st1[++top]="SHIFT_LEFT";}  expAddSubtract           {$$ = $1 << $4;codegen();}
       	| exp SHIFT_RIGHT {st1[++top]="SHIFT_RIGHT";} expAddSubtract          {$$ = $1 >> $4;codegen();}
       	;


expAddSubtract  : component                  {$$ = $1;}
			    | expAddSubtract '+' {st1[++top]="ADD";} component          {$$ = $1 + $4;codegen();}
				| expAddSubtract '-' {st1[++top]="SUB";} component          {$$ = $1 - $4;codegen();}
				;


component   : component '*' {st1[++top]="MUL";} factor       {$$ = $1 * $4;codegen();}
 			| component '/' {st1[++top]="DIV";} factor       {$$ = $1 / $4;codegen();}
	    	| factor                     {$$ = $1;}
	    	;


factor  : '(' expbitwise ')'            {$$ = $2;}
	    | '-' factor             {$$ = -$2;st1[++top]="NEG";codegen_minus();}
		| EXP_NOT factor             {$$ = ~$2;st1[++top]="BitNOT";codegen_minus();}
	    | term                   {$$ = $1;}
 		;
 
term   	: LONG_INTEGER          {$$ = $1; st1[++top]=std::to_string($1); printf("i matched integer %d %s\n",$1,st1[top].c_str());}
		| CHARACTER_VALUE		{$$ = $1;  printf("i matched TTT %d\n",$1);}
		| TrueFalse				{$$ = $1;}
		| DOUBE_FLOATING_POINT 	{$$ = $1; st1[++top]=std::to_string($1); printf("i matched double %f \n",$1);}
		| IDENTIFIER_TOKEN		{st1[++top]=$1;}
		
		// if the matched identifier refers to String type:
			// return the address of this string as a long, pass it to the one we assign it to
		
		
        ;


// Afsel 3shan al precedance.
Bexp	: exp '>'					 {st1[++top]="GreaterThan";}             exp		{$$ = $1 > $4;setFlag();}
 		| exp GREATER_THAN_EQUAL	 {st1[++top]="GreaterThanOrEqual";}      exp	    {$$ = $1 >= $4;setFlag();}
	    | exp '<' 				     {st1[++top]="SmallerThan";}	         exp        {$$ = $1 < $4;setFlag();}
		| exp LESS_THAN_EQUAL 	     {st1[++top]="SmallerThanOrEqual";}	     exp        {$$ = $1 <= $4;setFlag();}
		| exp EQUAL_EQUAL 	      	 {st1[++top]="EQUAL";}	                 exp        {$$ = $1 == $4;setFlag();}
		| exp NOT_EQUAL 			 {st1[++top]="NotEQUAL";}                exp    	{$$ = $1 != $4;setFlag();}
		;

Bexp1	: Bexp1 OR     {st1[++top]="OR";}  Bexpand					{$$ = $1 || $4;setFlag();}
		| Bexpand							 {$$ = $1;}
		;

Bexpand	: Bexpand AND  {st1[++top]="AND";}  Bexpbracket				 {$$ = $1 && $4;setFlag();}
		| Bexpbracket							 {$$ = $1;}
		;

Bexpbracket  : '(' Bexp1 ')'            {$$ = $2;}
	  	     | NOT Bexpbracket         {$$ = !$2;st1[++top]="NOT";setFlag_Not();}
			 | Bexp
 			 ;	

%%                     /* C code */

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
