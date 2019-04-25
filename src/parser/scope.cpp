#include "scope.hpp"
#include<utility>
//defin globally main scope


Scope* createMainScope(){
    Scope* mainScope = new Scope() ;
    mainScope->above = NULL;
    return mainScope;
}

OPERATION_RETURN insert(int type,char* name,bool isConstant,Values value, Scope* currentTable){

    // first check for duplication
    std::unordered_map<char*,Symbol>::iterator itr = currentTable->currentLockup.find(name);

    if(itr == currentTable->currentLockup.end()){
        try{
            Symbol* s = new Symbol();
            s->type = type;
            s->isConst = isConstant;
            s->value = value;
            currentTable->currentLockup.insert( *new std::pair<char*,Symbol>(name,*s) );
            return SUCCESSFUL_INSERTION;
        } catch(...){
            return FAILED_TO_INSERTION;
        }
    } 
    return DUPLICATE_INSERTION;
}


Scope* lookUp(char* name,Scope* currentTable){

    // base case: not found in alllllll scopes: 2o7a
    if(currentTable==NULL) return NULL;

    if(currentTable->currentLockup.find(name) == currentTable->currentLockup.end()){
       return lookUp(name,currentTable->above);
    } 
    return currentTable;
}

OPERATION_RETURN update(char* name,int newType,Values value,Scope* currentTable){

    Scope*currTable = lookUp(name,currentTable);
    
    if(currTable != NULL){
        std::unordered_map<char*,Symbol>::iterator itr = currentTable->currentLockup.find(name); //madaam mesh b null yeb2a wesh la2ah
        // check semantics errors:
        if( itr->second.isConst){
            return SEMANTIC_ERROR_ATTEMPT_CHANGING_CONSTANT;
        }
        if(newType == itr->second.type) {
            itr->second.value = value;
            return SUCCESSFUL_UPDATE;
        }
        return SEMANTIC_ERROR_TYPE_INCOMPATIBLE;
    }
    return SYMBOL_NOT_FOUND;
}