/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_Drive
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_Drive.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_UseCaseModelling_Drive_UC_Drive_UC_Drive_SERIALIZE OM_NO_OP
//#]

//## package TUesla::UseCaseModelling::Drive

//## class UC_Drive
UC_Drive::UC_Drive(IOxfActive* theActiveContext) : DestinationReached(false), SteeringAngle(0), Velocity(0) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_Drive, UC_Drive(), 0, TUesla_UseCaseModelling_Drive_UC_Drive_UC_Drive_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCT = NULL;
    initStatechart();
}

UC_Drive::~UC_Drive() {
    NOTIFY_DESTRUCTOR(~UC_Drive, true);
    cleanUpRelations();
}

bool UC_Drive::getDestinationReached() const {
    return DestinationReached;
}

void UC_Drive::setDestinationReached(bool p_DestinationReached) {
    DestinationReached = p_DestinationReached;
}

OMIterator<int> UC_Drive::getSteeringAngle() const {
    OMIterator<int> iter(SteeringAngle);
    return iter;
}

void UC_Drive::setSteeringAngle(int p_SteeringAngle) {
    SteeringAngle.add(p_SteeringAngle);
}

int UC_Drive::getVelocity() const {
    return Velocity;
}

void UC_Drive::setVelocity(int p_Velocity) {
    Velocity = p_Velocity;
}

DCT* UC_Drive::getItsDCT() const {
    return itsDCT;
}

void UC_Drive::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsUC_Drive(this);
        }
    _setItsDCT(p_DCT);
}

bool UC_Drive::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_Drive::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UC_Drive::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            UC_Drive* p_UC_Drive = itsDCT->getItsUC_Drive();
            if(p_UC_Drive != NULL)
                {
                    itsDCT->__setItsUC_Drive(NULL);
                }
            itsDCT = NULL;
        }
}

void UC_Drive::__setItsDCT(DCT* p_DCT) {
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

void UC_Drive::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsUC_Drive(NULL);
        }
    __setItsDCT(p_DCT);
}

void UC_Drive::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void UC_Drive::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.ControllerEngaged");
        rootState_subState = ControllerEngaged;
        rootState_active = ControllerEngaged;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_Drive::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State ControllerEngaged
        case ControllerEngaged:
        {
            if(IS_EVENT_TYPE_OF(receiveInput_Drive_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.ControllerEngaged");
                    NOTIFY_STATE_ENTERED("ROOT.SteeringThrottleEngaged");
                    rootState_subState = SteeringThrottleEngaged;
                    rootState_active = SteeringThrottleEngaged;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State SteeringThrottleEngaged
        case SteeringThrottleEngaged:
        {
            if(IS_EVENT_TYPE_OF(driveDCT_Drive_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    NOTIFY_STATE_EXITED("ROOT.SteeringThrottleEngaged");
                    NOTIFY_STATE_ENTERED("ROOT.DCTDrives");
                    rootState_subState = DCTDrives;
                    rootState_active = DCTDrives;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTDrives
        case DCTDrives:
        {
            if(IS_EVENT_TYPE_OF(stopDCT_Drive_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("3");
                    NOTIFY_STATE_EXITED("ROOT.DCTDrives");
                    NOTIFY_STATE_ENTERED("ROOT.DCTStops");
                    pushNullTransition();
                    rootState_subState = DCTStops;
                    rootState_active = DCTStops;
                    NOTIFY_TRANSITION_TERMINATED("3");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTStops
        case DCTStops:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 6 
                    if(DestinationReached)
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("6");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.DCTStops");
                            //#[ transition 5 
                            if SteeringAngle==0 && Velocity==0
                            {
                            DestinationReached=true;
                            }
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SteeringThrottleDisengaged");
                            pushNullTransition();
                            rootState_subState = SteeringThrottleDisengaged;
                            rootState_active = SteeringThrottleDisengaged;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("5");
                            NOTIFY_TRANSITION_STARTED("7");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.DCTStops");
                            //#[ transition 5 
                            if SteeringAngle==0 && Velocity==0
                            {
                            DestinationReached=true;
                            }
                            //#]
                            NOTIFY_STATE_ENTERED("ROOT.SteeringThrottleEngaged");
                            rootState_subState = SteeringThrottleEngaged;
                            rootState_active = SteeringThrottleEngaged;
                            NOTIFY_TRANSITION_TERMINATED("7");
                            NOTIFY_TRANSITION_TERMINATED("5");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SteeringThrottleDisengaged
        case SteeringThrottleDisengaged:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.SteeringThrottleDisengaged");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_7");
                    rootState_subState = terminationstate_7;
                    rootState_active = terminationstate_7;
                    NOTIFY_TRANSITION_TERMINATED("4");
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
void OMAnimatedUC_Drive::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("SteeringAngle", UNKNOWN2STRING(myReal->SteeringAngle));
    aomsAttributes->addAttribute("Velocity", x2String(myReal->Velocity));
    aomsAttributes->addAttribute("DestinationReached", x2String(myReal->DestinationReached));
}

void OMAnimatedUC_Drive::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}

void OMAnimatedUC_Drive::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_Drive::ControllerEngaged:
        {
            ControllerEngaged_serializeStates(aomsState);
        }
        break;
        case UC_Drive::SteeringThrottleEngaged:
        {
            SteeringThrottleEngaged_serializeStates(aomsState);
        }
        break;
        case UC_Drive::DCTDrives:
        {
            DCTDrives_serializeStates(aomsState);
        }
        break;
        case UC_Drive::DCTStops:
        {
            DCTStops_serializeStates(aomsState);
        }
        break;
        case UC_Drive::SteeringThrottleDisengaged:
        {
            SteeringThrottleDisengaged_serializeStates(aomsState);
        }
        break;
        case UC_Drive::terminationstate_7:
        {
            terminationstate_7_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Drive::terminationstate_7_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_7");
}

void OMAnimatedUC_Drive::SteeringThrottleEngaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SteeringThrottleEngaged");
}

void OMAnimatedUC_Drive::SteeringThrottleDisengaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SteeringThrottleDisengaged");
}

void OMAnimatedUC_Drive::DCTStops_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTStops");
}

void OMAnimatedUC_Drive::DCTDrives_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.DCTDrives");
}

void OMAnimatedUC_Drive::ControllerEngaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerEngaged");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_Drive, TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive, false, OMAnimatedUC_Drive)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.cpp
*********************************************************************/
