/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: EnvironmentSensors
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\EnvironmentSensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "EnvironmentSensors.h"
//## link itsHMI
#include "HMI.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_EnvironmentSensors_EnvironmentSensors_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class EnvironmentSensors
EnvironmentSensors::EnvironmentSensors() {
    NOTIFY_CONSTRUCTOR(EnvironmentSensors, EnvironmentSensors(), 0, TUesla_Actors_SecondaryActors_EnvironmentSensors_EnvironmentSensors_SERIALIZE);
    itsHMI = NULL;
    itsTUesla = NULL;
}

EnvironmentSensors::~EnvironmentSensors() {
    NOTIFY_DESTRUCTOR(~EnvironmentSensors, true);
    cleanUpRelations();
}

HMI* EnvironmentSensors::getItsHMI() const {
    return itsHMI;
}

void EnvironmentSensors::setItsHMI(HMI* p_HMI) {
    if(p_HMI != NULL)
        {
            p_HMI->_setItsEnvironmentSensors(this);
        }
    _setItsHMI(p_HMI);
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
    if(itsHMI != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsHMI");
            EnvironmentSensors* p_EnvironmentSensors = itsHMI->getItsEnvironmentSensors();
            if(p_EnvironmentSensors != NULL)
                {
                    itsHMI->__setItsEnvironmentSensors(NULL);
                }
            itsHMI = NULL;
        }
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

void EnvironmentSensors::__setItsHMI(HMI* p_HMI) {
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

void EnvironmentSensors::_setItsHMI(HMI* p_HMI) {
    if(itsHMI != NULL)
        {
            itsHMI->__setItsEnvironmentSensors(NULL);
        }
    __setItsHMI(p_HMI);
}

void EnvironmentSensors::_clearItsHMI() {
    NOTIFY_RELATION_CLEARED("itsHMI");
    itsHMI = NULL;
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
    aomsRelations->addRelation("itsHMI", false, true);
    if(myReal->itsHMI)
        {
            aomsRelations->ADD_ITEM(myReal->itsHMI);
        }
}
//#]

IMPLEMENT_META_P(EnvironmentSensors, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedEnvironmentSensors)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\EnvironmentSensors.cpp
*********************************************************************/
