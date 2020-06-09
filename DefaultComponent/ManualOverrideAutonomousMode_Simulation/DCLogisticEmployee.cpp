/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\DCLogisticEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLogisticEmployee.h"
//## link itsCharging
#include "Charging.h"
//## link itsManualHMI
#include "ManualHMI.h"
//## link itsManualOverrideAutonomousMode
#include "ManualOverrideAutonomousMode.h"
//## link itsParkingAssign
#include "ParkingAssign.h"
//## link itsStopCrash
#include "StopCrash.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::PrimaryActors

//## actor DCLogisticEmployee
DCLogisticEmployee::DCLogisticEmployee() {
    NOTIFY_CONSTRUCTOR(DCLogisticEmployee, DCLogisticEmployee(), 0, TUesla_Actors_PrimaryActors_DCLogisticEmployee_DCLogisticEmployee_SERIALIZE);
    itsCharging = NULL;
    itsManualHMI = NULL;
    itsManualOverrideAutonomousMode = NULL;
    itsParkingAssign = NULL;
    itsStopCrash = NULL;
    itsStopCrash_1 = NULL;
    itsTUesla = NULL;
}

DCLogisticEmployee::~DCLogisticEmployee() {
    NOTIFY_DESTRUCTOR(~DCLogisticEmployee, true);
    cleanUpRelations();
}

Charging* DCLogisticEmployee::getItsCharging() const {
    return itsCharging;
}

void DCLogisticEmployee::setItsCharging(Charging* p_Charging) {
    if(p_Charging != NULL)
        {
            p_Charging->_setItsDCLogisticEmployee(this);
        }
    _setItsCharging(p_Charging);
}

ManualHMI* DCLogisticEmployee::getItsManualHMI() const {
    return itsManualHMI;
}

void DCLogisticEmployee::setItsManualHMI(ManualHMI* p_ManualHMI) {
    if(p_ManualHMI != NULL)
        {
            p_ManualHMI->_setItsDCLogisticEmployee(this);
        }
    _setItsManualHMI(p_ManualHMI);
}

ManualOverrideAutonomousMode* DCLogisticEmployee::getItsManualOverrideAutonomousMode() const {
    return itsManualOverrideAutonomousMode;
}

void DCLogisticEmployee::setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
    if(p_ManualOverrideAutonomousMode != NULL)
        {
            p_ManualOverrideAutonomousMode->_setItsDCLogisticEmployee(this);
        }
    _setItsManualOverrideAutonomousMode(p_ManualOverrideAutonomousMode);
}

ParkingAssign* DCLogisticEmployee::getItsParkingAssign() const {
    return itsParkingAssign;
}

void DCLogisticEmployee::setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(p_ParkingAssign != NULL)
        {
            p_ParkingAssign->_setItsDCLogisticEmployee(this);
        }
    _setItsParkingAssign(p_ParkingAssign);
}

StopCrash* DCLogisticEmployee::getItsStopCrash() const {
    return itsStopCrash;
}

void DCLogisticEmployee::setItsStopCrash(StopCrash* p_StopCrash) {
    if(p_StopCrash != NULL)
        {
            p_StopCrash->_setItsDCLogisticEmployee(this);
        }
    _setItsStopCrash(p_StopCrash);
}

StopCrash* DCLogisticEmployee::getItsStopCrash_1() const {
    return itsStopCrash_1;
}

void DCLogisticEmployee::setItsStopCrash_1(StopCrash* p_StopCrash) {
    if(p_StopCrash != NULL)
        {
            p_StopCrash->_setItsDCLogisticEmployee_1(this);
        }
    _setItsStopCrash_1(p_StopCrash);
}

TUesla* DCLogisticEmployee::getItsTUesla() const {
    return itsTUesla;
}

void DCLogisticEmployee::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLogisticEmployee(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCLogisticEmployee::cleanUpRelations() {
    if(itsCharging != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsCharging");
            DCLogisticEmployee* p_DCLogisticEmployee = itsCharging->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsCharging->__setItsDCLogisticEmployee(NULL);
                }
            itsCharging = NULL;
        }
    if(itsManualHMI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsManualHMI");
            DCLogisticEmployee* p_DCLogisticEmployee = itsManualHMI->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsManualHMI->__setItsDCLogisticEmployee(NULL);
                }
            itsManualHMI = NULL;
        }
    if(itsManualOverrideAutonomousMode != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsManualOverrideAutonomousMode");
            DCLogisticEmployee* p_DCLogisticEmployee = itsManualOverrideAutonomousMode->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsManualOverrideAutonomousMode->__setItsDCLogisticEmployee(NULL);
                }
            itsManualOverrideAutonomousMode = NULL;
        }
    if(itsParkingAssign != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
            DCLogisticEmployee* p_DCLogisticEmployee = itsParkingAssign->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsParkingAssign->__setItsDCLogisticEmployee(NULL);
                }
            itsParkingAssign = NULL;
        }
    if(itsStopCrash != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash");
            DCLogisticEmployee* p_DCLogisticEmployee = itsStopCrash->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsStopCrash->__setItsDCLogisticEmployee(NULL);
                }
            itsStopCrash = NULL;
        }
    if(itsStopCrash_1 != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash_1");
            DCLogisticEmployee* p_DCLogisticEmployee = itsStopCrash_1->getItsDCLogisticEmployee_1();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsStopCrash_1->__setItsDCLogisticEmployee_1(NULL);
                }
            itsStopCrash_1 = NULL;
        }
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLogisticEmployee* p_DCLogisticEmployee = itsTUesla->getItsDCLogisticEmployee();
            if(p_DCLogisticEmployee != NULL)
                {
                    itsTUesla->__setItsDCLogisticEmployee(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLogisticEmployee::__setItsCharging(Charging* p_Charging) {
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

void DCLogisticEmployee::_setItsCharging(Charging* p_Charging) {
    if(itsCharging != NULL)
        {
            itsCharging->__setItsDCLogisticEmployee(NULL);
        }
    __setItsCharging(p_Charging);
}

void DCLogisticEmployee::_clearItsCharging() {
    NOTIFY_RELATION_CLEARED("itsCharging");
    itsCharging = NULL;
}

void DCLogisticEmployee::__setItsManualHMI(ManualHMI* p_ManualHMI) {
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

void DCLogisticEmployee::_setItsManualHMI(ManualHMI* p_ManualHMI) {
    if(itsManualHMI != NULL)
        {
            itsManualHMI->__setItsDCLogisticEmployee(NULL);
        }
    __setItsManualHMI(p_ManualHMI);
}

void DCLogisticEmployee::_clearItsManualHMI() {
    NOTIFY_RELATION_CLEARED("itsManualHMI");
    itsManualHMI = NULL;
}

void DCLogisticEmployee::__setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
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

void DCLogisticEmployee::_setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode) {
    if(itsManualOverrideAutonomousMode != NULL)
        {
            itsManualOverrideAutonomousMode->__setItsDCLogisticEmployee(NULL);
        }
    __setItsManualOverrideAutonomousMode(p_ManualOverrideAutonomousMode);
}

void DCLogisticEmployee::_clearItsManualOverrideAutonomousMode() {
    NOTIFY_RELATION_CLEARED("itsManualOverrideAutonomousMode");
    itsManualOverrideAutonomousMode = NULL;
}

void DCLogisticEmployee::__setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    itsParkingAssign = p_ParkingAssign;
    if(p_ParkingAssign != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsParkingAssign", p_ParkingAssign, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
        }
}

void DCLogisticEmployee::_setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(itsParkingAssign != NULL)
        {
            itsParkingAssign->__setItsDCLogisticEmployee(NULL);
        }
    __setItsParkingAssign(p_ParkingAssign);
}

void DCLogisticEmployee::_clearItsParkingAssign() {
    NOTIFY_RELATION_CLEARED("itsParkingAssign");
    itsParkingAssign = NULL;
}

void DCLogisticEmployee::__setItsStopCrash(StopCrash* p_StopCrash) {
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

void DCLogisticEmployee::_setItsStopCrash(StopCrash* p_StopCrash) {
    if(itsStopCrash != NULL)
        {
            itsStopCrash->__setItsDCLogisticEmployee(NULL);
        }
    __setItsStopCrash(p_StopCrash);
}

void DCLogisticEmployee::_clearItsStopCrash() {
    NOTIFY_RELATION_CLEARED("itsStopCrash");
    itsStopCrash = NULL;
}

void DCLogisticEmployee::__setItsStopCrash_1(StopCrash* p_StopCrash) {
    itsStopCrash_1 = p_StopCrash;
    if(p_StopCrash != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStopCrash_1", p_StopCrash, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash_1");
        }
}

void DCLogisticEmployee::_setItsStopCrash_1(StopCrash* p_StopCrash) {
    if(itsStopCrash_1 != NULL)
        {
            itsStopCrash_1->__setItsDCLogisticEmployee_1(NULL);
        }
    __setItsStopCrash_1(p_StopCrash);
}

void DCLogisticEmployee::_clearItsStopCrash_1() {
    NOTIFY_RELATION_CLEARED("itsStopCrash_1");
    itsStopCrash_1 = NULL;
}

void DCLogisticEmployee::__setItsTUesla(TUesla* p_TUesla) {
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

void DCLogisticEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLogisticEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLogisticEmployee::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLogisticEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsParkingAssign", false, true);
    if(myReal->itsParkingAssign)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingAssign);
        }
    aomsRelations->addRelation("itsCharging", false, true);
    if(myReal->itsCharging)
        {
            aomsRelations->ADD_ITEM(myReal->itsCharging);
        }
    aomsRelations->addRelation("itsManualHMI", false, true);
    if(myReal->itsManualHMI)
        {
            aomsRelations->ADD_ITEM(myReal->itsManualHMI);
        }
    aomsRelations->addRelation("itsManualOverrideAutonomousMode", false, true);
    if(myReal->itsManualOverrideAutonomousMode)
        {
            aomsRelations->ADD_ITEM(myReal->itsManualOverrideAutonomousMode);
        }
    aomsRelations->addRelation("itsStopCrash", false, true);
    if(myReal->itsStopCrash)
        {
            aomsRelations->ADD_ITEM(myReal->itsStopCrash);
        }
    aomsRelations->addRelation("itsStopCrash_1", false, true);
    if(myReal->itsStopCrash_1)
        {
            aomsRelations->ADD_ITEM(myReal->itsStopCrash_1);
        }
}
//#]

IMPLEMENT_META_P(DCLogisticEmployee, TUesla_Actors_PrimaryActors, TUesla::Actors::PrimaryActors, false, OMAnimatedDCLogisticEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\DCLogisticEmployee.cpp
*********************************************************************/
