/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: ManualOverrideAutonomousMode
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\ManualOverrideAutonomousMode.h
*********************************************************************/

#ifndef ManualOverrideAutonomousMode_H
#define ManualOverrideAutonomousMode_H

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

//## package TUesla::Usecases

//## usecase ManualOverrideAutonomousMode
// Name: Manual Override Autonomous Mode 
// Primary Actors: DCLogisticEmployee
// Secondary Actors : DCT
// Goal: Engage/Disengage autonomous mode (return to normal operation)
// 
// Main Scenario:
// 1. DCLogisticEmployee requests to ManualOverride[==true].
// 2. TU/esla signals DCT  OverrideManual=[==true].
// 3. Autonomous mode is engaged
// Alternative Flow
// 1. DCLogisticEmployee requests to ManualOverride[==false].
// 2. TU/esla signals DCT  OverrideManual[==false].
// 3. Autonomous mode is disengaged
class ManualOverrideAutonomousMode : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedManualOverrideAutonomousMode;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ManualOverrideAutonomousMode(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ManualOverrideAutonomousMode();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // ManualOverride:
    //## statechart_method
    inline bool ManualOverride_IN() const;
    
    // AutonomousEnabled:
    //## statechart_method
    inline bool AutonomousEnabled_IN() const;
    
    // AutonomousDisabled:
    //## statechart_method
    inline bool AutonomousDisabled_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ManualOverrideAutonomousMode_Enum {
        OMNonState = 0,
        ManualOverride = 1,
        AutonomousEnabled = 2,
        AutonomousDisabled = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedManualOverrideAutonomousMode : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ManualOverrideAutonomousMode, OMAnimatedManualOverrideAutonomousMode)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ManualOverride_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousEnabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousDisabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ManualOverrideAutonomousMode::rootState_IN() const {
    return true;
}

inline bool ManualOverrideAutonomousMode::ManualOverride_IN() const {
    return rootState_subState == ManualOverride;
}

inline bool ManualOverrideAutonomousMode::AutonomousEnabled_IN() const {
    return rootState_subState == AutonomousEnabled;
}

inline bool ManualOverrideAutonomousMode::AutonomousDisabled_IN() const {
    return rootState_subState == AutonomousDisabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\ManualOverrideAutonomousMode.h
*********************************************************************/
