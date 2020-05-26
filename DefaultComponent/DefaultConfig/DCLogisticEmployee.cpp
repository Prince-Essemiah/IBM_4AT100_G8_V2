/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.cpp
*********************************************************************/

//## auto_generated
#include "DCLogisticEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_SetCoordinates
#include "UC_SetCoordinates.h"
//## package ActorPkg

//## actor DCLogisticEmployee
DCLogisticEmployee::DCLogisticEmployee() {
    itsTUesla = NULL;
    itsUC_SetCoordinates = NULL;
}

DCLogisticEmployee::~DCLogisticEmployee() {
    cleanUpRelations();
}

TUesla* DCLogisticEmployee::getItsTUesla() const {
    return itsTUesla;
}

void DCLogisticEmployee::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLogisticEmployee(this);
        }
    _setItsTUesla(p_TUesla);
}

UC_SetCoordinates* DCLogisticEmployee::getItsUC_SetCoordinates() const {
    return itsUC_SetCoordinates;
}

void DCLogisticEmployee::setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    if(p_UC_SetCoordinates != NULL)
        {
            p_UC_SetCoordinates->_setItsDCLogisticEmployee(this);
        }
    _setItsUC_SetCoordinates(p_UC_SetCoordinates);
}

void DCLogisticEmployee::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            DCLogisticEmployee* p_DCLogisticEmployee = itsTUesla->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsTUesla->__setItsDCLogisticEmployee(NULL);
                }
            itsTUesla = NULL;
        }
    if(itsUC_SetCoordinates != NULL)
        {
            DCLogisticEmployee* p_DCLogisticEmployee = itsUC_SetCoordinates->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsUC_SetCoordinates->__setItsDCLogisticEmployee(NULL);
                }
            itsUC_SetCoordinates = NULL;
        }
}

void DCLogisticEmployee::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void DCLogisticEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLogisticEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLogisticEmployee::_clearItsTUesla() {
    itsTUesla = NULL;
}

void DCLogisticEmployee::__setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    itsUC_SetCoordinates = p_UC_SetCoordinates;
}

void DCLogisticEmployee::_setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    if(itsUC_SetCoordinates != NULL)
        {
            itsUC_SetCoordinates->__setItsDCLogisticEmployee(NULL);
        }
    __setItsUC_SetCoordinates(p_UC_SetCoordinates);
}

void DCLogisticEmployee::_clearItsUC_SetCoordinates() {
    itsUC_SetCoordinates = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.cpp
*********************************************************************/
