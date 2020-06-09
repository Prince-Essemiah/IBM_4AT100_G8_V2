/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\PathPlanning.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "PathPlanning.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//#[ ignore
#define TUesla_Usecases_PathPlanning_PathPlanning_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase PathPlanning
PathPlanning::PathPlanning(IOxfActive* theActiveContext) : Obstacles(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PathPlanning, PathPlanning(), 0, TUesla_Usecases_PathPlanning_PathPlanning_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLocalizationSystem = NULL;
    initStatechart();
}

PathPlanning::~PathPlanning() {
    NOTIFY_DESTRUCTOR(~PathPlanning, true);
    cleanUpRelations();
}

bool PathPlanning::getObstacles() const {
    return Obstacles;
}

void PathPlanning::setObstacles(bool p_Obstacles) {
    Obstacles = p_Obstacles;
}

DCLocalizationSystem* PathPlanning::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void PathPlanning::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsPathPlanning(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

bool PathPlanning::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void PathPlanning::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    ObstacleDetection_subState = OMNonState;
}

void PathPlanning::cleanUpRelations() {
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            PathPlanning* p_PathPlanning = itsDCLocalizationSystem->getItsPathPlanning();
            if(p_PathPlanning != NULL)
                {
                    itsDCLocalizationSystem->__setItsPathPlanning(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
}

void PathPlanning::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    itsDCLocalizationSystem = p_DCLocalizationSystem;
    if(p_DCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLocalizationSystem", p_DCLocalizationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
        }
}

void PathPlanning::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsPathPlanning(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void PathPlanning::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void PathPlanning::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.PathPlannerEngaged");
        rootState_subState = PathPlannerEngaged;
        rootState_active = PathPlannerEngaged;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PathPlanning::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PathPlannerEngaged
        case PathPlannerEngaged:
        {
            if(IS_EVENT_TYPE_OF(receiveInformation_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerEngaged");
                    ObstacleDetection_entDef();
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ControllerInputReceived
        case ControllerInputReceived:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllerInputReceived");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_6");
                    rootState_subState = terminationstate_6;
                    rootState_active = terminationstate_6;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ObstaclesDetected
        case ObstaclesDetected:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("4");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesDetected");
                    NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.CoordinatesSent");
                    ObstacleDetection_subState = CoordinatesSent;
                    rootState_active = CoordinatesSent;
                    NOTIFY_TRANSITION_TERMINATED("4");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ObstaclesNotDetected
        case ObstaclesNotDetected:
        {
            if(IS_EVENT_TYPE_OF(PathPlanned_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("7");
                    switch (ObstacleDetection_subState) {
                        // State ObstaclesDetected
                        case ObstaclesDetected:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesDetected");
                        }
                        break;
                        // State ObstaclesNotDetected
                        case ObstaclesNotDetected:
                        {
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesNotDetected");
                        }
                        break;
                        // State CoordinatesSent
                        case CoordinatesSent:
                        {
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.CoordinatesSent");
                        }
                        break;
                        default:
                            break;
                    }
                    ObstacleDetection_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.ObstacleDetection");
                    NOTIFY_STATE_ENTERED("ROOT.ControllerInputReceived");
                    pushNullTransition();
                    rootState_subState = ControllerInputReceived;
                    rootState_active = ControllerInputReceived;
                    NOTIFY_TRANSITION_TERMINATED("7");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State CoordinatesSent
        case CoordinatesSent:
        {
            if(IS_EVENT_TYPE_OF(PathPlanned_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("8");
                    switch (ObstacleDetection_subState) {
                        // State ObstaclesDetected
                        case ObstaclesDetected:
                        {
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesDetected");
                        }
                        break;
                        // State ObstaclesNotDetected
                        case ObstaclesNotDetected:
                        {
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesNotDetected");
                        }
                        break;
                        // State CoordinatesSent
                        case CoordinatesSent:
                        {
                            NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.CoordinatesSent");
                        }
                        break;
                        default:
                            break;
                    }
                    ObstacleDetection_subState = OMNonState;
                    NOTIFY_STATE_EXITED("ROOT.ObstacleDetection");
                    NOTIFY_STATE_ENTERED("ROOT.ControllerInputReceived");
                    pushNullTransition();
                    rootState_subState = ControllerInputReceived;
                    rootState_active = ControllerInputReceived;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

void PathPlanning::ObstacleDetection_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection");
    rootState_subState = ObstacleDetection;
    ObstacleDetectionEntDef();
}

void PathPlanning::ObstacleDetectionEntDef() {
    //## transition 5 
    if(Obstacles)
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.ObstaclesDetected");
            pushNullTransition();
            ObstacleDetection_subState = ObstaclesDetected;
            rootState_active = ObstaclesDetected;
            NOTIFY_TRANSITION_TERMINATED("5");
            NOTIFY_TRANSITION_TERMINATED("3");
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("6");
            NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.ObstaclesNotDetected");
            ObstacleDetection_subState = ObstaclesNotDetected;
            rootState_active = ObstaclesNotDetected;
            NOTIFY_TRANSITION_TERMINATED("6");
            NOTIFY_TRANSITION_TERMINATED("3");
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedPathPlanning::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("Obstacles", x2String(myReal->Obstacles));
}

void OMAnimatedPathPlanning::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
}

void OMAnimatedPathPlanning::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case PathPlanning::PathPlannerEngaged:
        {
            PathPlannerEngaged_serializeStates(aomsState);
        }
        break;
        case PathPlanning::ControllerInputReceived:
        {
            ControllerInputReceived_serializeStates(aomsState);
        }
        break;
        case PathPlanning::ObstacleDetection:
        {
            ObstacleDetection_serializeStates(aomsState);
        }
        break;
        case PathPlanning::terminationstate_6:
        {
            terminationstate_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPathPlanning::terminationstate_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_6");
}

void OMAnimatedPathPlanning::PathPlannerEngaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerEngaged");
}

void OMAnimatedPathPlanning::ObstacleDetection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection");
    switch (myReal->ObstacleDetection_subState) {
        case PathPlanning::ObstaclesDetected:
        {
            ObstaclesDetected_serializeStates(aomsState);
        }
        break;
        case PathPlanning::ObstaclesNotDetected:
        {
            ObstaclesNotDetected_serializeStates(aomsState);
        }
        break;
        case PathPlanning::CoordinatesSent:
        {
            CoordinatesSent_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPathPlanning::ObstaclesNotDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.ObstaclesNotDetected");
}

void OMAnimatedPathPlanning::ObstaclesDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.ObstaclesDetected");
}

void OMAnimatedPathPlanning::CoordinatesSent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.CoordinatesSent");
}

void OMAnimatedPathPlanning::ControllerInputReceived_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerInputReceived");
}
//#]

IMPLEMENT_REACTIVE_META_P(PathPlanning, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedPathPlanning)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\PathPlanning.cpp
*********************************************************************/
