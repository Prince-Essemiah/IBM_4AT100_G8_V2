/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_PathPlanning
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_PathPlanning.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_PathPlanning.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//#[ ignore
#define TUesla_UseCaseModelling_PathPlanning_UC_PathPlanning_UC_PathPlanning_SERIALIZE OM_NO_OP
//#]

//## package TUesla::UseCaseModelling::PathPlanning

//## class UC_PathPlanning
UC_PathPlanning::UC_PathPlanning(IOxfActive* theActiveContext) : obstacles(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_PathPlanning, UC_PathPlanning(), 0, TUesla_UseCaseModelling_PathPlanning_UC_PathPlanning_UC_PathPlanning_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLocalizationSystem = NULL;
    initStatechart();
}

UC_PathPlanning::~UC_PathPlanning() {
    NOTIFY_DESTRUCTOR(~UC_PathPlanning, true);
    cleanUpRelations();
}

bool UC_PathPlanning::getObstacles() const {
    return obstacles;
}

void UC_PathPlanning::setObstacles(bool p_obstacles) {
    obstacles = p_obstacles;
}

DCLocalizationSystem* UC_PathPlanning::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void UC_PathPlanning::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsUC_PathPlanning(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

bool UC_PathPlanning::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_PathPlanning::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    ObstacleDetection_subState = OMNonState;
}

void UC_PathPlanning::cleanUpRelations() {
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            UC_PathPlanning* p_UC_PathPlanning = itsDCLocalizationSystem->getItsUC_PathPlanning();
            if(p_UC_PathPlanning != NULL)
                {
                    itsDCLocalizationSystem->__setItsUC_PathPlanning(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
}

void UC_PathPlanning::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
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

void UC_PathPlanning::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsUC_PathPlanning(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void UC_PathPlanning::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void UC_PathPlanning::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.PathPlannerEngaged");
        rootState_subState = PathPlannerEngaged;
        rootState_active = PathPlannerEngaged;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_PathPlanning::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PathPlannerEngaged
        case PathPlannerEngaged:
        {
            if(IS_EVENT_TYPE_OF(receiveInformation_PathPlanning_UseCaseModelling_TUesla_id))
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
                    NOTIFY_TRANSITION_STARTED("8");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ControllerInputReceived");
                    NOTIFY_STATE_ENTERED("ROOT.terminationstate_6");
                    rootState_subState = terminationstate_6;
                    rootState_active = terminationstate_6;
                    NOTIFY_TRANSITION_TERMINATED("8");
                    res = eventConsumed;
                }
            
        }
        break;
        // State ObstaclesDetected
        case ObstaclesDetected:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("6");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.ObstacleDetection.ObstaclesDetected");
                    NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.CoordinatesSent");
                    ObstacleDetection_subState = CoordinatesSent;
                    rootState_active = CoordinatesSent;
                    NOTIFY_TRANSITION_TERMINATED("6");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State ObstaclesNotDetected
        case ObstaclesNotDetected:
        {
            if(IS_EVENT_TYPE_OF(pathPlanned_PathPlanning_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
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
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
            
        }
        break;
        // State CoordinatesSent
        case CoordinatesSent:
        {
            if(IS_EVENT_TYPE_OF(pathPlanned_PathPlanning_UseCaseModelling_TUesla_id))
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
        
        default:
            break;
    }
    return res;
}

void UC_PathPlanning::ObstacleDetection_entDef() {
    NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection");
    rootState_subState = ObstacleDetection;
    ObstacleDetectionEntDef();
}

void UC_PathPlanning::ObstacleDetectionEntDef() {
    //## transition 4 
    if(obstacles)
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("4");
            NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.ObstaclesDetected");
            pushNullTransition();
            ObstacleDetection_subState = ObstaclesDetected;
            rootState_active = ObstaclesDetected;
            NOTIFY_TRANSITION_TERMINATED("4");
            NOTIFY_TRANSITION_TERMINATED("3");
        }
    else
        {
            NOTIFY_TRANSITION_STARTED("3");
            NOTIFY_TRANSITION_STARTED("5");
            NOTIFY_STATE_ENTERED("ROOT.ObstacleDetection.ObstaclesNotDetected");
            ObstacleDetection_subState = ObstaclesNotDetected;
            rootState_active = ObstaclesNotDetected;
            NOTIFY_TRANSITION_TERMINATED("5");
            NOTIFY_TRANSITION_TERMINATED("3");
        }
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedUC_PathPlanning::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("obstacles", x2String(myReal->obstacles));
}

void OMAnimatedUC_PathPlanning::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
}

void OMAnimatedUC_PathPlanning::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_PathPlanning::PathPlannerEngaged:
        {
            PathPlannerEngaged_serializeStates(aomsState);
        }
        break;
        case UC_PathPlanning::ControllerInputReceived:
        {
            ControllerInputReceived_serializeStates(aomsState);
        }
        break;
        case UC_PathPlanning::ObstacleDetection:
        {
            ObstacleDetection_serializeStates(aomsState);
        }
        break;
        case UC_PathPlanning::terminationstate_6:
        {
            terminationstate_6_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_PathPlanning::terminationstate_6_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_6");
}

void OMAnimatedUC_PathPlanning::PathPlannerEngaged_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerEngaged");
}

void OMAnimatedUC_PathPlanning::ObstacleDetection_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection");
    switch (myReal->ObstacleDetection_subState) {
        case UC_PathPlanning::ObstaclesDetected:
        {
            ObstaclesDetected_serializeStates(aomsState);
        }
        break;
        case UC_PathPlanning::ObstaclesNotDetected:
        {
            ObstaclesNotDetected_serializeStates(aomsState);
        }
        break;
        case UC_PathPlanning::CoordinatesSent:
        {
            CoordinatesSent_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_PathPlanning::ObstaclesNotDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.ObstaclesNotDetected");
}

void OMAnimatedUC_PathPlanning::ObstaclesDetected_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.ObstaclesDetected");
}

void OMAnimatedUC_PathPlanning::CoordinatesSent_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ObstacleDetection.CoordinatesSent");
}

void OMAnimatedUC_PathPlanning::ControllerInputReceived_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.ControllerInputReceived");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_PathPlanning, TUesla_UseCaseModelling_PathPlanning, TUesla::UseCaseModelling::PathPlanning, false, OMAnimatedUC_PathPlanning)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_PathPlanning.cpp
*********************************************************************/
