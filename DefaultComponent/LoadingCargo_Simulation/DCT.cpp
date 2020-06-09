/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: DCT
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCT.h"
//## link itsCharging
#include "Charging.h"
//## link itsCompareSOC
#include "CompareSOC.h"
//## link itsCoupling
#include "Coupling.h"
//## link itsDrive
#include "Drive.h"
//## link itsHMI
#include "HMI.h"
//## link itsLoadingCargo
#include "LoadingCargo.h"
//## link itsManualHMI
#include "ManualHMI.h"
//## link itsManualOverrideAutonomousMode
#include "ManualOverrideAutonomousMode.h"
//## link itsStopCrash
#include "StopCrash.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_DCT_DCT_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class DCT
DCT::DCT() {
    NOTIFY_CONSTRUCTOR(DCT, DCT(), 0, TUesla_Actors_SecondaryActors_DCT_DCT_SERIALIZE);
    itsCharging = NULL;
    itsCompareSOC = NULL;
    itsCoupling = NULL;
    itsDrive = NULL;
    itsHMI = NULL;
    itsLoadingCargo = NULL;
    itsManualHMI = NULL;
    itsManualOverrideAutonomousMode = NULL;
    itsStopCrash = NULL;
    itsTUesla = NULL;
}

DCT::~DCT() {
    NOTIFY_DESTRUCTOR(~DCT, true);
    cleanUpRelations();
}

Charging* DCT::getItsCharging() const {
    return itsCharging;
}

void DCT::setItsCharging(Charging* p_Charging) {
    if(p_Charging != NULL)
        {
            p_Charging->_setItsDCT(this);
        }
    _setItsCharging(p_Charging);
}

CompareSOC* DCT::getItsCompareSOC() const {
    return itsCompareSOC;
}

void DCT::setItsCompareSOC(CompareSOC* p_CompareSOC) {
    if(p_CompareSOC != NULL)
        {
            p_CompareSOC->_setItsDCT(this);
        }
    _setItsCompareSOC(p_CompareSOC);
}

Coupling* DCT::getItsCoupling() const {
    return itsCoupling;
}

void DCT::setItsCoupling(Coupling* p_Coupling) {
    if(p_Coupling != NULL)
        {
            p_Coupling->_setItsDCT(this);
        }
    _setItsCoupling(p_Coupling);
}

Drive* DCT::getItsDrive() const {
    return itsDrive;
}

void DCT::setItsDrive(Drive* p_Drive) {
    if(p_Drive != NULL)
        {
            p_Drive->_setItsDCT(this);
        }
    _setItsDrive(p_Drive);
}

HMI* DCT::getItsHMI() const {
    return itsHMI;
}

void DCT::setItsHMI(HMI* p_HMI) {
    if(p_HMI != NULL)
        {
            p_HMI->_setItsDCT(this);
        }
    _setItsHMI(p_HMI);
}

LoadingCargo* DCT::getItsLoadingCargo() const {
    return itsLoadingCargo;
}

void DCT::setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(p_LoadingCargo != NULL)
        {
            p_LoadingCargo->_setItsDCT(this);
        }
    _setItsLoadingCargo(p_LoadingCargo);
}

ManualHMI* DCT::getItsManualHMI() const {
    return itsManualHMI;
}

void DCT::setItsManualHMI(ManualHMI* p_ManualHMI) {
    if(p_ManualHMI != NULL)
        {
            p_ManualHMI->_setItsDCT(this);
        }
    _setItsManualHMI(p_ManualHMI);
}

ManualOverrideAutonomousMode* DCT::getItsManualOverrideAutonomousMode() const {
    return itsManualOverrideAutonomousMode;
}

void DCT::setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
    if(p_ManualOverrideAutonomousMode != NULL)
        {
            p_ManualOverrideAutonomousMode->_setItsDCT(this);
        }
    _setItsManualOverrideAutonomousMode(p_ManualOverrideAutonomousMode);
}

StopCrash* DCT::getItsStopCrash() const {
    return itsStopCrash;
}

void DCT::setItsStopCrash(StopCrash* p_StopCrash) {
    if(p_StopCrash != NULL)
        {
            p_StopCrash->_setItsDCT(this);
        }
    _setItsStopCrash(p_StopCrash);
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

void DCT::cleanUpRelations() {
    if(itsCharging != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging");
            DCT* p_DCT = itsCharging->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsCharging->__setItsDCT(NULL);
                }
            itsCharging = NULL;
        }
    if(itsCompareSOC != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCompareSOC");
            DCT* p_DCT = itsCompareSOC->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsCompareSOC->__setItsDCT(NULL);
                }
            itsCompareSOC = NULL;
        }
    if(itsCoupling != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCoupling");
            DCT* p_DCT = itsCoupling->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsCoupling->__setItsDCT(NULL);
                }
            itsCoupling = NULL;
        }
    if(itsDrive != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDrive");
            DCT* p_DCT = itsDrive->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsDrive->__setItsDCT(NULL);
                }
            itsDrive = NULL;
        }
    if(itsHMI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHMI");
            DCT* p_DCT = itsHMI->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsHMI->__setItsDCT(NULL);
                }
            itsHMI = NULL;
        }
    if(itsLoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
            DCT* p_DCT = itsLoadingCargo->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsLoadingCargo->__setItsDCT(NULL);
                }
            itsLoadingCargo = NULL;
        }
    if(itsManualHMI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsManualHMI");
            DCT* p_DCT = itsManualHMI->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsManualHMI->__setItsDCT(NULL);
                }
            itsManualHMI = NULL;
        }
    if(itsManualOverrideAutonomousMode != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsManualOverrideAutonomousMode");
            DCT* p_DCT = itsManualOverrideAutonomousMode->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsManualOverrideAutonomousMode->__setItsDCT(NULL);
                }
            itsManualOverrideAutonomousMode = NULL;
        }
    if(itsStopCrash != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash");
            DCT* p_DCT = itsStopCrash->getItsDCT();
            if(p_DCT != NULL)
                {
                    itsStopCrash->__setItsDCT(NULL);
                }
            itsStopCrash = NULL;
        }
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
}

void DCT::__setItsCharging(Charging* p_Charging) {
    itsCharging = p_Charging;
    if(p_Charging != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCharging", p_Charging, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCharging");
        }
}

void DCT::_setItsCharging(Charging* p_Charging) {
    if(itsCharging != NULL)
        {
            itsCharging->__setItsDCT(NULL);
        }
    __setItsCharging(p_Charging);
}

void DCT::_clearItsCharging() {
    NOTIFY_RELATION_CLEARED("itsCharging");
    itsCharging = NULL;
}

void DCT::__setItsCompareSOC(CompareSOC* p_CompareSOC) {
    itsCompareSOC = p_CompareSOC;
    if(p_CompareSOC != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCompareSOC", p_CompareSOC, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCompareSOC");
        }
}

void DCT::_setItsCompareSOC(CompareSOC* p_CompareSOC) {
    if(itsCompareSOC != NULL)
        {
            itsCompareSOC->__setItsDCT(NULL);
        }
    __setItsCompareSOC(p_CompareSOC);
}

void DCT::_clearItsCompareSOC() {
    NOTIFY_RELATION_CLEARED("itsCompareSOC");
    itsCompareSOC = NULL;
}

void DCT::__setItsCoupling(Coupling* p_Coupling) {
    itsCoupling = p_Coupling;
    if(p_Coupling != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsCoupling", p_Coupling, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsCoupling");
        }
}

void DCT::_setItsCoupling(Coupling* p_Coupling) {
    if(itsCoupling != NULL)
        {
            itsCoupling->__setItsDCT(NULL);
        }
    __setItsCoupling(p_Coupling);
}

void DCT::_clearItsCoupling() {
    NOTIFY_RELATION_CLEARED("itsCoupling");
    itsCoupling = NULL;
}

void DCT::__setItsDrive(Drive* p_Drive) {
    itsDrive = p_Drive;
    if(p_Drive != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDrive", p_Drive, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDrive");
        }
}

void DCT::_setItsDrive(Drive* p_Drive) {
    if(itsDrive != NULL)
        {
            itsDrive->__setItsDCT(NULL);
        }
    __setItsDrive(p_Drive);
}

void DCT::_clearItsDrive() {
    NOTIFY_RELATION_CLEARED("itsDrive");
    itsDrive = NULL;
}

void DCT::__setItsHMI(HMI* p_HMI) {
    itsHMI = p_HMI;
    if(p_HMI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsHMI", p_HMI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsHMI");
        }
}

void DCT::_setItsHMI(HMI* p_HMI) {
    if(itsHMI != NULL)
        {
            itsHMI->__setItsDCT(NULL);
        }
    __setItsHMI(p_HMI);
}

void DCT::_clearItsHMI() {
    NOTIFY_RELATION_CLEARED("itsHMI");
    itsHMI = NULL;
}

void DCT::__setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    itsLoadingCargo = p_LoadingCargo;
    if(p_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingCargo", p_LoadingCargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
        }
}

void DCT::_setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(itsLoadingCargo != NULL)
        {
            itsLoadingCargo->__setItsDCT(NULL);
        }
    __setItsLoadingCargo(p_LoadingCargo);
}

void DCT::_clearItsLoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsLoadingCargo");
    itsLoadingCargo = NULL;
}

void DCT::__setItsManualHMI(ManualHMI* p_ManualHMI) {
    itsManualHMI = p_ManualHMI;
    if(p_ManualHMI != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsManualHMI", p_ManualHMI, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsManualHMI");
        }
}

void DCT::_setItsManualHMI(ManualHMI* p_ManualHMI) {
    if(itsManualHMI != NULL)
        {
            itsManualHMI->__setItsDCT(NULL);
        }
    __setItsManualHMI(p_ManualHMI);
}

void DCT::_clearItsManualHMI() {
    NOTIFY_RELATION_CLEARED("itsManualHMI");
    itsManualHMI = NULL;
}

void DCT::__setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
    itsManualOverrideAutonomousMode = p_ManualOverrideAutonomousMode;
    if(p_ManualOverrideAutonomousMode != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsManualOverrideAutonomousMode", p_ManualOverrideAutonomousMode, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsManualOverrideAutonomousMode");
        }
}

void DCT::_setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
    if(itsManualOverrideAutonomousMode != NULL)
        {
            itsManualOverrideAutonomousMode->__setItsDCT(NULL);
        }
    __setItsManualOverrideAutonomousMode(p_ManualOverrideAutonomousMode);
}

void DCT::_clearItsManualOverrideAutonomousMode() {
    NOTIFY_RELATION_CLEARED("itsManualOverrideAutonomousMode");
    itsManualOverrideAutonomousMode = NULL;
}

void DCT::__setItsStopCrash(StopCrash* p_StopCrash) {
    itsStopCrash = p_StopCrash;
    if(p_StopCrash != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStopCrash", p_StopCrash, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash");
        }
}

void DCT::_setItsStopCrash(StopCrash* p_StopCrash) {
    if(itsStopCrash != NULL)
        {
            itsStopCrash->__setItsDCT(NULL);
        }
    __setItsStopCrash(p_StopCrash);
}

void DCT::_clearItsStopCrash() {
    NOTIFY_RELATION_CLEARED("itsStopCrash");
    itsStopCrash = NULL;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCT::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsDrive", false, true);
    if(myReal->itsDrive)
        {
            aomsRelations->ADD_ITEM(myReal->itsDrive);
        }
    aomsRelations->addRelation("itsStopCrash", false, true);
    if(myReal->itsStopCrash)
        {
            aomsRelations->ADD_ITEM(myReal->itsStopCrash);
        }
    aomsRelations->addRelation("itsCharging", false, true);
    if(myReal->itsCharging)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging);
        }
    aomsRelations->addRelation("itsCompareSOC", false, true);
    if(myReal->itsCompareSOC)
        {
            aomsRelations->ADD_ITEM(myReal->itsCompareSOC);
        }
    aomsRelations->addRelation("itsHMI", false, true);
    if(myReal->itsHMI)
        {
            aomsRelations->ADD_ITEM(myReal->itsHMI);
        }
    aomsRelations->addRelation("itsManualHMI", false, true);
    if(myReal->itsManualHMI)
        {
            aomsRelations->ADD_ITEM(myReal->itsManualHMI);
        }
    aomsRelations->addRelation("itsLoadingCargo", false, true);
    if(myReal->itsLoadingCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingCargo);
        }
    aomsRelations->addRelation("itsManualOverrideAutonomousMode", false, true);
    if(myReal->itsManualOverrideAutonomousMode)
        {
            aomsRelations->ADD_ITEM(myReal->itsManualOverrideAutonomousMode);
        }
    aomsRelations->addRelation("itsCoupling", false, true);
    if(myReal->itsCoupling)
        {
            aomsRelations->ADD_ITEM(myReal->itsCoupling);
        }
}
//#]

IMPLEMENT_META_P(DCT, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedDCT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCT.cpp
*********************************************************************/
