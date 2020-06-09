/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: ParkingAssign
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\ParkingAssign.h
*********************************************************************/

#ifndef ParkingAssign_H
#define ParkingAssign_H

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
//## link itsDCBoard
class DCBoard;

//## link itsDCLocalizationSystem
class DCLocalizationSystem;

//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## package TUesla::Usecases

//## usecase ParkingAssign
// Name:  Parking Assign
// Primary Actors:  DCLocalizationSystem, DCLogisticEmployee
// Secondary Actors : DCBoard
// Goal:  To assign a LD or PB number to drive towards.
// Main Scenario:
// 1.  PBinfo information is sent to TU/esla.
// 2. TU/esla makes infoPB available to the DCLogisticEmployee through GUI.
// 3. DCLogisticEmployee selects the PBSelect and sent to TU/esla.
// 4. TU/esla sends the PBSelect to PathPlanner.
// Alternative Flow 1:
// 1.1 LDinfo information is sent to TU/esla.
// 1.2 TU/esla makes infoLD available to the DCLogisticEmployee through GUI.
// 1.3. DCLogisticEmployee selects the LDSelect and sent to TU/esla.
// 1.4. TU/esla sends the LDSelect to PathPlanner.
// Alternative Flow 2:
// 4.1 TU/esla sends SelectPB to DCBoard.
// 
// 
class ParkingAssign : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedParkingAssign;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ParkingAssign(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~ParkingAssign();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCBoard* getItsDCBoard() const;
    
    //## auto_generated
    void setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    DCLocalizationSystem* getItsDCLocalizationSystem() const;
    
    //## auto_generated
    void setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCBoard* itsDCBoard;		//## link itsDCBoard
    
    DCLocalizationSystem* itsDCLocalizationSystem;		//## link itsDCLocalizationSystem
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    void _setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    void _clearItsDCBoard();
    
    //## auto_generated
    void __setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _clearItsDCLocalizationSystem();
    
    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    ////    Framework    ////

protected :

//#[ ignore
    enum ParkingAssign_Enum {
        OMNonState = 0
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedParkingAssign : virtual public AOMInstance {
    DECLARE_REACTIVE_META(ParkingAssign, OMAnimatedParkingAssign)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool ParkingAssign::rootState_IN() const {
    return true;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\ParkingAssign.h
*********************************************************************/
