/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\DCLoadingEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLoadingEmployee.h"
//## link itsLoadingCargo
#include "LoadingCargo.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::PrimaryActors

//## actor DCLoadingEmployee
DCLoadingEmployee::DCLoadingEmployee() {
    NOTIFY_CONSTRUCTOR(DCLoadingEmployee, DCLoadingEmployee(), 0, TUesla_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE);
    itsLoadingCargo = NULL;
    itsTUesla = NULL;
}

DCLoadingEmployee::~DCLoadingEmployee() {
    NOTIFY_DESTRUCTOR(~DCLoadingEmployee, true);
    cleanUpRelations();
}

LoadingCargo* DCLoadingEmployee::getItsLoadingCargo() const {
    return itsLoadingCargo;
}

void DCLoadingEmployee::setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(p_LoadingCargo != NULL)
        {
            p_LoadingCargo->_setItsDCLoadingEmployee(this);
        }
    _setItsLoadingCargo(p_LoadingCargo);
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
    if(itsLoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
            DCLoadingEmployee* p_DCLoadingEmployee = itsLoadingCargo->getItsDCLoadingEmployee();
            if(p_DCLoadingEmployee != NULL)
                {
                    itsLoadingCargo->__setItsDCLoadingEmployee(NULL);
                }
            itsLoadingCargo = NULL;
        }
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLoadingEmployee* p_DCLoadingEmployee = itsTUesla->getItsDCLoadingEmployee();
            if(p_DCLoadingEmployee != NULL)
                {
                    itsTUesla->__setItsDCLoadingEmployee(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLoadingEmployee::__setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    itsLoadingCargo = p_LoadingCargo;
    if(p_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingCargo", p_LoadingCargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
        }
}

void DCLoadingEmployee::_setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(itsLoadingCargo != NULL)
        {
            itsLoadingCargo->__setItsDCLoadingEmployee(NULL);
        }
    __setItsLoadingCargo(p_LoadingCargo);
}

void DCLoadingEmployee::_clearItsLoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsLoadingCargo");
    itsLoadingCargo = NULL;
}

void DCLoadingEmployee::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
    if(p_TUesla != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTUesla", p_TUesla, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
        }
}

void DCLoadingEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLoadingEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLoadingEmployee::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLoadingEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsLoadingCargo", false, true);
    if(myReal->itsLoadingCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingCargo);
        }
}
//#]

IMPLEMENT_META_P(DCLoadingEmployee, TUesla_Actors_PrimaryActors, TUesla::Actors::PrimaryActors, false, OMAnimatedDCLoadingEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\DCLoadingEmployee.cpp
*********************************************************************/
