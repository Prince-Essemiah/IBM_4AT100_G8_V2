/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLoadingEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLoadingEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_LoadingCargo
#include "UC_LoadingCargo.h"
//#[ ignore
#define SystemContext_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::PrimaryActors

//## actor DCLoadingEmployee
DCLoadingEmployee::DCLoadingEmployee() {
    NOTIFY_CONSTRUCTOR(DCLoadingEmployee, DCLoadingEmployee(), 0, SystemContext_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE);
    itsTUesla = NULL;
    itsUC_LoadingCargo = NULL;
}

DCLoadingEmployee::~DCLoadingEmployee() {
    NOTIFY_DESTRUCTOR(~DCLoadingEmployee, true);
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

UC_LoadingCargo* DCLoadingEmployee::getItsUC_LoadingCargo() const {
    return itsUC_LoadingCargo;
}

void DCLoadingEmployee::setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(p_UC_LoadingCargo != NULL)
        {
            p_UC_LoadingCargo->_setItsDCLoadingEmployee(this);
        }
    _setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

void DCLoadingEmployee::cleanUpRelations() {
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
    if(itsUC_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
            DCLoadingEmployee* p_DCLoadingEmployee = itsUC_LoadingCargo->getItsDCLoadingEmployee();
            if(p_DCLoadingEmployee != NULL)
                {
                    itsUC_LoadingCargo->__setItsDCLoadingEmployee(NULL);
                }
            itsUC_LoadingCargo = NULL;
        }
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

void DCLoadingEmployee::__setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    itsUC_LoadingCargo = p_UC_LoadingCargo;
    if(p_UC_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_LoadingCargo", p_UC_LoadingCargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
        }
}

void DCLoadingEmployee::_setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(itsUC_LoadingCargo != NULL)
        {
            itsUC_LoadingCargo->__setItsDCLoadingEmployee(NULL);
        }
    __setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

void DCLoadingEmployee::_clearItsUC_LoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
    itsUC_LoadingCargo = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLoadingEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsUC_LoadingCargo", false, true);
    if(myReal->itsUC_LoadingCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_LoadingCargo);
        }
}
//#]

IMPLEMENT_META_P(DCLoadingEmployee, SystemContext_Actors_PrimaryActors, SystemContext::Actors::PrimaryActors, false, OMAnimatedDCLoadingEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLoadingEmployee.cpp
*********************************************************************/
