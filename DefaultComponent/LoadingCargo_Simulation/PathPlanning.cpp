/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\PathPlanning.cpp
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
PathPlanning::PathPlanning(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(PathPlanning, PathPlanning(), 0, TUesla_Usecases_PathPlanning_PathPlanning_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLocalizationSystem = NULL;
    initStatechart();
}

PathPlanning::~PathPlanning() {
    NOTIFY_DESTRUCTOR(~PathPlanning, true);
    cleanUpRelations();
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
        NOTIFY_STATE_ENTERED("ROOT.PathPlannerDisabled");
        rootState_subState = PathPlannerDisabled;
        rootState_active = PathPlannerDisabled;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus PathPlanning::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State PathPlannerDisabled
        case PathPlannerDisabled:
        {
            if(IS_EVENT_TYPE_OF(receiveInformation_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerDisabled");
                    NOTIFY_STATE_ENTERED("ROOT.PathPlannerEnabled");
                    pushNullTransition();
                    rootState_subState = PathPlannerEnabled;
                    rootState_active = PathPlannerEnabled;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State PathPlannerEnabled
        case PathPlannerEnabled:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    popNullTransition();
                    NOTIFY_STATE_EXITED("ROOT.PathPlannerEnabled");
                    endBehavior();
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
        case PathPlanning::PathPlannerDisabled:
        {
            PathPlannerDisabled_serializeStates(aomsState);
        }
        break;
        case PathPlanning::PathPlannerEnabled:
        {
            PathPlannerEnabled_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedPathPlanning::PathPlannerEnabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerEnabled");
}

void OMAnimatedPathPlanning::PathPlannerDisabled_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.PathPlannerDisabled");
}
//#]

IMPLEMENT_REACTIVE_META_P(PathPlanning, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedPathPlanning)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\PathPlanning.cpp
*********************************************************************/
