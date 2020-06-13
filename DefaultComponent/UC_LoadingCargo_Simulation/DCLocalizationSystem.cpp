/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLocalizationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLocalizationSystem.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_LoadingCargo
#include "UC_LoadingCargo.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class DCLocalizationSystem
DCLocalizationSystem::DCLocalizationSystem() {
    NOTIFY_CONSTRUCTOR(DCLocalizationSystem, DCLocalizationSystem(), 0, SystemContext_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE);
    itsTUesla = NULL;
    itsUC_LoadingCargo = NULL;
}

DCLocalizationSystem::~DCLocalizationSystem() {
    NOTIFY_DESTRUCTOR(~DCLocalizationSystem, true);
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

UC_LoadingCargo* DCLocalizationSystem::getItsUC_LoadingCargo() const {
    return itsUC_LoadingCargo;
}

void DCLocalizationSystem::setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(p_UC_LoadingCargo != NULL)
        {
            p_UC_LoadingCargo->_setItsDCLocalizationSystem(this);
        }
    _setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

void DCLocalizationSystem::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLocalizationSystem* p_DCLocalizationSystem = itsTUesla->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsTUesla->__setItsDCLocalizationSystem(NULL);
                }
            itsTUesla = NULL;
        }
    if(itsUC_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
            DCLocalizationSystem* p_DCLocalizationSystem = itsUC_LoadingCargo->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsUC_LoadingCargo->__setItsDCLocalizationSystem(NULL);
                }
            itsUC_LoadingCargo = NULL;
        }
}

void DCLocalizationSystem::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
    if(p_TUesla != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTUesla", p_TUesla, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
        }
}

void DCLocalizationSystem::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLocalizationSystem(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLocalizationSystem::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

void DCLocalizationSystem::__setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    itsUC_LoadingCargo = p_UC_LoadingCargo;
    if(p_UC_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_LoadingCargo", p_UC_LoadingCargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
        }
}

void DCLocalizationSystem::_setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(itsUC_LoadingCargo != NULL)
        {
            itsUC_LoadingCargo->__setItsDCLocalizationSystem(NULL);
        }
    __setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

void DCLocalizationSystem::_clearItsUC_LoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
    itsUC_LoadingCargo = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLocalizationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsUC_LoadingCargo", false, true);
    if(myReal->itsUC_LoadingCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_LoadingCargo);
        }
}
//#]

IMPLEMENT_META_P(DCLocalizationSystem, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedDCLocalizationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLocalizationSystem.cpp
*********************************************************************/
