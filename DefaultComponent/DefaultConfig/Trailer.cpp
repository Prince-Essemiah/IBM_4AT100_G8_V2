/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Trailer
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Trailer.cpp
*********************************************************************/

//## auto_generated
#include "Trailer.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class Trailer
Trailer::Trailer() {
    itsTUesla = NULL;
}

Trailer::~Trailer() {
    cleanUpRelations();
}

TUesla* Trailer::getItsTUesla() const {
    return itsTUesla;
}

void Trailer::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Trailer::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Trailer.cpp
*********************************************************************/
