#include"symTable.hpp"
void createMainScope(){
    MainScope.aboveTable = NULL;
}
void insert(char*type,char* name,char*other,Values value)
{
    struct tableEntry NewEntry;
    NewEntry.type = type;
    NewEntry.other = other;
    NewEntry.value = value;
    MainScope.symTable[name] = NewEntry;
}

Values lookUp(char* name, Table* currentTable)
{
    if(currentTable == NULL ){
        Values temp;
        temp.Number = -1;
        return temp;
    }

    MAP::iterator itr = currentTable->symTable.find(name);

    if( itr != currentTable->symTable.end() ){
        return itr->second.value;
    }
}
void update(char* name,Values value)
{
    MainScope.symTable[name].value = value;
}
