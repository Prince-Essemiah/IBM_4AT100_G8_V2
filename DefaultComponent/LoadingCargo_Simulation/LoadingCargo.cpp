/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\LoadingCargo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "LoadingCargo.h"
//## link itsDCLoadingEmployee
#include "DCLoadingEmployee.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_LoadingCargo_LoadingCargo_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase LoadingCargo
LoadingCargo::LoadingCargo(IOxfActive* theActiveContext) : DockingStatus(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(LoadingCargo, LoadingCargo(), 0, TUesla_Usecases_LoadingCargo_LoadingCargo_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLoadingEmployee = NULL;
    itsDCLocalizationSystem = NULL;
    itsDCT = NULL;
    initStatechart();
}

LoadingCargo::~LoadingCargo() {
    NOTIFY_DESTRUCTOR(~LoadingCargo, true);
    cleanUpRelations();
}

bool LoadingCargo::getDockingStatus() const {
    return DockingStatus;
}

void LoadingCargo::setDockingStatus(bool p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

DCLoadingEmployee* LoadingCargo::getItsDCLoadingEmployee() const {
    return itsDCLoadingEmployee;
}

void LoadingCargo::setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(p_DCLoadingEmployee != NULL)
        {
            p_DCLoadingEmployee->_setItsLoadingCargo(this);
        }
    _setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

DCLocalizationSystem* LoadingCargo::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void LoadingCargo::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsLoadingCargo(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

DCT* LoadingCargo::getItsDCT() const {
    return itsDCT;
}

void LoadingCargo::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsLoadingCargo(this);
        }
    _setItsDCT(p_DCT);
}

bool LoadingCargo::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void LoadingCargo::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void LoadingCargo::cleanUpRelations() {
    if(itsDCLoadingEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
            LoadingCargo* p_LoadingCargo = itsDCLoadingEmployee->getItsLoadingCargo();
            if(p_LoadingCargo != NULL)
                {
                    itsDCLoadingEmployee->__setItsLoadingCargo(NULL);
                }
            itsDCLoadingEmployee = NULL;
        }
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            LoadingCargo* p_LoadingCargo = itsDCLocalizationSystem->getItsLoadingCargo();
            if(p_LoadingCargo != NULL)
                {
                    itsDCLocalizationSystem->__setItsLoadingCargo(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            LoadingCargo* p_LoadingCargo = itsDCT->getItsLoadingCargo();
            if(p_LoadingCargo != NULL)
                {
                    itsDCT->__setItsLoadingCargo(NULL);
                }
            itsDCT = NULL;
        }
}

void LoadingCargo::__setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    itsDCLoadingEmployee = p_DCLoadingEmployee;
    if(p_DCLoadingEmployee != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLoadingEmployee", p_DCLoadingEmployee, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
        }
}

void LoadingCargo::_setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(itsDCLoadingEmployee != NULL)
        {
            itsDCLoadingEmployee->__setItsLoadingCargo(NULL);
        }
    __setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

void LoadingCargo::_clearItsDCLoadingEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
    itsDCLoadingEmployee = NULL;
}

void LoadingCargo::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    itsDCLocalizationSystem = p_DCLocalizationSystem;
    if(p_DCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLocalizationSystem", p_DCLocalizationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
        }
}

void LoadingCargo::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsLoadingCargo(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void LoadingCargo::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void LoadingCargo::__setItsDCT(DCT* p_DCT) {
    itsDCT = p_DCT;
    if(p_DCT != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCT", p_DCT, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
        }
}

void LoadingCargo::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsLoadingCargo(NULL);
        }
    __setItsDCT(p_DCT);
}

void LoadingCargo::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void LoadingCargo::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.CargoDoorClosed");
        pushNullTransition();
        rootState_subState = CargoDoorClosed;
        rootState_active = CargoDoorClosed;
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus LoadingCargo::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State waitForDock
        case waitForDock:
        {
            if(IS_EVENT_TYPE_OF(CargoDoor_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.waitForDock");
                    NOTIFY_STATE_ENTERED("ROOT.CargoDoorOpen");
                    rootState_subState = CargoDoorOpen;
                    rootState_active = CargoDoorOpen;
                    NOTIFY_TRANSITION_TERMINATED("1");
                    res = eventConsumed;
                }
            
        }
        break;
        // State CargoDoorClosed
        case CargoDoorClosed:
        {
            if(IS_EVENT_TYPE_OF(OMNullEventId))
                {
                    //## transition 4 
                    if(DockingStatus)
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_TRANSITION_STARTED("4");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.CargoDoorClosed");
                            NOTIFY_STATE_ENTERED("ROOT.waitForDock");
                            rootState_subState = waitForDock;
                            rootState_active = waitForDock;
                            NOTIFY_TRANSITION_TERMINATED("4");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                    else
                        {
                            NOTIFY_TRANSITION_STARTED("3");
                            NOTIFY_TRANSITION_STARTED("5");
                            popNullTransition();
                            NOTIFY_STATE_EXITED("ROOT.CargoDoorClosed");
                            NOTIFY_STATE_ENTERED("ROOT.terminationstate_3");
                            rootState_subState = terminationstate_3;
                            rootState_active = terminationstate_3;
                            NOTIFY_TRANSITION_TERMINATED("5");
                            NOTIFY_TRANSITION_TERMINATED("3");
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State CargoDoorOpen
        case CargoDoorOpen:
        {
            if(IS_EVENT_TYPE_OF(CargoDoor_Usecases_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("2");
                    //#[ state CargoDoorOpen.(Exit) 
                    DockingStatus=false;
                    //#]
                    NOTIFY_STATE_EXITED("ROOT.CargoDoorOpen");
                    NOTIFY_STATE_ENTERED("ROOT.CargoDoorClosed");
                    pushNullTransition();
                    rootState_subState = CargoDoorClosed;
                    rootState_active = CargoDoorClosed;
                    NOTIFY_TRANSITION_TERMINATED("2");
                    res = eventConsumed;
                }
            
        }
        break;
        
        default:
            break;
    }
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedLoadingCargo::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
}

void OMAnimatedLoadingCargo::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLoadingEmployee", false, true);
    if(myReal->itsDCLoadingEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLoadingEmployee);
        }
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
}

void OMAnimatedLoadingCargo::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case LoadingCargo::waitForDock:
        {
            waitForDock_serializeStates(aomsState);
        }
        break;
        case LoadingCargo::CargoDoorClosed:
        {
            CargoDoorClosed_serializeStates(aomsState);
        }
        break;
        case LoadingCargo::CargoDoorOpen:
        {
            CargoDoorOpen_serializeStates(aomsState);
        }
        break;
        case LoadingCargo::terminationstate_3:
        {
            terminationstate_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedLoadingCargo::waitForDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.waitForDock");
}

void OMAnimatedLoadingCargo::terminationstate_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_3");
}

void OMAnimatedLoadingCargo::CargoDoorOpen_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CargoDoorOpen");
}

void OMAnimatedLoadingCargo::CargoDoorClosed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CargoDoorClosed");
}
//#]

IMPLEMENT_REACTIVE_META_P(LoadingCargo, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedLoadingCargo)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\LoadingCargo.cpp
*********************************************************************/
