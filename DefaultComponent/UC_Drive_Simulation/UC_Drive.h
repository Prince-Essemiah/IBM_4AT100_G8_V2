/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_Drive
//!	Generated Date	: Sat, 13, Jun 2020  
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
    void setDestinationReached(bool p_destinationReached);
    
    //## auto_generated
    double getSteeringAngle() const;
    
    //## auto_generated
    void setSteeringAngle(double p_steeringAngle);
    
    //## auto_generated
    bool getStop() const;
    
    //## auto_generated
    void setStop(bool p_stop);
    
    //## auto_generated
    double getVelocity() const;
    
    //## auto_generated
    void setVelocity(double p_velocity);
    
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
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    bool destinationReached;		//## attribute destinationReached
    
    double steeringAngle;		//## attribute steeringAngle
    
    bool stop;		//## attribute stop
    
    double velocity;		//## attribute velocity
    
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
    
    // terminationstate_6:
    //## statechart_method
    inline bool terminationstate_6_IN() const;
    
    // SteeringThrottleEngaged:
    //## statechart_method
    inline bool SteeringThrottleEngaged_IN() const;
    
    // DCTStops:
    //## statechart_method
    inline bool DCTStops_IN() const;
    
    // DCTDrives:
    //## statechart_method
    inline bool DCTDrives_IN() const;
    
    // ControllerEngaged:
    //## statechart_method
    inline bool ControllerEngaged_IN() const;
    
    // ControllerDisengaged:
    //## statechart_method
    inline bool ControllerDisengaged_IN() const;
    
    // accepttimeevent_8:
    //## statechart_method
    inline bool accepttimeevent_8_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_Drive_Enum {
        OMNonState = 0,
        terminationstate_6 = 1,
        SteeringThrottleEngaged = 2,
        DCTStops = 3,
        DCTDrives = 4,
        ControllerEngaged = 5,
        ControllerDisengaged = 6,
        accepttimeevent_8 = 7
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
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
    void terminationstate_6_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void SteeringThrottleEngaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTStops_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void DCTDrives_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllerEngaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void ControllerDisengaged_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void accepttimeevent_8_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_Drive::rootState_IN() const {
    return true;
}

inline bool UC_Drive::rootState_isCompleted() {
    return ( IS_IN(terminationstate_6) );
}

inline bool UC_Drive::terminationstate_6_IN() const {
    return rootState_subState == terminationstate_6;
}

inline bool UC_Drive::SteeringThrottleEngaged_IN() const {
    return rootState_subState == SteeringThrottleEngaged;
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

inline bool UC_Drive::ControllerDisengaged_IN() const {
    return rootState_subState == ControllerDisengaged;
}

inline bool UC_Drive::accepttimeevent_8_IN() const {
    return rootState_subState == accepttimeevent_8;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\UC_Drive.h
*********************************************************************/
