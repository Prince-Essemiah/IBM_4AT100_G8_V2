/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLoadingEmployee.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLoadingEmployee.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::PrimaryActors

//## actor DCLoadingEmployee
DCLoadingEmployee::DCLoadingEmployee() {
    NOTIFY_CONSTRUCTOR(DCLoadingEmployee, DCLoadingEmployee(), 0, TUesla_Actors_PrimaryActors_DCLoadingEmployee_DCLoadingEmployee_SERIALIZE);
    itsTUesla = NULL;
}

DCLoadingEmployee::~DCLoadingEmployee() {
    NOTIFY_DESTRUCTOR(~DCLoadingEmployee, true);
    cleanUpRelations();
}

TUesla* DCLoadingEmployee::getItsTUesla() const {
    return itsTUesla;
}

void DCLoadingEmployee::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLoadingEmployee(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCLoadingEmployee::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLoadingEmployee* p_DCLoadingEmployee = itsTUesla->getItsDCLoadingEmployee();
            if(p_DCLoadingEmployee != NULL)
                {
                    itsTUesla->__setItsDCLoadingEmployee(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLoadingEmployee::__setItsTUesla(TUesla* p_TUesla) {
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

void DCLoadingEmployee::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLoadingEmployee(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLoadingEmployee::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLoadingEmployee::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(DCLoadingEmployee, TUesla_Actors_PrimaryActors, TUesla::Actors::PrimaryActors, false, OMAnimatedDCLoadingEmployee)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLoadingEmployee.cpp
*********************************************************************/
