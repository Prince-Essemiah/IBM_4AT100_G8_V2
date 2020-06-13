/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: EnvironmentSensors
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\EnvironmentSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EnvironmentSensors.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_EnvironmentSensors_EnvironmentSensors_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class EnvironmentSensors
EnvironmentSensors::EnvironmentSensors() {
    NOTIFY_CONSTRUCTOR(EnvironmentSensors, EnvironmentSensors(), 0, SystemContext_Actors_SecondaryActors_EnvironmentSensors_EnvironmentSensors_SERIALIZE);
    itsTUesla = NULL;
}

EnvironmentSensors::~EnvironmentSensors() {
    NOTIFY_DESTRUCTOR(~EnvironmentSensors, true);
    cleanUpRelations();
}

TUesla* EnvironmentSensors::getItsTUesla() const {
    return itsTUesla;
}

void EnvironmentSensors::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsEnvironmentSensors(this);
        }
    _setItsTUesla(p_TUesla);
}

void EnvironmentSensors::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            EnvironmentSensors* p_EnvironmentSensors = itsTUesla->getItsEnvironmentSensors();
            if(p_EnvironmentSensors != NULL)
                {
                    itsTUesla->__setItsEnvironmentSensors(NULL);
                }
            itsTUesla = NULL;
        }
}

void EnvironmentSensors::__setItsTUesla(TUesla* p_TUesla) {
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

void EnvironmentSensors::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsEnvironmentSensors(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void EnvironmentSensors::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedEnvironmentSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(EnvironmentSensors, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedEnvironmentSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\EnvironmentSensors.cpp
*********************************************************************/
