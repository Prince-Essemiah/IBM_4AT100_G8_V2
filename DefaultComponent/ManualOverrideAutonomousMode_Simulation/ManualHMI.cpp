/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: ManualHMI
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\ManualHMI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ManualHMI.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_ManualHMI_ManualHMI_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase ManualHMI
ManualHMI::ManualHMI() {
    NOTIFY_CONSTRUCTOR(ManualHMI, ManualHMI(), 0, TUesla_Usecases_ManualHMI_ManualHMI_SERIALIZE);
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
}

ManualHMI::~ManualHMI() {
    NOTIFY_DESTRUCTOR(~ManualHMI, true);
    cleanUpRelations();
}

DCLogisticEmployee* ManualHMI::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void ManualHMI::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsManualHMI(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCT* ManualHMI::getItsDCT() const {
    return itsDCT;
}

void ManualHMI::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsManualHMI(this);
        }
    _setItsDCT(p_DCT);
}

void ManualHMI::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            ManualHMI* p_ManualHMI = itsDCLogisticEmployee->getItsManualHMI();
            if(p_ManualHMI != NULL)
                {
                    itsDCLogisticEmployee->__setItsManualHMI(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            ManualHMI* p_ManualHMI = itsDCT->getItsManualHMI();
            if(p_ManualHMI != NULL)
                {
                    itsDCT->__setItsManualHMI(NULL);
                }
            itsDCT = NULL;
        }
}

void ManualHMI::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void ManualHMI::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsManualHMI(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void ManualHMI::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void ManualHMI::__setItsDCT(DCT* p_DCT) {
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

void ManualHMI::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsManualHMI(NULL);
        }
    __setItsDCT(p_DCT);
}

void ManualHMI::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedManualHMI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
    aomsRelations->addRelation("itsDCLogisticEmployee", false, true);
    if(myReal->itsDCLogisticEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLogisticEmployee);
        }
}
//#]

IMPLEMENT_META_P(ManualHMI, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedManualHMI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\ManualHMI.cpp
*********************************************************************/
