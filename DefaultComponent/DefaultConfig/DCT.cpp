/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCT
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCT.cpp
*********************************************************************/

//## auto_generated
#include "DCT.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class DCT
DCT::DCT() {
    itsTUesla = NULL;
}

DCT::~DCT() {
    cleanUpRelations();
}

Battery* DCT::getItsBattery() const {
    return (Battery*) &itsBattery;
}

Heating* DCT::getItsHeating() const {
    return (Heating*) &itsHeating;
}

Lighting* DCT::getItsLighting() const {
    return (Lighting*) &itsLighting;
}

Powertrain* DCT::getItsPowertrain() const {
    return (Powertrain*) &itsPowertrain;
}

SteeringWheel* DCT::getItsSteeringWheel() const {
    return (SteeringWheel*) &itsSteeringWheel;
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
