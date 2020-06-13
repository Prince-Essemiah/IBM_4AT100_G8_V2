/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLogisticEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLogisticEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define SystemContext_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::PrimaryActors

//## actor DCLogisticEmployee
DCLogisticEmployee::DCLogisticEmployee() {
    NOTIFY_CONSTRUCTOR(DCLogisticEmployee, DCLogisticEmployee(), 0, SystemContext_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE);
    itsTUesla = NULL;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLogisticEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(DCLogisticEmployee, SystemContext_Actors_PrimaryActors, SystemContext::Actors::PrimaryActors, false, OMAnimatedDCLogisticEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLogisticEmployee.cpp
*********************************************************************/
