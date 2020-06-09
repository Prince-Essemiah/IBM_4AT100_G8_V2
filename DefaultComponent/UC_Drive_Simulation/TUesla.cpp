/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: TUesla
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\TUesla.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "TUesla.h"
//## link itsCargo
#include "Cargo.h"
//## link itsDCBoard
#include "DCBoard.h"
//## link itsDCLoadingEmployee
#include "DCLoadingEmployee.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsDCT
#include "DCT.h"
//## link itsEnvironmentSensors
#include "EnvironmentSensors.h"
//## link itsSensors
#include "Sensors.h"
//#[ ignore
#define TUesla_TUesla_TUesla_SERIALIZE OM_NO_OP
//#]

//## package TUesla

//## class TUesla
TUesla::TUesla() {
    NOTIFY_CONSTRUCTOR(TUesla, TUesla(), 0, TUesla_TUesla_TUesla_SERIALIZE);
    itsCargo = NULL;
    itsDCBoard = NULL;
    itsDCLoadingEmployee = NULL;
    itsDCLocalizationSystem = NULL;
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
    itsEnvironmentSensors = NULL;
    itsSensors = NULL;
}

TUesla::~TUesla() {
    NOTIFY_DESTRUCTOR(~TUesla, true);
    cleanUpRelations();
}

DCT* TUesla::getItsDCT() const {
    return itsDCT;
}

void TUesla::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsTUesla(this);
        }
    _setItsDCT(p_DCT);
}

void TUesla::cleanUpRelations() {
    if(itsCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCargo");
            TUesla* p_TUesla = itsCargo->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsCargo->__setItsTUesla(NULL);
                }
            itsCargo = NULL;
        }
    if(itsDCBoard != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCBoard");
            TUesla* p_TUesla = itsDCBoard->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCBoard->__setItsTUesla(NULL);
                }
            itsDCBoard = NULL;
        }
    if(itsDCLoadingEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
            TUesla* p_TUesla = itsDCLoadingEmployee->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLoadingEmployee->__setItsTUesla(NULL);
                }
            itsDCLoadingEmployee = NULL;
        }
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            TUesla* p_TUesla = itsDCLocalizationSystem->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLocalizationSystem->__setItsTUesla(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
    if(itsDCLogisticEmployee != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
            TUesla* p_TUesla = itsDCLogisticEmployee->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLogisticEmployee->__setItsTUesla(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            TUesla* p_TUesla = itsDCT->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCT->__setItsTUesla(NULL);
                }
            itsDCT = NULL;
        }
    if(itsEnvironmentSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironmentSensors");
            TUesla* p_TUesla = itsEnvironmentSensors->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsEnvironmentSensors->__setItsTUesla(NULL);
                }
            itsEnvironmentSensors = NULL;
        }
    if(itsSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
            TUesla* p_TUesla = itsSensors->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsSensors->__setItsTUesla(NULL);
                }
            itsSensors = NULL;
        }
}

void TUesla::__setItsDCT(DCT* p_DCT) {
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

void TUesla::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsTUesla(NULL);
        }
    __setItsDCT(p_DCT);
}

void TUesla::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

Cargo* TUesla::getItsCargo() const {
    return itsCargo;
}

void TUesla::setItsCargo(Cargo* p_Cargo) {
    if(p_Cargo != NULL)
        {
            p_Cargo->_setItsTUesla(this);
        }
    _setItsCargo(p_Cargo);
}

DCBoard* TUesla::getItsDCBoard() const {
    return itsDCBoard;
}

void TUesla::setItsDCBoard(DCBoard* p_DCBoard) {
    if(p_DCBoard != NULL)
        {
            p_DCBoard->_setItsTUesla(this);
        }
    _setItsDCBoard(p_DCBoard);
}

DCLoadingEmployee* TUesla::getItsDCLoadingEmployee() const {
    return itsDCLoadingEmployee;
}

void TUesla::setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(p_DCLoadingEmployee != NULL)
        {
            p_DCLoadingEmployee->_setItsTUesla(this);
        }
    _setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

DCLocalizationSystem* TUesla::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void TUesla::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsTUesla(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

DCLogisticEmployee* TUesla::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void TUesla::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(p_DCLogisticEmployee != NULL)
        {
            p_DCLogisticEmployee->_setItsTUesla(this);
        }
    _setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

EnvironmentSensors* TUesla::getItsEnvironmentSensors() const {
    return itsEnvironmentSensors;
}

void TUesla::setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    if(p_EnvironmentSensors != NULL)
        {
            p_EnvironmentSensors->_setItsTUesla(this);
        }
    _setItsEnvironmentSensors(p_EnvironmentSensors);
}

Sensors* TUesla::getItsSensors() const {
    return itsSensors;
}

void TUesla::setItsSensors(Sensors* p_Sensors) {
    if(p_Sensors != NULL)
        {
            p_Sensors->_setItsTUesla(this);
        }
    _setItsSensors(p_Sensors);
}

void TUesla::__setItsCargo(Cargo* p_Cargo) {
    itsCargo = p_Cargo;
    if(p_Cargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCargo", p_Cargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCargo");
        }
}

void TUesla::_setItsCargo(Cargo* p_Cargo) {
    if(itsCargo != NULL)
        {
            itsCargo->__setItsTUesla(NULL);
        }
    __setItsCargo(p_Cargo);
}

void TUesla::_clearItsCargo() {
    NOTIFY_RELATION_CLEARED("itsCargo");
    itsCargo = NULL;
}

void TUesla::__setItsDCBoard(DCBoard* p_DCBoard) {
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

void TUesla::_setItsDCBoard(DCBoard* p_DCBoard) {
    if(itsDCBoard != NULL)
        {
            itsDCBoard->__setItsTUesla(NULL);
        }
    __setItsDCBoard(p_DCBoard);
}

void TUesla::_clearItsDCBoard() {
    NOTIFY_RELATION_CLEARED("itsDCBoard");
    itsDCBoard = NULL;
}

void TUesla::__setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
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

void TUesla::_setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(itsDCLoadingEmployee != NULL)
        {
            itsDCLoadingEmployee->__setItsTUesla(NULL);
        }
    __setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

void TUesla::_clearItsDCLoadingEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLoadingEmployee");
    itsDCLoadingEmployee = NULL;
}

void TUesla::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
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

void TUesla::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsTUesla(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void TUesla::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

void TUesla::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
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

void TUesla::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsTUesla(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void TUesla::_clearItsDCLogisticEmployee() {
    NOTIFY_RELATION_CLEARED("itsDCLogisticEmployee");
    itsDCLogisticEmployee = NULL;
}

void TUesla::__setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    itsEnvironmentSensors = p_EnvironmentSensors;
    if(p_EnvironmentSensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsEnvironmentSensors", p_EnvironmentSensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsEnvironmentSensors");
        }
}

void TUesla::_setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    if(itsEnvironmentSensors != NULL)
        {
            itsEnvironmentSensors->__setItsTUesla(NULL);
        }
    __setItsEnvironmentSensors(p_EnvironmentSensors);
}

void TUesla::_clearItsEnvironmentSensors() {
    NOTIFY_RELATION_CLEARED("itsEnvironmentSensors");
    itsEnvironmentSensors = NULL;
}

void TUesla::__setItsSensors(Sensors* p_Sensors) {
    itsSensors = p_Sensors;
    if(p_Sensors != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsSensors", p_Sensors, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsSensors");
        }
}

void TUesla::_setItsSensors(Sensors* p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsTUesla(NULL);
        }
    __setItsSensors(p_Sensors);
}

void TUesla::_clearItsSensors() {
    NOTIFY_RELATION_CLEARED("itsSensors");
    itsSensors = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedTUesla::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
    aomsRelations->addRelation("itsSensors", false, true);
    if(myReal->itsSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsSensors);
        }
    aomsRelations->addRelation("itsDCLogisticEmployee", false, true);
    if(myReal->itsDCLogisticEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLogisticEmployee);
        }
    aomsRelations->addRelation("itsCargo", false, true);
    if(myReal->itsCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsCargo);
        }
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
    aomsRelations->addRelation("itsEnvironmentSensors", false, true);
    if(myReal->itsEnvironmentSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironmentSensors);
        }
    aomsRelations->addRelation("itsDCBoard", false, true);
    if(myReal->itsDCBoard)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCBoard);
        }
    aomsRelations->addRelation("itsDCLoadingEmployee", false, true);
    if(myReal->itsDCLoadingEmployee)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLoadingEmployee);
        }
}
//#]

IMPLEMENT_META_P(TUesla, TUesla, TUesla, false, OMAnimatedTUesla)
#endif // _OMINSTRUMENT

//## package TUesla


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla, TUesla)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\TUesla.cpp
*********************************************************************/
