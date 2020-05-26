/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLogisticSystem
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLogisticSystem.cpp
*********************************************************************/

//## auto_generated
#include "DCLogisticSystem.h"
//## link itsUC_SetCoordinates
#include "UC_SetCoordinates.h"
//## package TUesla

//## class DCLogisticSystem
DCLogisticSystem::DCLogisticSystem() {
    itsUC_SetCoordinates = NULL;
}

DCLogisticSystem::~DCLogisticSystem() {
    cleanUpRelations();
}

UC_SetCoordinates* DCLogisticSystem::getItsUC_SetCoordinates() const {
    return itsUC_SetCoordinates;
}

void DCLogisticSystem::setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    if(p_UC_SetCoordinates != NULL)
        {
            p_UC_SetCoordinates->_setItsDCLogisticSystem(this);
        }
    _setItsUC_SetCoordinates(p_UC_SetCoordinates);
}

void DCLogisticSystem::cleanUpRelations() {
    if(itsUC_SetCoordinates != NULL)
        {
            DCLogisticSystem* p_DCLogisticSystem = itsUC_SetCoordinates->getItsDCLogisticSystem();
            if(p_DCLogisticSystem != NULL)
                {
                    itsUC_SetCoordinates->__setItsDCLogisticSystem(NULL);
                }
            itsUC_SetCoordinates = NULL;
        }
}

void DCLogisticSystem::__setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    itsUC_SetCoordinates = p_UC_SetCoordinates;
}

void DCLogisticSystem::_setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates) {
    if(itsUC_SetCoordinates != NULL)
        {
            itsUC_SetCoordinates->__setItsDCLogisticSystem(NULL);
        }
    __setItsUC_SetCoordinates(p_UC_SetCoordinates);
}

void DCLogisticSystem::_clearItsUC_SetCoordinates() {
    itsUC_SetCoordinates = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLogisticSystem.cpp
*********************************************************************/
