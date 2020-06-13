/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_PathPlanning
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_PathPlanning.h
*********************************************************************/

#ifndef UC_PathPlanning_H
#define UC_PathPlanning_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "PathPlanning.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## link itsDCLocalizationSystem
class DCLocalizationSystem;

//## package TUesla::UseCaseModelling::PathPlanning

//## class UC_PathPlanning
class UC_PathPlanning : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_PathPlanning;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_PathPlanning(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UC_PathPlanning();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getObstacles() const;
    
    //## auto_generated
    void setObstacles(bool p_obstacles);
    
    //## auto_generated
    DCLocalizationSystem* getItsDCLocalizationSystem() const;
    
    //## auto_generated
    void setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool obstacles;		//## attribute obstacles
    
    ////    Relations and components    ////
    
    DCLocalizationSystem* itsDCLocalizationSystem;		//## link itsDCLocalizationSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _clearItsDCLocalizationSystem();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_6:
    //## statechart_method
    inline bool terminationstate_6_IN() const;
    
    // PathPlannerEngaged:
    //## statechart_method
    inline bool PathPlannerEngaged_IN() const;
    
    // ObstacleDetection:
    //## statechart_method
    inline bool ObstacleDetection_IN() const;
    
    //## statechart_method
    void ObstacleDetection_entDef();
    
    //## statechart_method
    void ObstacleDetectionEntDef();
    
    // ObstaclesNotDetected:
    //## statechart_method
    inline bool ObstaclesNotDetected_IN() const;
    
    // ObstaclesDetected:
    //## statechart_method
    inline bool ObstaclesDetected_IN() const;
    
    // CoordinatesSent:
    //## statechart_method
    inline bool CoordinatesSent_IN() const;
    
    // ControllerInputReceived:
    //## statechart_method
    inline bool ControllerInputReceived_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_PathPlanning_Enum {
        OMNonState = 0,
        terminationstate_6 = 1,
        PathPlannerEngaged = 2,
        ObstacleDetection = 3,
        ObstaclesNotDetected = 4,
        ObstaclesDetected = 5,
        CoordinatesSent = 6,
        ControllerInputReceived = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    int ObstacleDetection_subState;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_PathPlanning : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_PathPlanning, OMAnimatedUC_PathPlanning)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathPlannerEngaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ObstacleDetection_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ObstaclesNotDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ObstaclesDetected_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CoordinatesSent_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllerInputReceived_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_PathPlanning::rootState_IN() const {
    return true;
}

inline bool UC_PathPlanning::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool UC_PathPlanning::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool UC_PathPlanning::PathPlannerEngaged_IN() const {
    return rootState_subState == PathPlannerEngaged;
}

inline bool UC_PathPlanning::ObstacleDetection_IN() const {
    return rootState_subState == ObstacleDetection;
}

inline bool UC_PathPlanning::ObstaclesNotDetected_IN() const {
    return ObstacleDetection_subState == ObstaclesNotDetected;
}

inline bool UC_PathPlanning::ObstaclesDetected_IN() const {
    return ObstacleDetection_subState == ObstaclesDetected;
}

inline bool UC_PathPlanning::CoordinatesSent_IN() const {
    return ObstacleDetection_subState == CoordinatesSent;
}

inline bool UC_PathPlanning::ControllerInputReceived_IN() const {
    return rootState_subState == ControllerInputReceived;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_PathPlanning.h
*********************************************************************/
