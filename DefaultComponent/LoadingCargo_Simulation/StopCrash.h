/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: StopCrash
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\StopCrash.h
*********************************************************************/

#ifndef StopCrash_H
#define StopCrash_H

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
//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## link itsDCT
class DCT;

//## link itsSensors
class Sensors;

//## package TUesla::Usecases

//## usecase StopCrash
// Name: Stop in case of crash
// Primary Actors: DCT, Sensors 
// Secondary Actor: DCLogisticEmployee
// Goal: Disengage autonomous mode automatically in case of crash or severe malfunction.
// 
// Main Scenario:
// 1. Crash of DCT is being noticed by Sensor.
// 2. Sensor sends CrashDetect[==true] to the controller.
// 3. Controller disables PathPlanner inputs.
// 4. Controller applies EmergencyBrake[==true] to the DCT by means of a Friction Wheel.
// 5. Controller send OverrideManual[==true] signal to DCT, once the DCTVelocity is 0.
// 6. TU/esla sends CrashMaintenace[==true] signal to the DCLogisticEmployee through GUI.
// 7. Controller Disengages
//  
class StopCrash : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedStopCrash;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    StopCrash(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~StopCrash();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee_1() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    Sensors* getItsSensors() const;
    
    //## auto_generated
    void setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    DCLogisticEmployee* itsDCLogisticEmployee_1;		//## link itsDCLogisticEmployee_1
    
    DCT* itsDCT;		//## link itsDCT
    
    Sensors* itsSensors;		//## link itsSensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    //## auto_generated
    void __setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee_1(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee_1();
    
    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
    
    //## auto_generated
    void __setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    void _clearItsSensors();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_5:
    //## statechart_method
    inline bool terminationstate_5_IN() const;
    
    // PathPlannerEnabled:
    //## statechart_method
    inline bool PathPlannerEnabled_IN() const;
    
    // PathPlannerDisabled:
    //## statechart_method
    inline bool PathPlannerDisabled_IN() const;
    
    // DCTManualOverride:
    //## statechart_method
    inline bool DCTManualOverride_IN() const;
    
    // DCTBrakes:
    //## statechart_method
    inline bool DCTBrakes_IN() const;
    
    // ControllerDisengaged:
    //## statechart_method
    inline bool ControllerDisengaged_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum StopCrash_Enum {
        OMNonState = 0,
        terminationstate_5 = 1,
        PathPlannerEnabled = 2,
        PathPlannerDisabled = 3,
        DCTManualOverride = 4,
        DCTBrakes = 5,
        ControllerDisengaged = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedStopCrash : virtual public AOMInstance {
    DECLARE_REACTIVE_META(StopCrash, OMAnimatedStopCrash)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_5_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathPlannerEnabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void PathPlannerDisabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTManualOverride_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTBrakes_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllerDisengaged_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool StopCrash::rootState_IN() const {
    return true;
}

inline bool StopCrash::rootState_isCompleted() {
    return ( IS_IN(terminationstate_5) );
}

inline bool StopCrash::terminationstate_5_IN() const {
    return rootState_subState == terminationstate_5;
}

inline bool StopCrash::PathPlannerEnabled_IN() const {
    return rootState_subState == PathPlannerEnabled;
}

inline bool StopCrash::PathPlannerDisabled_IN() const {
    return rootState_subState == PathPlannerDisabled;
}

inline bool StopCrash::DCTManualOverride_IN() const {
    return rootState_subState == DCTManualOverride;
}

inline bool StopCrash::DCTBrakes_IN() const {
    return rootState_subState == DCTBrakes;
}

inline bool StopCrash::ControllerDisengaged_IN() const {
    return rootState_subState == ControllerDisengaged;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\StopCrash.h
*********************************************************************/
