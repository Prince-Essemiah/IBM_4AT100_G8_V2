/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.cpp
*********************************************************************/

//## auto_generated
#include "DCLogisticEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::PrimaryActors

//## actor DCLogisticEmployee
DCLogisticEmployee::DCLogisticEmployee() {
    itsTUesla = NULL;
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

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.cpp
*********************************************************************/
