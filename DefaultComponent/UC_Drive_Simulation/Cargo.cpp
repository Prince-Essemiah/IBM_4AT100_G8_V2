/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: Cargo
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\Cargo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Cargo.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_Cargo_Cargo_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class Cargo
Cargo::Cargo() {
    NOTIFY_CONSTRUCTOR(Cargo, Cargo(), 0, TUesla_Actors_SecondaryActors_Cargo_Cargo_SERIALIZE);
    itsTUesla = NULL;
}

Cargo::~Cargo() {
    NOTIFY_DESTRUCTOR(~Cargo, true);
    cleanUpRelations();
}

TUesla* Cargo::getItsTUesla() const {
    return itsTUesla;
}

void Cargo::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsCargo(this);
        }
    _setItsTUesla(p_TUesla);
}

void Cargo::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            Cargo* p_Cargo = itsTUesla->getItsCargo();
            if(p_Cargo != NULL)
                {
                    itsTUesla->__setItsCargo(NULL);
                }
            itsTUesla = NULL;
        }
}

void Cargo::__setItsTUesla(TUesla* p_TUesla) {
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

void Cargo::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsCargo(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void Cargo::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedCargo::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(Cargo, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedCargo)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\Cargo.cpp
*********************************************************************/
