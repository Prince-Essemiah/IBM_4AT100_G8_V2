/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: StopCrash
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\StopCrash.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "StopCrash.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define TUesla_Usecases_StopCrash_StopCrash_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase StopCrash
StopCrash::StopCrash(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(StopCrash, StopCrash(), 0, TUesla_Usecases_StopCrash_StopCrash_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLogisticEmployee = NULL;
    itsDCLogisticEmployee_1 = NULL;
    itsDCT = NULL;
    itsSensors = NULL;
    initStatechart();
}

StopCrash::~StopCrash() {
    NOTIFY_DESTRUCTOR(~StopCrash, true);
    cleanUpRelations();
}

DCLogisticEmployee* StopCrash::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void StopCrash::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsStopCrash(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCLogisticEmployee* StopCrash::getItsDCLogisticEmployee_1() const {
    return itsDCLogisticEmployee_1;
}

void StopCrash::setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsStopCrash_1(this);
        }
    _setItsDCLogisticEmployee_1(p_DCLogisticEmployee);
}

DCT* StopCrash::getItsDCT() const {
    return itsDCT;
}

void StopCrash::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsStopCrash(this);
        }
    _setItsDCT(p_DCT);
}

Sensors* StopCrash::getItsSensors() const {
    return itsSensors;
}

void StopCrash::setItsSensors(Sensors* p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsStopCrash(this);
        }
    _setItsSensors(p_Sensors);
}

bool StopCrash::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void StopCrash::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void StopCrash::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            StopCrash* p_StopCrash = itsDCLogisticEmployee->getItsStopCrash();
            if(p_StopCrash != NULL)
                {
                    itsDCLogisticEmployee->__setItsStopCrash(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCLogisticEmployee_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee_1");
            StopCrash* p_StopCrash = itsDCLogisticEmployee_1->getItsStopCrash_1();
            if(p_StopCrash != NULL)
                {
                    itsDCLogisticEmployee_1->__setItsStopCrash_1(NULL);
                }
            itsDCLogisticEmployee_1 = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            StopCrash* p_StopCrash = itsDCT->getItsStopCrash();
            if(p_StopCrash != NULL)
                {
                    itsDCT->__setItsStopCrash(NULL);
                }
            itsDCT = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            StopCrash* p_StopCrash = itsSensors->getItsStopCrash();
            if(p_StopCrash != NULL)
                {
                    itsSensors->__setItsStopCrash(NULL);
                }
            itsSensors = NULL;
        }
}

void StopCrash::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void StopCrash::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsStopCrash(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void StopCrash::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void StopCrash::__setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee) {
    itsDCLogisticEmployee_1 = p_DCLogisticEmployee;
    if(p_DCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLogisticEmployee_1", p_DCLogisticEmployee, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee_1");
        }
}

void StopCrash::_setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee_1 != NULL)
        {
            itsDCLogisticEmployee_1->__setItsStopCrash_1(NULL);
        }
    __setItsDCLogisticEmployee_1(p_DCLogisticEmployee);
}

void StopCrash::_clearItsDCLogisticEmployee_1() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee_1");
    itsDCLogisticEmployee_1 = NULL;
}

void StopCrash::__setItsDCT(DCT* p_DCT) {
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

void StopCrash::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsStopCrash(NULL);
        }
    __setItsDCT(p_DCT);
}

void StopCrash::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void StopCrash::__setItsSensors(Sensors* p_Sensors) {
    itsSensors = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
        }
}

void StopCrash::_setItsSensors(Sensors* p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsStopCrash(NULL);
        }
    __setItsSensors(p_Sensors);
}

void StopCrash::_clearItsSensors() {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void StopCrash::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.PathPlannerEnabled");
        rootState_subState = PathPlannerEnabled;
        rootState_active = PathPlannerEnabled;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus StopCrash::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PathPlannerEnabled
        case PathPlannerEnabled:
        {
            if(IS_EVENT_TYPE_OF(CrashDetect_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerEnabled");
                    NOTIFY_STATE_ENTERED("ROOT.PathPlannerDisabled");
                    rootState_subState = PathPlannerDisabled;
                    rootState_active = PathPlannerDisabled;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PathPlannerDisabled
        case PathPlannerDisabled:
        {
            if(IS_EVENT_TYPE_OF(EmergencyBrake_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.DCTBrakes");
                    rootState_subState = DCTBrakes;
                    rootState_active = DCTBrakes;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ControllerDisengaged
        case ControllerDisengaged:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllerDisengaged");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_5");
                    rootState_subState = terminationstate_5;
                    rootState_active = terminationstate_5;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTBrakes
        case DCTBrakes:
        {
            if(IS_EVENT_TYPE_OF(OverrideManual_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    NOTIFY_STATE_EXITED("ROOT.DCTBrakes");
                    NOTIFY_STATE_ENTERED("ROOT.DCTManualOverride");
                    rootState_subState = DCTManualOverride;
                    rootState_active = DCTManualOverride;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTManualOverride
        case DCTManualOverride:
        {
            if(IS_EVENT_TYPE_OF(CrashMaintenance_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.DCTManualOverride");
                    NOTIFY_STATE_ENTERED("ROOT.ControllerDisengaged");
                    pushNullTransition();
                    rootState_subState = ControllerDisengaged;
                    rootState_active = ControllerDisengaged;
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
void OMAnimatedStopCrash::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
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
    aomsRelations->addRelation("itsDCLogisticEmployee_1", false, true);
    if(myReal->itsDCLogisticEmployee_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLogisticEmployee_1);
        }
}

void OMAnimatedStopCrash::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case StopCrash::PathPlannerEnabled:
        {
            PathPlannerEnabled_serializeStates(aomsState);
        }
        break;
        case StopCrash::PathPlannerDisabled:
        {
            PathPlannerDisabled_serializeStates(aomsState);
        }
        break;
        case StopCrash::ControllerDisengaged:
        {
            ControllerDisengaged_serializeStates(aomsState);
        }
        break;
        case StopCrash::DCTBrakes:
        {
            DCTBrakes_serializeStates(aomsState);
        }
        break;
        case StopCrash::DCTManualOverride:
        {
            DCTManualOverride_serializeStates(aomsState);
        }
        break;
        case StopCrash::terminationstate_5:
        {
            terminationstate_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedStopCrash::terminationstate_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_5");
}

void OMAnimatedStopCrash::PathPlannerEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerEnabled");
}

void OMAnimatedStopCrash::PathPlannerDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerDisabled");
}

void OMAnimatedStopCrash::DCTManualOverride_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTManualOverride");
}

void OMAnimatedStopCrash::DCTBrakes_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTBrakes");
}

void OMAnimatedStopCrash::ControllerDisengaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerDisengaged");
}
//#]

IMPLEMENT_REACTIVE_META_P(StopCrash, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedStopCrash)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\StopCrash.cpp
*********************************************************************/
