/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: Drive
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\Drive.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Drive.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_Drive_Drive_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase Drive
Drive::Drive() {
    NOTIFY_CONSTRUCTOR(Drive, Drive(), 0, TUesla_Usecases_Drive_Drive_SERIALIZE);
    itsDCT = NULL;
}

Drive::~Drive() {
    NOTIFY_DESTRUCTOR(~Drive, true);
    cleanUpRelations();
}

DCT* Drive::getItsDCT() const {
    return itsDCT;
}

void Drive::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsDrive(this);
        }
    _setItsDCT(p_DCT);
}

void Drive::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            Drive* p_Drive = itsDCT->getItsDrive();
            if(p_Drive != NULL)
                {
                    itsDCT->__setItsDrive(NULL);
                }
            itsDCT = NULL;
        }
}

void Drive::__setItsDCT(DCT* p_DCT) {
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

void Drive::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsDrive(NULL);
        }
    __setItsDCT(p_DCT);
}

void Drive::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDrive::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}
//#]

IMPLEMENT_META_P(Drive, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedDrive)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\Drive.cpp
*********************************************************************/
