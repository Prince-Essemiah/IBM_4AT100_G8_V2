/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCT
//!	Generated Date	: Sun, 7, Jun 2020  
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
//#[ ignore
#define TUesla_Actors_SecondaryActors_DCT_DCT_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class DCT
DCT::DCT() {
    NOTIFY_CONSTRUCTOR(DCT, DCT(), 0, TUesla_Actors_SecondaryActors_DCT_DCT_SERIALIZE);
    itsTUesla = NULL;
    itsUC_Drive = NULL;
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

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCT::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsUC_Drive", false, true);
    if(myReal->itsUC_Drive)
        {
            aomsRelations->ADD_ITEM(myReal->itsUC_Drive);
        }
}
//#]

IMPLEMENT_META_P(DCT, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedDCT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.cpp
*********************************************************************/
