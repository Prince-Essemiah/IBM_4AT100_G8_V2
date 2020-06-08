/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnvironmentSensors
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EnvironmentSensors.cpp
*********************************************************************/

//## auto_generated
#include "EnvironmentSensors.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

//## class EnvironmentSensors
EnvironmentSensors::EnvironmentSensors() {
    itsTUesla = NULL;
}

EnvironmentSensors::~EnvironmentSensors() {
    cleanUpRelations();
}

TUesla* EnvironmentSensors::getItsTUesla() const {
    return itsTUesla;
}

void EnvironmentSensors::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsEnvironmentSensors(this);
        }
    _setItsTUesla(p_TUesla);
}

void EnvironmentSensors::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            EnvironmentSensors* p_EnvironmentSensors = itsTUesla->getItsEnvironmentSensors();
            if(p_EnvironmentSensors != NULL)
                {
                    itsTUesla->__setItsEnvironmentSensors(NULL);
                }
            itsTUesla = NULL;
        }
}

void EnvironmentSensors::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void EnvironmentSensors::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsEnvironmentSensors(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void EnvironmentSensors::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnvironmentSensors.cpp
*********************************************************************/
