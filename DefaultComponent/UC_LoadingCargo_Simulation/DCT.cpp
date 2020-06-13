/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: DCT
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCT.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCT.h"
//## link itsTUesla
#include "TUesla.h"
//## link itsUC_LoadingCargo
#include "UC_LoadingCargo.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_DCT_DCT_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class DCT
DCT::DCT() {
    NOTIFY_CONSTRUCTOR(DCT, DCT(), 0, SystemContext_Actors_SecondaryActors_DCT_DCT_SERIALIZE);
    itsTUesla = NULL;
    itsUC_LoadingCargo = NULL;
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
}
//#]

IMPLEMENT_META_P(DCT, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedDCT)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCT.cpp
*********************************************************************/
