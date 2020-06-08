/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TUesla
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/

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
//## package TUesla

//## class TUesla
TUesla::TUesla() {
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
            TUesla* p_TUesla = itsCargo->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsCargo->__setItsTUesla(NULL);
                }
            itsCargo = NULL;
        }
    if(itsDCBoard != NULL)
        {
            TUesla* p_TUesla = itsDCBoard->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCBoard->__setItsTUesla(NULL);
                }
            itsDCBoard = NULL;
        }
    if(itsDCLoadingEmployee != NULL)
        {
            TUesla* p_TUesla = itsDCLoadingEmployee->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLoadingEmployee->__setItsTUesla(NULL);
                }
            itsDCLoadingEmployee = NULL;
        }
    if(itsDCLocalizationSystem != NULL)
        {
            TUesla* p_TUesla = itsDCLocalizationSystem->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLocalizationSystem->__setItsTUesla(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
    if(itsDCLogisticEmployee != NULL)
        {
            TUesla* p_TUesla = itsDCLogisticEmployee->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLogisticEmployee->__setItsTUesla(NULL);
                }
            itsDCLogisticEmployee = NULL;
        }
    if(itsDCT != NULL)
        {
            TUesla* p_TUesla = itsDCT->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCT->__setItsTUesla(NULL);
                }
            itsDCT = NULL;
        }
    if(itsEnvironmentSensors != NULL)
        {
            TUesla* p_TUesla = itsEnvironmentSensors->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsEnvironmentSensors->__setItsTUesla(NULL);
                }
            itsEnvironmentSensors = NULL;
        }
    if(itsSensors != NULL)
        {
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
}

void TUesla::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsTUesla(NULL);
        }
    __setItsDCT(p_DCT);
}

void TUesla::_clearItsDCT() {
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
}

void TUesla::_setItsCargo(Cargo* p_Cargo) {
    if(itsCargo != NULL)
        {
            itsCargo->__setItsTUesla(NULL);
        }
    __setItsCargo(p_Cargo);
}

void TUesla::_clearItsCargo() {
    itsCargo = NULL;
}

void TUesla::__setItsDCBoard(DCBoard* p_DCBoard) {
    itsDCBoard = p_DCBoard;
}

void TUesla::_setItsDCBoard(DCBoard* p_DCBoard) {
    if(itsDCBoard != NULL)
        {
            itsDCBoard->__setItsTUesla(NULL);
        }
    __setItsDCBoard(p_DCBoard);
}

void TUesla::_clearItsDCBoard() {
    itsDCBoard = NULL;
}

void TUesla::__setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    itsDCLoadingEmployee = p_DCLoadingEmployee;
}

void TUesla::_setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee) {
    if(itsDCLoadingEmployee != NULL)
        {
            itsDCLoadingEmployee->__setItsTUesla(NULL);
        }
    __setItsDCLoadingEmployee(p_DCLoadingEmployee);
}

void TUesla::_clearItsDCLoadingEmployee() {
    itsDCLoadingEmployee = NULL;
}

void TUesla::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    itsDCLocalizationSystem = p_DCLocalizationSystem;
}

void TUesla::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsTUesla(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void TUesla::_clearItsDCLocalizationSystem() {
    itsDCLocalizationSystem = NULL;
}

void TUesla::__setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    itsDCLogisticEmployee = p_DCLogisticEmployee;
}

void TUesla::_setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee->__setItsTUesla(NULL);
        }
    __setItsDCLogisticEmployee(p_DCLogisticEmployee);
}

void TUesla::_clearItsDCLogisticEmployee() {
    itsDCLogisticEmployee = NULL;
}

void TUesla::__setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    itsEnvironmentSensors = p_EnvironmentSensors;
}

void TUesla::_setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    if(itsEnvironmentSensors != NULL)
        {
            itsEnvironmentSensors->__setItsTUesla(NULL);
        }
    __setItsEnvironmentSensors(p_EnvironmentSensors);
}

void TUesla::_clearItsEnvironmentSensors() {
    itsEnvironmentSensors = NULL;
}

void TUesla::__setItsSensors(Sensors* p_Sensors) {
    itsSensors = p_Sensors;
}

void TUesla::_setItsSensors(Sensors* p_Sensors) {
    if(itsSensors != NULL)
        {
            itsSensors->__setItsTUesla(NULL);
        }
    __setItsSensors(p_Sensors);
}

void TUesla::_clearItsSensors() {
    itsSensors = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/
