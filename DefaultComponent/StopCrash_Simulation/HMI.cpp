/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: HMI
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\HMI.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "HMI.h"
//## link itsDCT
#include "DCT.h"
//## link itsEnvironmentSensors
#include "EnvironmentSensors.h"
//#[ ignore
#define TUesla_Usecases_HMI_HMI_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase HMI
HMI::HMI() {
    NOTIFY_CONSTRUCTOR(HMI, HMI(), 0, TUesla_Usecases_HMI_HMI_SERIALIZE);
    itsDCT = NULL;
    itsEnvironmentSensors = NULL;
}

HMI::~HMI() {
    NOTIFY_DESTRUCTOR(~HMI, true);
    cleanUpRelations();
}

DCT* HMI::getItsDCT() const {
    return itsDCT;
}

void HMI::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsHMI(this);
        }
    _setItsDCT(p_DCT);
}

EnvironmentSensors* HMI::getItsEnvironmentSensors() const {
    return itsEnvironmentSensors;
}

void HMI::setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    if(p_EnvironmentSensors != NULL)
        {
            p_EnvironmentSensors->_setItsHMI(this);
        }
    _setItsEnvironmentSensors(p_EnvironmentSensors);
}

void HMI::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            HMI* p_HMI = itsDCT->getItsHMI();
            if(p_HMI != NULL)
                {
                    itsDCT->__setItsHMI(NULL);
                }
            itsDCT = NULL;
        }
    if(itsEnvironmentSensors != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsEnvironmentSensors");
            HMI* p_HMI = itsEnvironmentSensors->getItsHMI();
            if(p_HMI != NULL)
                {
                    itsEnvironmentSensors->__setItsHMI(NULL);
                }
            itsEnvironmentSensors = NULL;
        }
}

void HMI::__setItsDCT(DCT* p_DCT) {
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

void HMI::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsHMI(NULL);
        }
    __setItsDCT(p_DCT);
}

void HMI::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

void HMI::__setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
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

void HMI::_setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors) {
    if(itsEnvironmentSensors != NULL)
        {
            itsEnvironmentSensors->__setItsHMI(NULL);
        }
    __setItsEnvironmentSensors(p_EnvironmentSensors);
}

void HMI::_clearItsEnvironmentSensors() {
    NOTIFY_RELATION_CLEARED("itsEnvironmentSensors");
    itsEnvironmentSensors = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedHMI::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsEnvironmentSensors", false, true);
    if(myReal->itsEnvironmentSensors)
        {
            aomsRelations->ADD_ITEM(myReal->itsEnvironmentSensors);
        }
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}
//#]

IMPLEMENT_META_P(HMI, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedHMI)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\HMI.cpp
*********************************************************************/
