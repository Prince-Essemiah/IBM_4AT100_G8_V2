/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TUesla
//!	Generated Date	: Tue, 31, Mar 2020  
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/

//## auto_generated
#include "TUesla.h"
//## package TUesla

//## class TUesla
TUesla::TUesla() {
    itsDCT = NULL;
}

TUesla::~TUesla() {
    cleanUpRelations();
}

Controller* TUesla::getItsController() const {
    return (Controller*) &itsController;
}

DCT* TUesla::getItsDCT() const {
    return itsDCT;
}

void TUesla::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsTUesla(this);
        }
    _setItsDCT(p_DCT);
}

DCT* TUesla::getItsDCT_1() const {
    return (DCT*) &itsDCT_1;
}

DistributionCenter* TUesla::getItsDistributionCenter() const {
    return (DistributionCenter*) &itsDistributionCenter;
}

DistributionCenter* TUesla::getItsDistributionCenter_1() const {
    return (DistributionCenter*) &itsDistributionCenter_1;
}

Truck* TUesla::getItsTruck() const {
    return (Truck*) &itsTruck;
}

void TUesla::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            TUesla* p_TUesla = itsDCT->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCT->__setItsTUesla(NULL);
                }
            itsDCT = NULL;
        }
}

void TUesla::__setItsDCT(DCT* p_DCT) {
    itsDCT = p_DCT;
}

void TUesla::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsTUesla(NULL);
        }
    __setItsDCT(p_DCT);
}

void TUesla::_clearItsDCT() {
    itsDCT = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/
