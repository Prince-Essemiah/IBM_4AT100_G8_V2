/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_StopCrash
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_StopCrash.h
*********************************************************************/

#ifndef UC_StopCrash_H
#define UC_StopCrash_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "StopCrash.h"
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

//## package TUesla::UseCaseModelling::StopCrash

//## class UC_StopCrash
class UC_StopCrash : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_StopCrash;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_StopCrash(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UC_StopCrash();
    
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
    enum UC_StopCrash_Enum {
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
class OMAnimatedUC_StopCrash : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_StopCrash, OMAnimatedUC_StopCrash)
    
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

inline bool UC_StopCrash::rootState_IN() const {
    return true;
}

inline bool UC_StopCrash::rootState_isCompleted() {
    return ( IS_IN(terminationstate_5) );
}

inline bool UC_StopCrash::terminationstate_5_IN() const {
    return rootState_subState == terminationstate_5;
}

inline bool UC_StopCrash::PathPlannerEnabled_IN() const {
    return rootState_subState == PathPlannerEnabled;
}

inline bool UC_StopCrash::PathPlannerDisabled_IN() const {
    return rootState_subState == PathPlannerDisabled;
}

inline bool UC_StopCrash::DCTManualOverride_IN() const {
    return rootState_subState == DCTManualOverride;
}

inline bool UC_StopCrash::DCTBrakes_IN() const {
    return rootState_subState == DCTBrakes;
}

inline bool UC_StopCrash::ControllerDisengaged_IN() const {
    return rootState_subState == ControllerDisengaged;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_StopCrash.h
*********************************************************************/
