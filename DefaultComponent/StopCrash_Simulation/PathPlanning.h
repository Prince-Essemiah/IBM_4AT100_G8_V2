/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\PathPlanning.h
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
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // PathPlannerEnabled:
    //## statechart_method
    inline bool PathPlannerEnabled_IN() const;
    
    // PathPlannerDisabled:
    //## statechart_method
    inline bool PathPlannerDisabled_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum PathPlanning_Enum {
        OMNonState = 0,
        PathPlannerEnabled = 1,
        PathPlannerDisabled = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPathPlanning : virtual public AOMInstance {
    DECLARE_REACTIVE_META(PathPlanning, OMAnimatedPathPlanning)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathPlannerEnabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathPlannerDisabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool PathPlanning::rootState_IN() const {
    return true;
}

inline bool PathPlanning::PathPlannerEnabled_IN() const {
    return rootState_subState == PathPlannerEnabled;
}

inline bool PathPlanning::PathPlannerDisabled_IN() const {
    return rootState_subState == PathPlannerDisabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\PathPlanning.h
*********************************************************************/
