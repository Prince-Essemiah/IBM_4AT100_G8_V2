/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_Drive
//!	Generated Date	: Sat, 13, Jun 2020  
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
UC_Drive::UC_Drive(IOxfActive* theActiveContext) : destinationReached(true), steeringAngle(10), stop(false), velocity(10) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_Drive, UC_Drive(), 0, TUesla_UseCaseModelling_Drive_UC_Drive_UC_Drive_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCT = NULL;
    initStatechart();
}

UC_Drive::~UC_Drive() {
    NOTIFY_DESTRUCTOR(~UC_Drive, true);
    cleanUpRelations();
    cancelTimeouts();
}

bool UC_Drive::getDestinationReached() const {
    return destinationReached;
}

void UC_Drive::setDestinationReached(bool p_destinationReached) {
    destinationReached = p_destinationReached;
}

double UC_Drive::getSteeringAngle() const {
    return steeringAngle;
}

void UC_Drive::setSteeringAngle(double p_steeringAngle) {
    steeringAngle = p_steeringAngle;
}

bool UC_Drive::getStop() const {
    return stop;
}

void UC_Drive::setStop(bool p_stop) {
    stop = p_stop;
}

double UC_Drive::getVelocity() const {
    return velocity;
}

void UC_Drive::setVelocity(double p_velocity) {
    velocity = p_velocity;
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
    rootState_timeout = NULL;
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

void UC_Drive::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool UC_Drive::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
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
            if(IS_EVENT_TYPE_OF(inputReceived_Drive_UseCaseModelling_TUesla_id))
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
        // State ControllerDisengaged
        case ControllerDisengaged:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllerDisengaged");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_6");
                    rootState_subState = terminationstate_6;
                    rootState_active = terminationstate_6;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
        }
        break;
        // State DCTDrives
        case DCTDrives:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            NOTIFY_TRANSITION_STARTED("8");
                            popNullTransition();
                            cancel(rootState_timeout);
                            //#[ state DCTDrives.(Exit) 
                            steeringAngle--;
                            velocity--;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.DCTDrives");
                            NOTIFY_STATE_ENTERED("ROOT.accepttimeevent_8");
                            pushNullTransition();
                            rootState_subState = accepttimeevent_8;
                            rootState_active = accepttimeevent_8;
                            NOTIFY_TRANSITION_TERMINATED("8");
                            res = eventConsumed;
                        }
                }
            else if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 3 
                    if(stop)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            popNullTransition();
                            cancel(rootState_timeout);
                            //#[ state DCTDrives.(Exit) 
                            steeringAngle--;
                            velocity--;
                            //#]
                            NOTIFY_STATE_EXITED("ROOT.DCTDrives");
                            NOTIFY_STATE_ENTERED("ROOT.DCTStops");
                            pushNullTransition();
                            rootState_subState = DCTStops;
                            rootState_active = DCTStops;
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State DCTStops
        case DCTStops:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 6 
                    if(destinationReached)
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("6");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.DCTStops");
                            NOTIFY_STATE_ENTERED("ROOT.ControllerDisengaged");
                            pushNullTransition();
                            rootState_subState = ControllerDisengaged;
                            rootState_active = ControllerDisengaged;
                            NOTIFY_TRANSITION_TERMINATED("6");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("4");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.DCTStops");
                            NOTIFY_STATE_ENTERED("ROOT.SteeringThrottleEngaged");
                            rootState_subState = SteeringThrottleEngaged;
                            rootState_active = SteeringThrottleEngaged;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("4");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State SteeringThrottleEngaged
        case SteeringThrottleEngaged:
        {
            if(IS_EVENT_TYPE_OF(driveDCT_Drive_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state SteeringThrottleEngaged.(Exit) 
                    stop=false;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.SteeringThrottleEngaged");
                    NOTIFY_STATE_ENTERED("ROOT.DCTDrives");
                    pushNullTransition();
                    rootState_subState = DCTDrives;
                    rootState_active = DCTDrives;
                    //#[ state DCTDrives.(Entry) 
                    if (velocity < 1e-5 && steeringAngle < 1e-5)
                    {
                     stop=true;
                    }
                     
                    //#]
                    rootState_timeout = scheduleTimeout(2000, "ROOT.DCTDrives");
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        case accepttimeevent_8:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("9");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.accepttimeevent_8");
                    NOTIFY_STATE_ENTERED("ROOT.DCTDrives");
                    pushNullTransition();
                    rootState_subState = DCTDrives;
                    rootState_active = DCTDrives;
                    //#[ state DCTDrives.(Entry) 
                    if (velocity < 1e-5 && steeringAngle < 1e-5)
                    {
                     stop=true;
                    }
                     
                    //#]
                    rootState_timeout = scheduleTimeout(2000, "ROOT.DCTDrives");
                    NOTIFY_TRANSITION_TERMINATED("9");
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
    aomsAttributes->addAttribute("destinationReached", x2String(myReal->destinationReached));
    aomsAttributes->addAttribute("steeringAngle", x2String(myReal->steeringAngle));
    aomsAttributes->addAttribute("velocity", x2String(myReal->velocity));
    aomsAttributes->addAttribute("stop", x2String(myReal->stop));
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
        case UC_Drive::ControllerDisengaged:
        {
            ControllerDisengaged_serializeStates(aomsState);
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
        case UC_Drive::SteeringThrottleEngaged:
        {
            SteeringThrottleEngaged_serializeStates(aomsState);
        }
        break;
        case UC_Drive::terminationstate_6:
        {
            terminationstate_6_serializeStates(aomsState);
        }
        break;
        case UC_Drive::accepttimeevent_8:
        {
            accepttimeevent_8_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_Drive::terminationstate_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_6");
}

void OMAnimatedUC_Drive::SteeringThrottleEngaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.SteeringThrottleEngaged");
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

void OMAnimatedUC_Drive::ControllerDisengaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerDisengaged");
}

void OMAnimatedUC_Drive::accepttimeevent_8_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.accepttimeevent_8");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_Drive, TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive, false, OMAnimatedUC_Drive)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.cpp
*********************************************************************/
