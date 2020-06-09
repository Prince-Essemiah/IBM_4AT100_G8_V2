/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: ParkingAssign
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\ParkingAssign.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX

#define _OMSTATECHART_ANIMATED
//#]

//## auto_generated
#include "ParkingAssign.h"
//## link itsDCBoard
#include "DCBoard.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//#[ ignore
#define TUesla_Usecases_ParkingAssign_ParkingAssign_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase ParkingAssign
ParkingAssign::ParkingAssign(IOxfActive* theActiveContext) {
    NOTIFY_REACTIVE_CONSTRUCTOR(ParkingAssign, ParkingAssign(), 0, TUesla_Usecases_ParkingAssign_ParkingAssign_SERIALIZE);
    setActiveContext(theActiveContext, false);
    itsDCBoard = NULL;
    itsDCLocalizationSystem = NULL;
    itsDCLogisticEmployee = NULL;
    initStatechart();
}

ParkingAssign::~ParkingAssign() {
    NOTIFY_DESTRUCTOR(~ParkingAssign, true);
    cleanUpRelations();
}

DCBoard* ParkingAssign::getItsDCBoard() const {
    return itsDCBoard;
}

void ParkingAssign::setItsDCBoard(DCBoard* p_DCBoard) {
    if(p_DCBoard != NULL)
        {
            p_DCBoard->_setItsParkingAssign(this);
        }
    _setItsDCBoard(p_DCBoard);
}

DCLocalizationSystem* ParkingAssign::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void ParkingAssign::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsParkingAssign(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

DCLogisticEmployee* ParkingAssign::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void ParkingAssign::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsParkingAssign(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

bool ParkingAssign::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void ParkingAssign::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void ParkingAssign::cleanUpRelations() {
    if(itsDCBoard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCBoard");
            ParkingAssign* p_ParkingAssign = itsDCBoard->getItsParkingAssign();
            if(p_ParkingAssign != NULL)
                {
                    itsDCBoard->__setItsParkingAssign(NULL);
                }
            itsDCBoard = NULL;
        }
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            ParkingAssign* p_ParkingAssign = itsDCLocalizationSystem->getItsParkingAssign();
            if(p_ParkingAssign != NULL)
                {
                    itsDCLocalizationSystem->__setItsParkingAssign(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            ParkingAssign* p_ParkingAssign = itsDCLogisticEmployee->getItsParkingAssign();
            if(p_ParkingAssign != NULL)
                {
                    itsDCLogisticEmployee->__setItsParkingAssign(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
}

void ParkingAssign::__setItsDCBoard(DCBoard* p_DCBoard) {
    itsDCBoard = p_DCBoard;
    if(p_DCBoard != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCBoard", p_DCBoard, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCBoard");
        }
}

void ParkingAssign::_setItsDCBoard(DCBoard* p_DCBoard) {
    if(itsDCBoard != NULL)
        {
            itsDCBoard->__setItsParkingAssign(NULL);
        }
    __setItsDCBoard(p_DCBoard);
}

void ParkingAssign::_clearItsDCBoard() {
    NOTIFY_RELATION_CLEARED("itsDCBoard");
    itsDCBoard = NULL;
}

void ParkingAssign::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
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

void ParkingAssign::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsParkingAssign(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void ParkingAssign::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void ParkingAssign::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    itsDCLogisticEmployee = p_DCLogisticEmployee;
    if(p_DCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLogisticEmployee", p_DCLogisticEmployee, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
        }
}

void ParkingAssign::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsParkingAssign(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void ParkingAssign::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void ParkingAssign::rootState_entDef() {
    {
        NOTIFY_STATE_ENTERED("ROOT");
    }
}

IOxfReactive::TakeEventStatus ParkingAssign::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedParkingAssign::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
    aomsRelations->addRelation("itsDCBoard", false, true);
    if(myReal->itsDCBoard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCBoard);
        }
    aomsRelations->addRelation("itsDCLogisticEmployee", false, true);
    if(myReal->itsDCLogisticEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLogisticEmployee);
        }
}

void OMAnimatedParkingAssign::rootState_serializeStates(AOMSState* aomsState) const {
    aomsState->addState("ROOT");
}
//#]

IMPLEMENT_REACTIVE_META_P(ParkingAssign, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedParkingAssign)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\ParkingAssign.cpp
*********************************************************************/
