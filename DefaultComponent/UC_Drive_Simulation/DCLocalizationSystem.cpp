/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLocalizationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLocalizationSystem.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class DCLocalizationSystem
DCLocalizationSystem::DCLocalizationSystem() {
    NOTIFY_CONSTRUCTOR(DCLocalizationSystem, DCLocalizationSystem(), 0, TUesla_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE);
    itsTUesla = NULL;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLocalizationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(DCLocalizationSystem, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedDCLocalizationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLocalizationSystem.cpp
*********************************************************************/
