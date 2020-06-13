/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_ManualOverride
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_ManualOverride.h
*********************************************************************/

#ifndef UC_ManualOverride_H
#define UC_ManualOverride_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "ManualOverride.h"
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

//## package TUesla::UseCaseModelling::ManualOverride

//## class UC_ManualOverride
class UC_ManualOverride : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_ManualOverride;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_ManualOverride(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UC_ManualOverride();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getAutonomousMode() const;
    
    //## auto_generated
    void setAutonomousMode(bool p_autonomousMode);
    
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
    
    ////    Attributes    ////
    
    bool autonomousMode;		//## attribute autonomousMode
    
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
    
    // FrictionWheelState:
    //## statechart_method
    inline bool FrictionWheelState_IN() const;
    
    // AutonomousEnabled:
    //## statechart_method
    inline bool AutonomousEnabled_IN() const;
    
    // AutonomousDisabled:
    //## statechart_method
    inline bool AutonomousDisabled_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_ManualOverride_Enum {
        OMNonState = 0,
        FrictionWheelState = 1,
        AutonomousEnabled = 2,
        AutonomousDisabled = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_ManualOverride : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_ManualOverride, OMAnimatedUC_ManualOverride)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void FrictionWheelState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousEnabled_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void AutonomousDisabled_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_ManualOverride::rootState_IN() const {
    return true;
}

inline bool UC_ManualOverride::FrictionWheelState_IN() const {
    return rootState_subState == FrictionWheelState;
}

inline bool UC_ManualOverride::AutonomousEnabled_IN() const {
    return rootState_subState == AutonomousEnabled;
}

inline bool UC_ManualOverride::AutonomousDisabled_IN() const {
    return rootState_subState == AutonomousDisabled;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_ManualOverride.h
*********************************************************************/
