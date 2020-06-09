/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_Drive
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.h
*********************************************************************/

#ifndef UC_Drive_H
#define UC_Drive_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Drive.h"
//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\omcollec.h>
//## link itsDCT
class DCT;

//## package TUesla::UseCaseModelling::Drive

//## class UC_Drive
class UC_Drive : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_Drive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_Drive(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UC_Drive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getDestinationReached() const;
    
    //## auto_generated
    void setDestinationReached(bool p_DestinationReached);
    
    //## auto_generated
    OMIterator<int> getSteeringAngle() const;
    
    //## auto_generated
    void setSteeringAngle(int p_SteeringAngle);
    
    //## auto_generated
    int getVelocity() const;
    
    //## auto_generated
    void setVelocity(int p_Velocity);
    
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
    
    bool DestinationReached;		//## attribute DestinationReached
    
    OMCollection<int> SteeringAngle;		//## attribute SteeringAngle
    
    int Velocity;		//## attribute Velocity
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

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
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // terminationstate_7:
    //## statechart_method
    inline bool terminationstate_7_IN() const;
    
    // SteeringThrottleEngaged:
    //## statechart_method
    inline bool SteeringThrottleEngaged_IN() const;
    
    // SteeringThrottleDisengaged:
    //## statechart_method
    inline bool SteeringThrottleDisengaged_IN() const;
    
    // DCTStops:
    //## statechart_method
    inline bool DCTStops_IN() const;
    
    // DCTDrives:
    //## statechart_method
    inline bool DCTDrives_IN() const;
    
    // ControllerEngaged:
    //## statechart_method
    inline bool ControllerEngaged_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_Drive_Enum {
        OMNonState = 0,
        terminationstate_7 = 1,
        SteeringThrottleEngaged = 2,
        SteeringThrottleDisengaged = 3,
        DCTStops = 4,
        DCTDrives = 5,
        ControllerEngaged = 6
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_Drive : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_Drive, OMAnimatedUC_Drive)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_7_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SteeringThrottleEngaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SteeringThrottleDisengaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTStops_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTDrives_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllerEngaged_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_Drive::rootState_IN() const {
    return true;
}

inline bool UC_Drive::rootState_isCompleted() {
    return ( IS_IN(terminationstate_7) );
}

inline bool UC_Drive::terminationstate_7_IN() const {
    return rootState_subState == terminationstate_7;
}

inline bool UC_Drive::SteeringThrottleEngaged_IN() const {
    return rootState_subState == SteeringThrottleEngaged;
}

inline bool UC_Drive::SteeringThrottleDisengaged_IN() const {
    return rootState_subState == SteeringThrottleDisengaged;
}

inline bool UC_Drive::DCTStops_IN() const {
    return rootState_subState == DCTStops;
}

inline bool UC_Drive::DCTDrives_IN() const {
    return rootState_subState == DCTDrives;
}

inline bool UC_Drive::ControllerEngaged_IN() const {
    return rootState_subState == ControllerEngaged;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.h
*********************************************************************/
