/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DistributionCenter
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DistributionCenter.cpp
*********************************************************************/

//## auto_generated
#include "DistributionCenter.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class DistributionCenter
DistributionCenter::DistributionCenter() {
    itsTUesla = NULL;
}

DistributionCenter::~DistributionCenter() {
    cleanUpRelations();
}

TUesla* DistributionCenter::getItsTUesla() const {
    return itsTUesla;
}

void DistributionCenter::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void DistributionCenter::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DistributionCenter.cpp
*********************************************************************/
