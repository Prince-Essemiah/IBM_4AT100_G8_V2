/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_ManualOverride
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_ManualOverride.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_ManualOverride.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_UseCaseModelling_ManualOverride_UC_ManualOverride_UC_ManualOverride_SERIALIZE OM_NO_OP
//#]

//## package TUesla::UseCaseModelling::ManualOverride

//## class UC_ManualOverride
UC_ManualOverride::UC_ManualOverride(IOxfActive* theActiveContext) : autonomousMode(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_ManualOverride, UC_ManualOverride(), 0, TUesla_UseCaseModelling_ManualOverride_UC_ManualOverride_UC_ManualOverride_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
    initStatechart();
}

UC_ManualOverride::~UC_ManualOverride() {
    NOTIFY_DESTRUCTOR(~UC_ManualOverride, true);
    cleanUpRelations();
}

bool UC_ManualOverride::getAutonomousMode() const {
    return autonomousMode;
}

void UC_ManualOverride::setAutonomousMode(bool p_autonomousMode) {
    autonomousMode = p_autonomousMode;
}

DCLogisticEmployee* UC_ManualOverride::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void UC_ManualOverride::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsUC_ManualOverride(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

DCT* UC_ManualOverride::getItsDCT() const {
    return itsDCT;
}

void UC_ManualOverride::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsUC_ManualOverride(this);
        }
    _setItsDCT(p_DCT);
}

bool UC_ManualOverride::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_ManualOverride::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UC_ManualOverride::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            UC_ManualOverride* p_UC_ManualOverride = itsDCLogisticEmployee->getItsUC_ManualOverride();
            if(p_UC_ManualOverride != NULL)
                {
                    itsDCLogisticEmployee->__setItsUC_ManualOverride(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            UC_ManualOverride* p_UC_ManualOverride = itsDCT->getItsUC_ManualOverride();
            if(p_UC_ManualOverride != NULL)
                {
                    itsDCT->__setItsUC_ManualOverride(NULL);
                }
            itsDCT = NULL;
        }
}

void UC_ManualOverride::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void UC_ManualOverride::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsUC_ManualOverride(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void UC_ManualOverride::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void UC_ManualOverride::__setItsDCT(DCT* p_DCT) {
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

void UC_ManualOverride::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsUC_ManualOverride(NULL);
        }
    __setItsDCT(p_DCT);
}

void UC_ManualOverride::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void UC_ManualOverride::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.FrictionWheelState");
        rootState_subState = FrictionWheelState;
        rootState_active = FrictionWheelState;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_ManualOverride::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State AutonomousDisabled
        case AutonomousDisabled:
        {
            if(IS_EVENT_TYPE_OF(overrideManual_ManualOverride_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.AutonomousEnabled");
                    rootState_subState = AutonomousEnabled;
                    rootState_active = AutonomousEnabled;
                    //#[ state AutonomousEnabled.(Entry) 
                    autonomousMode=true;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(overrideDone_ManualOverride_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.FrictionWheelState");
                    rootState_subState = FrictionWheelState;
                    rootState_active = FrictionWheelState;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
        }
        break;
        // State AutonomousEnabled
        case AutonomousEnabled:
        {
            if(IS_EVENT_TYPE_OF(overrideManual_ManualOverride_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousEnabled");
                    NOTIFY_STATE_ENTERED("ROOT.AutonomousDisabled");
                    rootState_subState = AutonomousDisabled;
                    rootState_active = AutonomousDisabled;
                    //#[ state AutonomousDisabled.(Entry) 
                    autonomousMode=false;
                    //#]
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            else if(IS_EVENT_TYPE_OF(overrideDone_ManualOverride_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    NOTIFY_STATE_EXITED("ROOT.AutonomousEnabled");
                    NOTIFY_STATE_ENTERED("ROOT.FrictionWheelState");
                    rootState_subState = FrictionWheelState;
                    rootState_active = FrictionWheelState;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State FrictionWheelState
        case FrictionWheelState:
        {
            if(IS_EVENT_TYPE_OF(manualOverride_ManualOverride_UseCaseModelling_TUesla_id))
                {
                    //## transition 3 
                    if(autonomousMode)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_STATE_EXITED("ROOT.FrictionWheelState");
                            NOTIFY_STATE_ENTERED("ROOT.AutonomousEnabled");
                            rootState_subState = AutonomousEnabled;
                            rootState_active = AutonomousEnabled;
                            //#[ state AutonomousEnabled.(Entry) 
                            autonomousMode=true;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("3");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_STATE_EXITED("ROOT.FrictionWheelState");
                            NOTIFY_STATE_ENTERED("ROOT.AutonomousDisabled");
                            rootState_subState = AutonomousDisabled;
                            rootState_active = AutonomousDisabled;
                            //#[ state AutonomousDisabled.(Entry) 
                            autonomousMode=false;
                            //#]
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
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
void OMAnimatedUC_ManualOverride::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("autonomousMode", x2String(myReal->autonomousMode));
}

void OMAnimatedUC_ManualOverride::serializeRelations(AOMSRelations* aomsRelations) const {
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

void OMAnimatedUC_ManualOverride::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_ManualOverride::AutonomousDisabled:
        {
            AutonomousDisabled_serializeStates(aomsState);
        }
        break;
        case UC_ManualOverride::AutonomousEnabled:
        {
            AutonomousEnabled_serializeStates(aomsState);
        }
        break;
        case UC_ManualOverride::FrictionWheelState:
        {
            FrictionWheelState_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_ManualOverride::FrictionWheelState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.FrictionWheelState");
}

void OMAnimatedUC_ManualOverride::AutonomousEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousEnabled");
}

void OMAnimatedUC_ManualOverride::AutonomousDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.AutonomousDisabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_ManualOverride, TUesla_UseCaseModelling_ManualOverride, TUesla::UseCaseModelling::ManualOverride, false, OMAnimatedUC_ManualOverride)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_ManualOverride.cpp
*********************************************************************/
