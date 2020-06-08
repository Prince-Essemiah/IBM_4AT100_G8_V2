/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCT
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCT.cpp
*********************************************************************/

//## auto_generated
#include "DCT.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

//## class DCT
DCT::DCT() {
    itsTUesla = NULL;
}

DCT::~DCT() {
    cleanUpRelations();
}

TUesla* DCT::getItsTUesla() const {
    return itsTUesla;
}

void DCT::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCT(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCT::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            DCT* p_DCT = itsTUesla->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsTUesla->__setItsDCT(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCT::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void DCT::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCT(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCT::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCT.cpp
*********************************************************************/
