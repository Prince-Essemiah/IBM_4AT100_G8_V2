/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/

//## auto_generated
#include "Truck.h"
//## link itsTruckDriver
#include "TruckDriver.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla

//## class Truck
Truck::Truck() {
    itsTUesla = NULL;
    itsTruckDriver = NULL;
}

Truck::~Truck() {
    cleanUpRelations();
}

TUesla* Truck::getItsTUesla() const {
    return itsTUesla;
}

void Truck::setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

TruckDriver* Truck::getItsTruckDriver() const {
    return itsTruckDriver;
}

void Truck::setItsTruckDriver(TruckDriver* p_TruckDriver) {
    if(p_TruckDriver != NULL)
        {
            p_TruckDriver->_setItsTruck(this);
        }
    _setItsTruckDriver(p_TruckDriver);
}

void Truck::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            itsTUesla = NULL;
        }
    if(itsTruckDriver != NULL)
        {
            Truck* p_Truck = itsTruckDriver->getItsTruck();
            if(p_Truck != NULL)
                {
                    itsTruckDriver->__setItsTruck(NULL);
                }
            itsTruckDriver = NULL;
        }
}

void Truck::__setItsTruckDriver(TruckDriver* p_TruckDriver) {
    itsTruckDriver = p_TruckDriver;
}

void Truck::_setItsTruckDriver(TruckDriver* p_TruckDriver) {
    if(itsTruckDriver != NULL)
        {
            itsTruckDriver->__setItsTruck(NULL);
        }
    __setItsTruckDriver(p_TruckDriver);
}

void Truck::_clearItsTruckDriver() {
    itsTruckDriver = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.cpp
*********************************************************************/
