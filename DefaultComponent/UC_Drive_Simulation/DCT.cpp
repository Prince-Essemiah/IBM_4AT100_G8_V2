/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCT
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCT.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_Drive
#include "UC_Drive.h"
//## link itsUC_LoadingCargo
#include "UC_LoadingCargo.h"
//## link itsUC_ManualOverride
#include "UC_ManualOverride.h"
//## link itsUC_StopCrash
#include "UC_StopCrash.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_DCT_DCT_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class DCT
DCT::DCT() {
    NOTIFY_CONSTRUCTOR(DCT, DCT(), 0, SystemContext_Actors_SecondaryActors_DCT_DCT_SERIALIZE);
    itsTUesla = NULL;
    itsUC_Drive = NULL;
    itsUC_LoadingCargo = NULL;
    itsUC_ManualOverride = NULL;
    itsUC_StopCrash = NULL;
}

DCT::~DCT() {
    NOTIFY_DESTRUCTOR(~DCT, true);
    cleanUpRelations();
}

TUesla* DCT::getItsTUesla() const {
    return itsTUesla;
}

void DCT::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCT(this);
        }
    _setItsTUesla(p_TUesla);
}

UC_Drive* DCT::getItsUC_Drive() const {
    return itsUC_Drive;
}

void DCT::setItsUC_Drive(UC_Drive* p_UC_Drive) {
    if(p_UC_Drive != NULL)
        {
            p_UC_Drive->_setItsDCT(this);
        }
    _setItsUC_Drive(p_UC_Drive);
}

UC_LoadingCargo* DCT::getItsUC_LoadingCargo() const {
    return itsUC_LoadingCargo;
}

void DCT::setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(p_UC_LoadingCargo != NULL)
        {
            p_UC_LoadingCargo->_setItsDCT(this);
        }
    _setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

UC_ManualOverride* DCT::getItsUC_ManualOverride() const {
    return itsUC_ManualOverride;
}

void DCT::setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    if(p_UC_ManualOverride != NULL)
        {
            p_UC_ManualOverride->_setItsDCT(this);
        }
    _setItsUC_ManualOverride(p_UC_ManualOverride);
}

UC_StopCrash* DCT::getItsUC_StopCrash() const {
    return itsUC_StopCrash;
}

void DCT::setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    if(p_UC_StopCrash != NULL)
        {
            p_UC_StopCrash->_setItsDCT(this);
        }
    _setItsUC_StopCrash(p_UC_StopCrash);
}

void DCT::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCT* p_DCT = itsTUesla->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsTUesla->__setItsDCT(NULL);
                }
            itsTUesla = NULL;
        }
    if(itsUC_Drive != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_Drive");
            DCT* p_DCT = itsUC_Drive->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsUC_Drive->__setItsDCT(NULL);
                }
            itsUC_Drive = NULL;
        }
    if(itsUC_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
            DCT* p_DCT = itsUC_LoadingCargo->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsUC_LoadingCargo->__setItsDCT(NULL);
                }
            itsUC_LoadingCargo = NULL;
        }
    if(itsUC_ManualOverride != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
            DCT* p_DCT = itsUC_ManualOverride->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsUC_ManualOverride->__setItsDCT(NULL);
                }
            itsUC_ManualOverride = NULL;
        }
    if(itsUC_StopCrash != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
            DCT* p_DCT = itsUC_StopCrash->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsUC_StopCrash->__setItsDCT(NULL);
                }
            itsUC_StopCrash = NULL;
        }
}

void DCT::__setItsTUesla(TUesla* p_TUesla) {
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

void DCT::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCT(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCT::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

void DCT::__setItsUC_Drive(UC_Drive* p_UC_Drive) {
    itsUC_Drive = p_UC_Drive;
    if(p_UC_Drive != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_Drive", p_UC_Drive, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_Drive");
        }
}

void DCT::_setItsUC_Drive(UC_Drive* p_UC_Drive) {
    if(itsUC_Drive != NULL)
        {
            itsUC_Drive->__setItsDCT(NULL);
        }
    __setItsUC_Drive(p_UC_Drive);
}

void DCT::_clearItsUC_Drive() {
    NOTIFY_RELATION_CLEARED("itsUC_Drive");
    itsUC_Drive = NULL;
}

void DCT::__setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
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

void DCT::_setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo) {
    if(itsUC_LoadingCargo != NULL)
        {
            itsUC_LoadingCargo->__setItsDCT(NULL);
        }
    __setItsUC_LoadingCargo(p_UC_LoadingCargo);
}

void DCT::_clearItsUC_LoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsUC_LoadingCargo");
    itsUC_LoadingCargo = NULL;
}

void DCT::__setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    itsUC_ManualOverride = p_UC_ManualOverride;
    if(p_UC_ManualOverride != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_ManualOverride", p_UC_ManualOverride, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
        }
}

void DCT::_setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride) {
    if(itsUC_ManualOverride != NULL)
        {
            itsUC_ManualOverride->__setItsDCT(NULL);
        }
    __setItsUC_ManualOverride(p_UC_ManualOverride);
}

void DCT::_clearItsUC_ManualOverride() {
    NOTIFY_RELATION_CLEARED("itsUC_ManualOverride");
    itsUC_ManualOverride = NULL;
}

void DCT::__setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    itsUC_StopCrash = p_UC_StopCrash;
    if(p_UC_StopCrash != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsUC_StopCrash", p_UC_StopCrash, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
        }
}

void DCT::_setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash) {
    if(itsUC_StopCrash != NULL)
        {
            itsUC_StopCrash->__setItsDCT(NULL);
        }
    __setItsUC_StopCrash(p_UC_StopCrash);
}

void DCT::_clearItsUC_StopCrash() {
    NOTIFY_RELATION_CLEARED("itsUC_StopCrash");
    itsUC_StopCrash = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCT::serializeRelations(AOMSRelations* aomsRelations) const {
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
    aomsRelations->addRelation("itsUC_ManualOverride", false, true);
    if(myReal->itsUC_ManualOverride)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_ManualOverride);
        }
    aomsRelations->addRelation("itsUC_StopCrash", false, true);
    if(myReal->itsUC_StopCrash)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_StopCrash);
        }
    aomsRelations->addRelation("itsUC_Drive", false, true);
    if(myReal->itsUC_Drive)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_Drive);
        }
}
//#]

IMPLEMENT_META_P(DCT, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedDCT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.cpp
*********************************************************************/
