/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLogisticEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLogisticEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_ManualOverride
#include "UC_ManualOverride.h"
//## link itsUC_StopCrash
#include "UC_StopCrash.h"
//#[ ignore
#define SystemContext_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::PrimaryActors

//## actor DCLogisticEmployee
DCLogisticEmployee::DCLogisticEmployee() {
    NOTIFY_CONSTRUCTOR(DCLogisticEmployee, DCLogisticEmployee(), 0, SystemContext_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE);
    itsTUesla = NULL;
    itsUC_ManualOverride = NULL;
    itsUC_StopCrash = NULL;
}

DCLogisticEmployee::~DCLogisticEmployee() {
    NOTIFY_DESTRUCTOR(~DCLogisticEmployee, true);
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

UC_ManualOverride* DCLogisticEmployee::getItsUC_ManualOverride() const {
    return itsUC_ManualOverride;
}

void DCLogisticEmployee::setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    if(p_UC_ManualOverride != NULL)
        {
            p_UC_ManualOverride->_setItsDCLogisticEmployee(this);
        }
    _setItsUC_ManualOverride(p_UC_ManualOverride);
}

UC_StopCrash* DCLogisticEmployee::getItsUC_StopCrash() const {
    return itsUC_StopCrash;
}

void DCLogisticEmployee::setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    if(p_UC_StopCrash != NULL)
        {
            p_UC_StopCrash->_setItsDCLogisticEmployee(this);
        }
    _setItsUC_StopCrash(p_UC_StopCrash);
}

void DCLogisticEmployee::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLogisticEmployee* p_DCLogisticEmployee = itsTUesla->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsTUesla->__setItsDCLogisticEmployee(NULL);
                }
            itsTUesla = NULL;
        }
    if(itsUC_ManualOverride != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
            DCLogisticEmployee* p_DCLogisticEmployee = itsUC_ManualOverride->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsUC_ManualOverride->__setItsDCLogisticEmployee(NULL);
                }
            itsUC_ManualOverride = NULL;
        }
    if(itsUC_StopCrash != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
            DCLogisticEmployee* p_DCLogisticEmployee = itsUC_StopCrash->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsUC_StopCrash->__setItsDCLogisticEmployee(NULL);
                }
            itsUC_StopCrash = NULL;
        }
}

void DCLogisticEmployee::__setItsTUesla(TUesla* p_TUesla) {
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

void DCLogisticEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLogisticEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLogisticEmployee::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

void DCLogisticEmployee::__setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    itsUC_ManualOverride = p_UC_ManualOverride;
    if(p_UC_ManualOverride != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_ManualOverride", p_UC_ManualOverride, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
        }
}

void DCLogisticEmployee::_setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    if(itsUC_ManualOverride != NULL)
        {
            itsUC_ManualOverride->__setItsDCLogisticEmployee(NULL);
        }
    __setItsUC_ManualOverride(p_UC_ManualOverride);
}

void DCLogisticEmployee::_clearItsUC_ManualOverride() {
    NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
    itsUC_ManualOverride = NULL;
}

void DCLogisticEmployee::__setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    itsUC_StopCrash = p_UC_StopCrash;
    if(p_UC_StopCrash != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_StopCrash", p_UC_StopCrash, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
        }
}

void DCLogisticEmployee::_setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    if(itsUC_StopCrash != NULL)
        {
            itsUC_StopCrash->__setItsDCLogisticEmployee(NULL);
        }
    __setItsUC_StopCrash(p_UC_StopCrash);
}

void DCLogisticEmployee::_clearItsUC_StopCrash() {
    NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
    itsUC_StopCrash = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLogisticEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsUC_ManualOverride", false, true);
    if(myReal->itsUC_ManualOverride)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_ManualOverride);
        }
    aomsRelations->addRelation("itsUC_StopCrash", false, true);
    if(myReal->itsUC_StopCrash)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_StopCrash);
        }
}
//#]

IMPLEMENT_META_P(DCLogisticEmployee, SystemContext_Actors_PrimaryActors, SystemContext::Actors::PrimaryActors, false, OMAnimatedDCLogisticEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLogisticEmployee.cpp
*********************************************************************/
