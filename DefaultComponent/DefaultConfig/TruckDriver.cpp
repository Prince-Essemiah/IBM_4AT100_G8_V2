/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TruckDriver
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\TruckDriver.cpp
*********************************************************************/

//## auto_generated
#include "TruckDriver.h"
//## link itsTruck
#include "Truck.h"
//## link itsTUesla
#include "TUesla.h"
//## package ActorPkg

//## actor TruckDriver
TruckDriver::TruckDriver() {
    itsTUesla = NULL;
    itsTruck = NULL;
}

TruckDriver::~TruckDriver() {
    cleanUpRelations();
}

TUesla* TruckDriver::getItsTUesla() const {
    return itsTUesla;
}

void TruckDriver::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsTruckDriver(this);
        }
    _setItsTUesla(p_TUesla);
}

Truck* TruckDriver::getItsTruck() const {
    return itsTruck;
}

void TruckDriver::setItsTruck(Truck* p_Truck) {
    if(p_Truck != NULL)
        {
            p_Truck->_setItsTruckDriver(this);
        }
    _setItsTruck(p_Truck);
}

void TruckDriver::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            TruckDriver* p_TruckDriver = itsTUesla->getItsTruckDriver();
            if(p_TruckDriver != NULL)
                {
                    itsTUesla->__setItsTruckDriver(NULL);
                }
            itsTUesla = NULL;
        }
    if(itsTruck != NULL)
        {
            TruckDriver* p_TruckDriver = itsTruck->getItsTruckDriver();
            if(p_TruckDriver != NULL)
                {
                    itsTruck->__setItsTruckDriver(NULL);
                }
            itsTruck = NULL;
        }
}

void TruckDriver::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void TruckDriver::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsTruckDriver(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void TruckDriver::_clearItsTUesla() {
    itsTUesla = NULL;
}

void TruckDriver::__setItsTruck(Truck* p_Truck) {
    itsTruck = p_Truck;
}

void TruckDriver::_setItsTruck(Truck* p_Truck) {
    if(itsTruck != NULL)
        {
            itsTruck->__setItsTruckDriver(NULL);
        }
    __setItsTruck(p_Truck);
}

void TruckDriver::_clearItsTruck() {
    itsTruck = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TruckDriver.cpp
*********************************************************************/
