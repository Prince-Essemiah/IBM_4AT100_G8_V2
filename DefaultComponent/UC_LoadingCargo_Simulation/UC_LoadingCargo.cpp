/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: UC_LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\UC_LoadingCargo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "UC_LoadingCargo.h"
//## link itsDCLoadingEmployee
#include "DCLoadingEmployee.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_UseCaseModelling_LoadingCargo_UC_LoadingCargo_UC_LoadingCargo_SERIALIZE OM_NO_OP
//#]

//## package TUesla::UseCaseModelling::LoadingCargo

//## class UC_LoadingCargo
UC_LoadingCargo::UC_LoadingCargo(IOxfActive* theActiveContext) : DockingStatus(true) {
    NOTIFY_REACTIVE_CONSTRUCTOR(UC_LoadingCargo, UC_LoadingCargo(), 0, TUesla_UseCaseModelling_LoadingCargo_UC_LoadingCargo_UC_LoadingCargo_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCLoadingEmployee = NULL;
    itsDCLocalizationSystem = NULL;
    itsDCT = NULL;
    initStatechart();
}

UC_LoadingCargo::~UC_LoadingCargo() {
    NOTIFY_DESTRUCTOR(~UC_LoadingCargo, true);
    cleanUpRelations();
}

bool UC_LoadingCargo::getDockingStatus() const {
    return DockingStatus;
}

void UC_LoadingCargo::setDockingStatus(bool p_DockingStatus) {
    DockingStatus = p_DockingStatus;
}

RhpString UC_LoadingCargo::getMatrixDisp() const {
    return MatrixDisp;
}

void UC_LoadingCargo::setMatrixDisp(RhpString p_MatrixDisp) {
    MatrixDisp = p_MatrixDisp;
}

DCLoadingEmployee* UC_LoadingCargo::getItsDCLoadingEmployee() const {
    return itsDCLoadingEmployee;
}

void UC_LoadingCargo::setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(p_DCLoadingEmployee != NULL)
        {
            p_DCLoadingEmployee->_setItsUC_LoadingCargo(this);
        }
    _setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

DCLocalizationSystem* UC_LoadingCargo::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void UC_LoadingCargo::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsUC_LoadingCargo(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

DCT* UC_LoadingCargo::getItsDCT() const {
    return itsDCT;
}

void UC_LoadingCargo::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsUC_LoadingCargo(this);
        }
    _setItsDCT(p_DCT);
}

bool UC_LoadingCargo::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void UC_LoadingCargo::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void UC_LoadingCargo::cleanUpRelations() {
    if(itsDCLoadingEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
            UC_LoadingCargo* p_UC_LoadingCargo = itsDCLoadingEmployee->getItsUC_LoadingCargo();
            if(p_UC_LoadingCargo != NULL)
                {
                    itsDCLoadingEmployee->__setItsUC_LoadingCargo(NULL);
                }
            itsDCLoadingEmployee = NULL;
        }
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            UC_LoadingCargo* p_UC_LoadingCargo = itsDCLocalizationSystem->getItsUC_LoadingCargo();
            if(p_UC_LoadingCargo != NULL)
                {
                    itsDCLocalizationSystem->__setItsUC_LoadingCargo(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            UC_LoadingCargo* p_UC_LoadingCargo = itsDCT->getItsUC_LoadingCargo();
            if(p_UC_LoadingCargo != NULL)
                {
                    itsDCT->__setItsUC_LoadingCargo(NULL);
                }
            itsDCT = NULL;
        }
}

void UC_LoadingCargo::__setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
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

void UC_LoadingCargo::_setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(itsDCLoadingEmployee != NULL)
        {
            itsDCLoadingEmployee->__setItsUC_LoadingCargo(NULL);
        }
    __setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

void UC_LoadingCargo::_clearItsDCLoadingEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
    itsDCLoadingEmployee = NULL;
}

void UC_LoadingCargo::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
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

void UC_LoadingCargo::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsUC_LoadingCargo(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void UC_LoadingCargo::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void UC_LoadingCargo::__setItsDCT(DCT* p_DCT) {
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

void UC_LoadingCargo::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsUC_LoadingCargo(NULL);
        }
    __setItsDCT(p_DCT);
}

void UC_LoadingCargo::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void UC_LoadingCargo::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
        NOTIFY_TRANSITION_STARTED("0");
        NOTIFY_STATE_ENTERED("ROOT.CargoDoorClosed");
        pushNullTransition();
        rootState_subState = CargoDoorClosed;
        rootState_active = CargoDoorClosed;
        //#[ state CargoDoorClosed.(Entry) 
        MatrixDisp = "Cargo door is closed";
        //#]
        NOTIFY_TRANSITION_TERMINATED("0");
    }
}

IOxfReactive::TakeEventStatus UC_LoadingCargo::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State waitForDock
        case waitForDock:
        {
            if(IS_EVENT_TYPE_OF(CargoDoor_LoadingCargo_UseCaseModelling_TUesla_id))
                {
                    NOTIFY_TRANSITION_STARTED("1");
                    NOTIFY_STATE_EXITED("ROOT.waitForDock");
                    NOTIFY_STATE_ENTERED("ROOT.CargoDoorOpen");
                    rootState_subState = CargoDoorOpen;
                    rootState_active = CargoDoorOpen;
                    //#[ state CargoDoorOpen.(Entry) 
                    MatrixDisp = "Door is open. Please load/unload";
                    //#]
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
            if(IS_EVENT_TYPE_OF(CargoDoor_LoadingCargo_UseCaseModelling_TUesla_id))
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
                    //#[ state CargoDoorClosed.(Entry) 
                    MatrixDisp = "Cargo door is closed";
                    //#]
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
void OMAnimatedUC_LoadingCargo::serializeAttributes(AOMSAttributes* aomsAttributes) const {
    aomsAttributes->addAttribute("DockingStatus", x2String(myReal->DockingStatus));
    aomsAttributes->addAttribute("MatrixDisp", x2String(myReal->MatrixDisp));
}

void OMAnimatedUC_LoadingCargo::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLoadingEmployee", false, true);
    if(myReal->itsDCLoadingEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLoadingEmployee);
        }
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}

void OMAnimatedUC_LoadingCargo::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
    switch (myReal->rootState_subState) {
        case UC_LoadingCargo::waitForDock:
        {
            waitForDock_serializeStates(aomsState);
        }
        break;
        case UC_LoadingCargo::CargoDoorClosed:
        {
            CargoDoorClosed_serializeStates(aomsState);
        }
        break;
        case UC_LoadingCargo::CargoDoorOpen:
        {
            CargoDoorOpen_serializeStates(aomsState);
        }
        break;
        case UC_LoadingCargo::terminationstate_3:
        {
            terminationstate_3_serializeStates(aomsState);
        }
        break;
        default:
            break;
    }
}

void OMAnimatedUC_LoadingCargo::waitForDock_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.waitForDock");
}

void OMAnimatedUC_LoadingCargo::terminationstate_3_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.terminationstate_3");
}

void OMAnimatedUC_LoadingCargo::CargoDoorOpen_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CargoDoorOpen");
}

void OMAnimatedUC_LoadingCargo::CargoDoorClosed_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT.CargoDoorClosed");
}
//#]

IMPLEMENT_REACTIVE_META_P(UC_LoadingCargo, TUesla_UseCaseModelling_LoadingCargo, TUesla::UseCaseModelling::LoadingCargo, false, OMAnimatedUC_LoadingCargo)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\UC_LoadingCargo.cpp
*********************************************************************/
