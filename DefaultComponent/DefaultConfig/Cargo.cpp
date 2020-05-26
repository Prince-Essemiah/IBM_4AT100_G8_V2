/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cargo
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Cargo.cpp
*********************************************************************/

//## auto_generated
#include "Cargo.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class Cargo
Cargo::Cargo() {
    itsTUesla = NULL;
}

Cargo::~Cargo() {
    cleanUpRelations();
}

TUesla* Cargo::getItsTUesla() const {
    return itsTUesla;
}

void Cargo::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Cargo::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cargo.cpp
*********************************************************************/
