/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cargo
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Cargo.cpp
*********************************************************************/

//## auto_generated
#include "Cargo.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

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
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsCargo(this);
        }
    _setItsTUesla(p_TUesla);
}

void Cargo::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            Cargo* p_Cargo = itsTUesla->getItsCargo();
            if(p_Cargo != NULL)
                {
                    itsTUesla->__setItsCargo(NULL);
                }
            itsTUesla = NULL;
        }
}

void Cargo::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Cargo::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsCargo(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void Cargo::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Cargo.cpp
*********************************************************************/
