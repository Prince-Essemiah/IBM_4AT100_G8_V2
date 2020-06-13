/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCBoard
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCBoard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCBoard.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_DCBoard_DCBoard_SERIALIZE OM_NO_OP

#define SystemContext_Actors_SecondaryActors_DCBoard_TPABoard_TPABoard_SERIALIZE OM_NO_OP

#define SystemContext_Actors_SecondaryActors_DCBoard_EntranceBoard_EntranceBoard_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class DCBoard
//## class DCBoard::TPABoard
DCBoard::TPABoard::TPABoard() {
    NOTIFY_CONSTRUCTOR(TPABoard, TPABoard(), 0, SystemContext_Actors_SecondaryActors_DCBoard_TPABoard_TPABoard_SERIALIZE);
}

DCBoard::TPABoard::~TPABoard() {
    NOTIFY_DESTRUCTOR(~TPABoard, true);
}

//## class DCBoard::EntranceBoard
DCBoard::EntranceBoard::EntranceBoard() {
    NOTIFY_CONSTRUCTOR(EntranceBoard, EntranceBoard(), 0, SystemContext_Actors_SecondaryActors_DCBoard_EntranceBoard_EntranceBoard_SERIALIZE);
}

DCBoard::EntranceBoard::~EntranceBoard() {
    NOTIFY_DESTRUCTOR(~EntranceBoard, true);
}

DCBoard::DCBoard() {
    NOTIFY_CONSTRUCTOR(DCBoard, DCBoard(), 0, SystemContext_Actors_SecondaryActors_DCBoard_DCBoard_SERIALIZE);
    itsTUesla = NULL;
}

DCBoard::~DCBoard() {
    NOTIFY_DESTRUCTOR(~DCBoard, true);
    cleanUpRelations();
}

TUesla* DCBoard::getItsTUesla() const {
    return itsTUesla;
}

void DCBoard::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCBoard(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCBoard::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCBoard* p_DCBoard = itsTUesla->getItsDCBoard();
            if(p_DCBoard != NULL)
                {
                    itsTUesla->__setItsDCBoard(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCBoard::__setItsTUesla(TUesla* p_TUesla) {
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

void DCBoard::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCBoard(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCBoard::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCBoard::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
}
//#]

IMPLEMENT_META_P(DCBoard, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedDCBoard)

IMPLEMENT_META_P(DCBoard::TPABoard, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedTPABoard)

IMPLEMENT_META_P(DCBoard::EntranceBoard, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedEntranceBoard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCBoard.cpp
*********************************************************************/
