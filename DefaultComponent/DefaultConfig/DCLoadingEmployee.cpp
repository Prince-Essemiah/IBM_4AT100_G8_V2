/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLoadingEmployee.cpp
*********************************************************************/

//## auto_generated
#include "DCLoadingEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::PrimaryActors

//## actor DCLoadingEmployee
DCLoadingEmployee::DCLoadingEmployee() {
    itsTUesla = NULL;
}

DCLoadingEmployee::~DCLoadingEmployee() {
    cleanUpRelations();
}

TUesla* DCLoadingEmployee::getItsTUesla() const {
    return itsTUesla;
}

void DCLoadingEmployee::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLoadingEmployee(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCLoadingEmployee::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            DCLoadingEmployee* p_DCLoadingEmployee = itsTUesla->getItsDCLoadingEmployee();
            if(p_DCLoadingEmployee != NULL)
                {
                    itsTUesla->__setItsDCLoadingEmployee(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLoadingEmployee::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void DCLoadingEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLoadingEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLoadingEmployee::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLoadingEmployee.cpp
*********************************************************************/
