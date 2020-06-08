/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLocalizationSystem.cpp
*********************************************************************/

//## auto_generated
#include "DCLocalizationSystem.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

//## class DCLocalizationSystem
DCLocalizationSystem::DCLocalizationSystem() {
    itsTUesla = NULL;
}

DCLocalizationSystem::~DCLocalizationSystem() {
    cleanUpRelations();
}

TUesla* DCLocalizationSystem::getItsTUesla() const {
    return itsTUesla;
}

void DCLocalizationSystem::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLocalizationSystem(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCLocalizationSystem::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            DCLocalizationSystem* p_DCLocalizationSystem = itsTUesla->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsTUesla->__setItsDCLocalizationSystem(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLocalizationSystem::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void DCLocalizationSystem::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLocalizationSystem(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLocalizationSystem::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLocalizationSystem.cpp
*********************************************************************/
