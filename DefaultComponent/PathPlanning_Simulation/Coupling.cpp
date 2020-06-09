/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: Coupling
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\Coupling.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Coupling.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_Coupling_Coupling_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase Coupling
Coupling::Coupling() {
    NOTIFY_CONSTRUCTOR(Coupling, Coupling(), 0, TUesla_Usecases_Coupling_Coupling_SERIALIZE);
    itsDCT = NULL;
}

Coupling::~Coupling() {
    NOTIFY_DESTRUCTOR(~Coupling, true);
    cleanUpRelations();
}

DCT* Coupling::getItsDCT() const {
    return itsDCT;
}

void Coupling::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsCoupling(this);
        }
    _setItsDCT(p_DCT);
}

void Coupling::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            Coupling* p_Coupling = itsDCT->getItsCoupling();
            if(p_Coupling != NULL)
                {
                    itsDCT->__setItsCoupling(NULL);
                }
            itsDCT = NULL;
        }
}

void Coupling::__setItsDCT(DCT* p_DCT) {
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

void Coupling::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsCoupling(NULL);
        }
    __setItsDCT(p_DCT);
}

void Coupling::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCoupling::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}
//#]

IMPLEMENT_META_P(Coupling, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedCoupling)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\Coupling.cpp
*********************************************************************/
