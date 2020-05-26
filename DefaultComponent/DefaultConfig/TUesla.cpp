/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TUesla
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/

//## auto_generated
#include "TUesla.h"
//## link itsDCLoadingEmployee
#include "DCLoadingEmployee.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## link itsTruckDriver
#include "TruckDriver.h"
//## package TUesla

//## class TUesla
TUesla::TUesla() {
    itsDCLoadingEmployee = NULL;
    itsDCLogisticEmployee = NULL;
    itsDCT = NULL;
    itsTruckDriver = NULL;
}

TUesla::~TUesla() {
    cleanUpRelations();
}

Controller* TUesla::getItsController() const {
    return (Controller*) &itsController;
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

DCT* TUesla::getItsDCT_1() const {
    return (DCT*) &itsDCT_1;
}

DistributionCenter* TUesla::getItsDistributionCenter_1() const {
    return (DistributionCenter*) &itsDistributionCenter_1;
}

Truck* TUesla::getItsTruck() const {
    return (Truck*) &itsTruck;
}

void TUesla::cleanUpRelations() {
    if(itsDCLoadingEmployee != NULL)
        {
            TUesla* p_TUesla = itsDCLoadingEmployee->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsDCLoadingEmployee->__setItsTUesla(NULL);
                }
            itsDCLoadingEmployee = NULL;
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
    if(itsTruckDriver != NULL)
        {
            TUesla* p_TUesla = itsTruckDriver->getItsTUesla();
            if(p_TUesla != NULL)
                {
                    itsTruckDriver->__setItsTUesla(NULL);
                }
            itsTruckDriver = NULL;
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

TruckDriver* TUesla::getItsTruckDriver() const {
    return itsTruckDriver;
}

void TUesla::setItsTruckDriver(TruckDriver* p_TruckDriver) {
    if(p_TruckDriver != NULL)
        {
            p_TruckDriver->_setItsTUesla(this);
        }
    _setItsTruckDriver(p_TruckDriver);
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

void TUesla::__setItsTruckDriver(TruckDriver* p_TruckDriver) {
    itsTruckDriver = p_TruckDriver;
}

void TUesla::_setItsTruckDriver(TruckDriver* p_TruckDriver) {
    if(itsTruckDriver != NULL)
        {
            itsTruckDriver->__setItsTUesla(NULL);
        }
    __setItsTruckDriver(p_TruckDriver);
}

void TUesla::_clearItsTruckDriver() {
    itsTruckDriver = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TUesla.cpp
*********************************************************************/
