/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: ManualOverrideAutonomousMode
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\ManualOverrideAutonomousMode.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ManualOverrideAutonomousMode.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_ManualOverrideAutonomousMode_ManualOverrideAutonomousMode_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase ManualOverrideAutonomousMode
ManualOverrideAutonomousMode::ManualOverrideAutonomousMode(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ManualOverrideAutonomousMode, ManualOverrideAutonomousMode(), 0, TUesla_Usecases_ManualOverrideAutonomousMode_ManualOverrideAutonomousMode_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
    initStatechart();
}

ManualOverrideAutonomousMode::~ManualOverrideAutonomousMode() {
    NOTIFY_DESTRUCTOR(~ManualOverrideAutonomousMode, true);
    cleanUpRelations();
}

DCLogisticEmployee* ManualOverrideAutonomousMode::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void ManualOverrideAutonomousMode::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsManualOverrideAutonomousMode(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCT* ManualOverrideAutonomousMode::getItsDCT() const {
    return itsDCT;
}

void ManualOverrideAutonomousMode::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsManualOverrideAutonomousMode(this);
        }
    _setItsDCT(p_DCT);
}

bool ManualOverrideAutonomousMode::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ManualOverrideAutonomousMode::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ManualOverrideAutonomousMode::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode = itsDCLogisticEmployee->getItsManualOverrideAutonomousMode();
            if(p_ManualOverrideAutonomousMode != NULL)
                {
                    itsDCLogisticEmployee->__setItsManualOverrideAutonomousMode(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode = itsDCT->getItsManualOverrideAutonomousMode();
            if(p_ManualOverrideAutonomousMode != NULL)
                {
                    itsDCT->__setItsManualOverrideAutonomousMode(NULL);
                }
            itsDCT = NULL;
        }
}

void ManualOverrideAutonomousMode::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void ManualOverrideAutonomousMode::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsManualOverrideAutonomousMode(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void ManualOverrideAutonomousMode::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void ManualOverrideAutonomousMode::__setItsDCT(DCT* p_DCT) {
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

void ManualOverrideAutonomousMode::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsManualOverrideAutonomousMode(NULL);
        }
    __setItsDCT(p_DCT);
}

void ManualOverrideAutonomousMode::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void ManualOverrideAutonomousMode::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.AutonomousDisabled");
        pushNullTransition();
        rootState_subState = AutonomousDisabled;
        rootState_active = AutonomousDisabled;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus ManualOverrideAutonomousMode::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State AutonomousDisabled
        case AutonomousDisabled:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.AutonomousDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.ManualOverride");
                    rootState_subState = ManualOverride;
                    rootState_active = ManualOverride;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ManualOverride
        case ManualOverride:
        {
            if(IS_EVENT_TYPE_OF(evManualOverride_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.ManualOverride");
                    NOTIFY_STATE_ENTERED("ROOT.AutonomousEnabled");
                    rootState_subState = AutonomousEnabled;
                    rootState_active = AutonomousEnabled;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedManualOverrideAutonomousMode::serializeRelations(AOMSRelations* aomsRelations) const {
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

void OMAnimatedManualOverrideAutonomousMode::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case ManualOverrideAutonomousMode::AutonomousDisabled:
        {
            AutonomousDisabled_serializeStates(aomsState);
        }
        break;
        case ManualOverrideAutonomousMode::AutonomousEnabled:
        {
            AutonomousEnabled_serializeStates(aomsState);
        }
        break;
        case ManualOverrideAutonomousMode::ManualOverride:
        {
            ManualOverride_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedManualOverrideAutonomousMode::ManualOverride_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ManualOverride");
}

void OMAnimatedManualOverrideAutonomousMode::AutonomousEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousEnabled");
}

void OMAnimatedManualOverrideAutonomousMode::AutonomousDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousDisabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(ManualOverrideAutonomousMode, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedManualOverrideAutonomousMode)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\ManualOverrideAutonomousMode.cpp
*********************************************************************/
