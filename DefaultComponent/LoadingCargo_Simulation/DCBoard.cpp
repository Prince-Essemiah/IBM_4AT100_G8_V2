/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: DCBoard
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCBoard.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCBoard.h"
//## link itsParkingAssign
#include "ParkingAssign.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_DCBoard_DCBoard_SERIALIZE OM_NO_OP

#define TUesla_Actors_SecondaryActors_DCBoard_TPABoard_TPABoard_SERIALIZE OM_NO_OP

#define TUesla_Actors_SecondaryActors_DCBoard_EntranceBoard_EntranceBoard_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class DCBoard
//## class DCBoard::TPABoard
DCBoard::TPABoard::TPABoard() {
    NOTIFY_CONSTRUCTOR(TPABoard, TPABoard(), 0, TUesla_Actors_SecondaryActors_DCBoard_TPABoard_TPABoard_SERIALIZE);
}

DCBoard::TPABoard::~TPABoard() {
    NOTIFY_DESTRUCTOR(~TPABoard, true);
}

//## class DCBoard::EntranceBoard
DCBoard::EntranceBoard::EntranceBoard() {
    NOTIFY_CONSTRUCTOR(EntranceBoard, EntranceBoard(), 0, TUesla_Actors_SecondaryActors_DCBoard_EntranceBoard_EntranceBoard_SERIALIZE);
}

DCBoard::EntranceBoard::~EntranceBoard() {
    NOTIFY_DESTRUCTOR(~EntranceBoard, true);
}

DCBoard::DCBoard() {
    NOTIFY_CONSTRUCTOR(DCBoard, DCBoard(), 0, TUesla_Actors_SecondaryActors_DCBoard_DCBoard_SERIALIZE);
    itsParkingAssign = NULL;
    itsTUesla = NULL;
}

DCBoard::~DCBoard() {
    NOTIFY_DESTRUCTOR(~DCBoard, true);
    cleanUpRelations();
}

ParkingAssign* DCBoard::getItsParkingAssign() const {
    return itsParkingAssign;
}

void DCBoard::setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(p_ParkingAssign != NULL)
        {
            p_ParkingAssign->_setItsDCBoard(this);
        }
    _setItsParkingAssign(p_ParkingAssign);
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
    if(itsParkingAssign != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
            DCBoard* p_DCBoard = itsParkingAssign->getItsDCBoard();
            if(p_DCBoard != NULL)
                {
                    itsParkingAssign->__setItsDCBoard(NULL);
                }
            itsParkingAssign = NULL;
        }
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

void DCBoard::__setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    itsParkingAssign = p_ParkingAssign;
    if(p_ParkingAssign != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsParkingAssign", p_ParkingAssign, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
        }
}

void DCBoard::_setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(itsParkingAssign != NULL)
        {
            itsParkingAssign->__setItsDCBoard(NULL);
        }
    __setItsParkingAssign(p_ParkingAssign);
}

void DCBoard::_clearItsParkingAssign() {
    NOTIFY_RELATION_CLEARED("itsParkingAssign");
    itsParkingAssign = NULL;
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
    aomsRelations->addRelation("itsParkingAssign", false, true);
    if(myReal->itsParkingAssign)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingAssign);
        }
}
//#]

IMPLEMENT_META_P(DCBoard, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedDCBoard)

IMPLEMENT_META_P(DCBoard::TPABoard, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedTPABoard)

IMPLEMENT_META_P(DCBoard::EntranceBoard, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedEntranceBoard)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCBoard.cpp
*********************************************************************/
