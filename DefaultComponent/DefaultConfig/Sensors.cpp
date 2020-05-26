/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//## auto_generated
#include "Sensors.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class Sensors
Sensors::Sensors() {
    itsTUesla = NULL;
}

Sensors::~Sensors() {
    cleanUpRelations();
}

TUesla* Sensors::getItsTUesla() const {
    return itsTUesla;
}

void Sensors::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Sensors::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/
