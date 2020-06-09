/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\LoadingCargo.h
*********************************************************************/

#ifndef LoadingCargo_H
#define LoadingCargo_H

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
//## link itsDCLoadingEmployee
class DCLoadingEmployee;

//## link itsDCLocalizationSystem
class DCLocalizationSystem;

//## link itsDCT
class DCT;

//## package TUesla::Usecases

//## usecase LoadingCargo
// Name: Loading Cargo
// Primary Actors: DCLoadingEmployee, DCT. DCLocalizationSystem 
// Goal: To load or unload the cargo from the trailer to the DC
// 
// Main Scenario:
// 1. DCLocalization system signals TU/esla that the DCT is Docked(DCTposition).
// 2. TU/esla informs DCloadingEmployee that DockingStatus[==true] through GUI.
// 3. DCloadingEmployee selects DoorCargo[==true] through GUI.
// 4. TU/esla signals DCT to open CargoDoor.
// 5. DCloadingEmployee Loads the Cargo from DC to trailer.
// 6. DCloadingEmployee again selects DoorCargo[==false] through GUI.
// 7. TU/esla signals DCT to close CargoDoor.
// 8. TU/esla sets DockingStatus[==false]
// 
class LoadingCargo : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedLoadingCargo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    LoadingCargo(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~LoadingCargo();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLoadingEmployee* getItsDCLoadingEmployee() const;
    
    //## auto_generated
    void setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    DCLocalizationSystem* getItsDCLocalizationSystem() const;
    
    //## auto_generated
    void setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
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
    
    DCLoadingEmployee* itsDCLoadingEmployee;		//## link itsDCLoadingEmployee
    
    DCLocalizationSystem* itsDCLocalizationSystem;		//## link itsDCLocalizationSystem
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _clearItsDCLoadingEmployee();
    
    //## auto_generated
    void __setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _clearItsDCLocalizationSystem();
    
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
    
    // waitForDock:
    //## statechart_method
    inline bool waitForDock_IN() const;
    
    // CargoDoorOpen:
    //## statechart_method
    inline bool CargoDoorOpen_IN() const;
    
    // CargoDoorClosed:
    //## statechart_method
    inline bool CargoDoorClosed_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum LoadingCargo_Enum {
        OMNonState = 0,
        waitForDock = 1,
        CargoDoorOpen = 2,
        CargoDoorClosed = 3
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedLoadingCargo : virtual public AOMInstance {
    DECLARE_REACTIVE_META(LoadingCargo, OMAnimatedLoadingCargo)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waitForDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CargoDoorOpen_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CargoDoorClosed_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool LoadingCargo::rootState_IN() const {
    return true;
}

inline bool LoadingCargo::waitForDock_IN() const {
    return rootState_subState == waitForDock;
}

inline bool LoadingCargo::CargoDoorOpen_IN() const {
    return rootState_subState == CargoDoorOpen;
}

inline bool LoadingCargo::CargoDoorClosed_IN() const {
    return rootState_subState == CargoDoorClosed;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\LoadingCargo.h
*********************************************************************/
