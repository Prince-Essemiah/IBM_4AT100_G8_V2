/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCBoard
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCBoard.cpp
*********************************************************************/

//## auto_generated
#include "DCBoard.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

//## class DCBoard
//## class DCBoard::TPABoard
DCBoard::TPABoard::TPABoard() {
}

DCBoard::TPABoard::~TPABoard() {
}

//## class DCBoard::EntranceBoard
DCBoard::EntranceBoard::EntranceBoard() {
}

DCBoard::EntranceBoard::~EntranceBoard() {
}

DCBoard::DCBoard() {
    itsTUesla = NULL;
}

DCBoard::~DCBoard() {
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
}

void DCBoard::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCBoard(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCBoard::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCBoard.cpp
*********************************************************************/
