/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\PathPlanning.h
*********************************************************************/

#ifndef PathPlanning_H
#define PathPlanning_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Usecases.h"
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

//## package TUesla::Usecases

//## usecase PathPlanning
// Name: Path planning
// Primary Actors:  DCLocalizationSystem
// Goal: TU/esla plans path from current position to desired destination based on obstacles.
// 
// Main Scenario:
// 1. PathPlanner receives DCTPosition and Obstacles from DCLocalizationSystem.
// 2. Destination(PBSelect,LDSelect,ChargingPad) is received by the PathPlanner
// //3. OtherDCT information is made available to the PathPlanner.
// 3. PathPlanner plans the route from DCTPosition to the Destination based on Obstacles.
// 4. PathPlanner sends the calculated SteeringAngle and Velocity to Controller.
class PathPlanning : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlanning;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlanning(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~PathPlanning();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getObstacles() const;
    
    //## auto_generated
    void setObstacles(bool p_Obstacles);
    
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
    
    bool Obstacles;		//## attribute Obstacles
    
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
    enum PathPlanning_Enum {
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
class OMAnimatedPathPlanning : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PathPlanning, OMAnimatedPathPlanning)
    
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

inline bool PathPlanning::rootState_IN() const {
    return true;
}

inline bool PathPlanning::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool PathPlanning::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool PathPlanning::PathPlannerEngaged_IN() const {
    return rootState_subState == PathPlannerEngaged;
}

inline bool PathPlanning::ObstacleDetection_IN() const {
    return rootState_subState == ObstacleDetection;
}

inline bool PathPlanning::ObstaclesNotDetected_IN() const {
    return ObstacleDetection_subState == ObstaclesNotDetected;
}

inline bool PathPlanning::ObstaclesDetected_IN() const {
    return ObstacleDetection_subState == ObstaclesDetected;
}

inline bool PathPlanning::CoordinatesSent_IN() const {
    return ObstacleDetection_subState == CoordinatesSent;
}

inline bool PathPlanning::ControllerInputReceived_IN() const {
    return rootState_subState == ControllerInputReceived;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\PathPlanning.h
*********************************************************************/
