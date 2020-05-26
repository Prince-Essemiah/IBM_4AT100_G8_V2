/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Environment
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/

//## auto_generated
#include "Environment.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class Environment
Environment::Environment() {
    itsTUesla = NULL;
}

Environment::~Environment() {
    cleanUpRelations();
}

TUesla* Environment::getItsTUesla() const {
    return itsTUesla;
}

void Environment::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Environment::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Environment.cpp
*********************************************************************/
