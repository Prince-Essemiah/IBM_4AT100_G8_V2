/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: CompareSOC
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\CompareSOC.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "CompareSOC.h"
//## link itsDCT
#include "DCT.h"
//#[ ignore
#define TUesla_Usecases_CompareSOC_CompareSOC_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase CompareSOC
CompareSOC::CompareSOC() {
    NOTIFY_CONSTRUCTOR(CompareSOC, CompareSOC(), 0, TUesla_Usecases_CompareSOC_CompareSOC_SERIALIZE);
    itsDCT = NULL;
}

CompareSOC::~CompareSOC() {
    NOTIFY_DESTRUCTOR(~CompareSOC, true);
    cleanUpRelations();
}

DCT* CompareSOC::getItsDCT() const {
    return itsDCT;
}

void CompareSOC::setItsDCT(DCT* p_DCT) {
    if(p_DCT != NULL)
        {
            p_DCT->_setItsCompareSOC(this);
        }
    _setItsDCT(p_DCT);
}

void CompareSOC::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCT");
            CompareSOC* p_CompareSOC = itsDCT->getItsCompareSOC();
            if(p_CompareSOC != NULL)
                {
                    itsDCT->__setItsCompareSOC(NULL);
                }
            itsDCT = NULL;
        }
}

void CompareSOC::__setItsDCT(DCT* p_DCT) {
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

void CompareSOC::_setItsDCT(DCT* p_DCT) {
    if(itsDCT != NULL)
        {
            itsDCT->__setItsCompareSOC(NULL);
        }
    __setItsDCT(p_DCT);
}

void CompareSOC::_clearItsDCT() {
    NOTIFY_RELATION_CLEARED("itsDCT");
    itsDCT = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCompareSOC::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCT", false, true);
    if(myReal->itsDCT)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCT);
        }
}
//#]

IMPLEMENT_META_P(CompareSOC, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedCompareSOC)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\CompareSOC.cpp
*********************************************************************/
