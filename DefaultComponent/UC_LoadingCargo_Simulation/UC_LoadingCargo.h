/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: UC_LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\UC_LoadingCargo.h
*********************************************************************/

#ifndef UC_LoadingCargo_H
#define UC_LoadingCargo_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "LoadingCargo.h"
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

//## package TUesla::UseCaseModelling::LoadingCargo

//## class UC_LoadingCargo
class UC_LoadingCargo : public OMReactive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedUC_LoadingCargo;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_LoadingCargo(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~UC_LoadingCargo();
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getDockingStatus() const;
    
    //## auto_generated
    void setDockingStatus(bool p_DockingStatus);
    
    //## auto_generated
    RhpString getMatrixDisp() const;
    
    //## auto_generated
    void setMatrixDisp(RhpString p_MatrixDisp);
    
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
    
    ////    Attributes    ////
    
    bool DockingStatus;		//## attribute DockingStatus
    
    RhpString MatrixDisp;		//## attribute MatrixDisp
    
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
    inline bool rootState_isCompleted();
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // waitForDock:
    //## statechart_method
    inline bool waitForDock_IN() const;
    
    // terminationstate_3:
    //## statechart_method
    inline bool terminationstate_3_IN() const;
    
    // CargoDoorOpen:
    //## statechart_method
    inline bool CargoDoorOpen_IN() const;
    
    // CargoDoorClosed:
    //## statechart_method
    inline bool CargoDoorClosed_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum UC_LoadingCargo_Enum {
        OMNonState = 0,
        waitForDock = 1,
        terminationstate_3 = 2,
        CargoDoorOpen = 3,
        CargoDoorClosed = 4
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedUC_LoadingCargo : virtual public AOMInstance {
    DECLARE_REACTIVE_META(UC_LoadingCargo, OMAnimatedUC_LoadingCargo)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeAttributes(AOMSAttributes* aomsAttributes) const;
    
    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
    
    //## statechart_method
    void rootState_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void waitForDock_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void terminationstate_3_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CargoDoorOpen_serializeStates(AOMSState* aomsState) const;
    
    //## statechart_method
    void CargoDoorClosed_serializeStates(AOMSState* aomsState) const;
};
//#]
#endif // _OMINSTRUMENT

inline bool UC_LoadingCargo::rootState_IN() const {
    return true;
}

inline bool UC_LoadingCargo::rootState_isCompleted() {
    return ( IS_IN(terminationstate_3) );
}

inline bool UC_LoadingCargo::waitForDock_IN() const {
    return rootState_subState == waitForDock;
}

inline bool UC_LoadingCargo::terminationstate_3_IN() const {
    return rootState_subState == terminationstate_3;
}

inline bool UC_LoadingCargo::CargoDoorOpen_IN() const {
    return rootState_subState == CargoDoorOpen;
}

inline bool UC_LoadingCargo::CargoDoorClosed_IN() const {
    return rootState_subState == CargoDoorClosed;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\UC_LoadingCargo.h
*********************************************************************/
