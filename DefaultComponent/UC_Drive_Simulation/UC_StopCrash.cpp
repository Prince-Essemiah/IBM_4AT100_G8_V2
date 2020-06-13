/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_StopCrash
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_StopCrash.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_StopCrash.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//## event overrideManual()
#include "ManualOverride.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define TUesla_UseCaseModelling_StopCrash_UC_StopCrash_UC_StopCrash_SERIALIZE OM_NO_OP
//#]

//## package TUesla::UseCaseModelling::StopCrash

//## class UC_StopCrash
UC_StopCrash::UC_StopCrash(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_StopCrash, UC_StopCrash(), 0, TUesla_UseCaseModelling_StopCrash_UC_StopCrash_UC_StopCrash_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
    itsSensors = NULL;
    initStatechart();
}

UC_StopCrash::~UC_StopCrash() {
    NOTIFY_DESTRUCTOR(~UC_StopCrash, true);
    cleanUpRelations();
}

DCLogisticEmployee* UC_StopCrash::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void UC_StopCrash::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsUC_StopCrash(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCT* UC_StopCrash::getItsDCT() const {
    return itsDCT;
}

void UC_StopCrash::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsUC_StopCrash(this);
        }
    _setItsDCT(p_DCT);
}

Sensors* UC_StopCrash::getItsSensors() const {
    return itsSensors;
}

void UC_StopCrash::setItsSensors(Sensors* p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsUC_StopCrash(this);
        }
    _setItsSensors(p_Sensors);
}

bool UC_StopCrash::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_StopCrash::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UC_StopCrash::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            UC_StopCrash* p_UC_StopCrash = itsDCLogisticEmployee->getItsUC_StopCrash();
            if(p_UC_StopCrash != NULL)
                {
                    itsDCLogisticEmployee->__setItsUC_StopCrash(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            UC_StopCrash* p_UC_StopCrash = itsDCT->getItsUC_StopCrash();
            if(p_UC_StopCrash != NULL)
                {
                    itsDCT->__setItsUC_StopCrash(NULL);
                }
            itsDCT = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            UC_StopCrash* p_UC_StopCrash = itsSensors->getItsUC_StopCrash();
            if(p_UC_StopCrash != NULL)
                {
                    itsSensors->__setItsUC_StopCrash(NULL);
                }
            itsSensors = NULL;
        }
}

void UC_StopCrash::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void UC_StopCrash::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsUC_StopCrash(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void UC_StopCrash::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void UC_StopCrash::__setItsDCT(DCT* p_DCT) {
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

void UC_StopCrash::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsUC_StopCrash(NULL);
        }
    __setItsDCT(p_DCT);
}

void UC_StopCrash::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void UC_StopCrash::__setItsSensors(Sensors* p_Sensors) {
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

void UC_StopCrash::_setItsSensors(Sensors* p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsUC_StopCrash(NULL);
        }
    __setItsSensors(p_Sensors);
}

void UC_StopCrash::_clearItsSensors() {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

void UC_StopCrash::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.PathPlannerEnabled");
        rootState_subState = PathPlannerEnabled;
        rootState_active = PathPlannerEnabled;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_StopCrash::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PathPlannerEnabled
        case PathPlannerEnabled:
        {
            if(IS_EVENT_TYPE_OF(crashDetect_StopCrash_UseCaseModelling_TUesla_id))
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
            if(IS_EVENT_TYPE_OF(emergencyBrake_StopCrash_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.DCTBrakes");
                    rootState_subState = DCTBrakes;
                    rootState_active = DCTBrakes;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ControllerDisengaged
        case ControllerDisengaged:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("5");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllerDisengaged");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_5");
                    rootState_subState = terminationstate_5;
                    rootState_active = terminationstate_5;
                    NOTIFY_TRANSITION_TERMINATED("5");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTBrakes
        case DCTBrakes:
        {
            if(IS_EVENT_TYPE_OF(overrideManual_ManualOverride_UseCaseModelling_TUesla_id))
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
            if(IS_EVENT_TYPE_OF(crashMaintenance_StopCrash_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.DCTManualOverride");
                    NOTIFY_STATE_ENTERED("ROOT.ControllerDisengaged");
                    pushNullTransition();
                    rootState_subState = ControllerDisengaged;
                    rootState_active = ControllerDisengaged;
                    NOTIFY_TRANSITION_TERMINATED("3");
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
void OMAnimatedUC_StopCrash::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
}

void OMAnimatedUC_StopCrash::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_StopCrash::PathPlannerEnabled:
        {
            PathPlannerEnabled_serializeStates(aomsState);
        }
        break;
        case UC_StopCrash::PathPlannerDisabled:
        {
            PathPlannerDisabled_serializeStates(aomsState);
        }
        break;
        case UC_StopCrash::ControllerDisengaged:
        {
            ControllerDisengaged_serializeStates(aomsState);
        }
        break;
        case UC_StopCrash::DCTBrakes:
        {
            DCTBrakes_serializeStates(aomsState);
        }
        break;
        case UC_StopCrash::DCTManualOverride:
        {
            DCTManualOverride_serializeStates(aomsState);
        }
        break;
        case UC_StopCrash::terminationstate_5:
        {
            terminationstate_5_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_StopCrash::terminationstate_5_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_5");
}

void OMAnimatedUC_StopCrash::PathPlannerEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerEnabled");
}

void OMAnimatedUC_StopCrash::PathPlannerDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerDisabled");
}

void OMAnimatedUC_StopCrash::DCTManualOverride_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTManualOverride");
}

void OMAnimatedUC_StopCrash::DCTBrakes_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTBrakes");
}

void OMAnimatedUC_StopCrash::ControllerDisengaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerDisengaged");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_StopCrash, TUesla_UseCaseModelling_StopCrash, TUesla::UseCaseModelling::StopCrash, false, OMAnimatedUC_StopCrash)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_StopCrash.cpp
*********************************************************************/
