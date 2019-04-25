#include <iostream> 
#include <iterator> 
#include <string.h>
#include <string>
#include <unordered_map> 	
using namespace std;
#define SIZE 2000

typedef union valueType
{
    double Number;
    char Char;
    char* Str;
    /* data */
} Values;
typedef struct tableEntry {
    char*type;  
    char*other;
    Values value;
} Entry;


typedef unordered_map <char*,Entry> MAP;

typedef struct symbolTable{
    MAP symTable;
    symbolTable* aboveTable;
} Table;

Table MainScope;
void createMainScope();
void insert(char*type,char* name,char*other,Values value);
Values lookUp(char* name); 
void update(char* name,Values value);
