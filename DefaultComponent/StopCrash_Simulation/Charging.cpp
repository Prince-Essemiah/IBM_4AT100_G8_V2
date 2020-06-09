/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: Charging
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\Charging.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Charging.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_Charging_Charging_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase Charging
Charging::Charging() {
    NOTIFY_CONSTRUCTOR(Charging, Charging(), 0, TUesla_Usecases_Charging_Charging_SERIALIZE);
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
}

Charging::~Charging() {
    NOTIFY_DESTRUCTOR(~Charging, true);
    cleanUpRelations();
}

DCLogisticEmployee* Charging::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void Charging::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsCharging(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCT* Charging::getItsDCT() const {
    return itsDCT;
}

void Charging::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsCharging(this);
        }
    _setItsDCT(p_DCT);
}

void Charging::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            Charging* p_Charging = itsDCLogisticEmployee->getItsCharging();
            if(p_Charging != NULL)
                {
                    itsDCLogisticEmployee->__setItsCharging(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            Charging* p_Charging = itsDCT->getItsCharging();
            if(p_Charging != NULL)
                {
                    itsDCT->__setItsCharging(NULL);
                }
            itsDCT = NULL;
        }
}

void Charging::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    itsDCLogisticEmployee = p_DCLogisticEmployee;
    if(p_DCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLogisticEmployee", p_DCLogisticEmployee, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
        }
}

void Charging::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsCharging(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void Charging::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void Charging::__setItsDCT(DCT* p_DCT) {
    itsDCT = p_DCT;
    if(p_DCT != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCT", p_DCT, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
        }
}

void Charging::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsCharging(NULL);
        }
    __setItsDCT(p_DCT);
}

void Charging::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCharging::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLogisticEmployee", false, true);
    if(myReal->itsDCLogisticEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLogisticEmployee);
        }
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}
//#]

IMPLEMENT_META_P(Charging, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedCharging)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\Charging.cpp
*********************************************************************/
