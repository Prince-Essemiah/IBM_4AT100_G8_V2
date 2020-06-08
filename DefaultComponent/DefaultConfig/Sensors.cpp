/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/

//## auto_generated
#include "Sensors.h"
//## link itsTUesla
#include "TUesla.h"
//## package TUesla::Actors::SecondaryActors

//## class Sensors
//## class Sensors::Camera
Sensors::Camera::Camera() {
}

Sensors::Camera::~Camera() {
}

//## class Sensors::Lidar
Sensors::Lidar::Lidar() {
}

Sensors::Lidar::~Lidar() {
}

//## class Sensors::Velocity
Sensors::Velocity::Velocity() {
}

Sensors::Velocity::~Velocity() {
}

Sensors::Sensors() {
    itsTUesla = NULL;
}

Sensors::~Sensors() {
    cleanUpRelations();
}

TUesla* Sensors::getItsTUesla() const {
    return itsTUesla;
}

void Sensors::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsSensors(this);
        }
    _setItsTUesla(p_TUesla);
}

void Sensors::cleanUpRelations() {
    if(itsTUesla != NULL)
        {
            Sensors* p_Sensors = itsTUesla->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsTUesla->__setItsSensors(NULL);
                }
            itsTUesla = NULL;
        }
}

void Sensors::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
}

void Sensors::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsSensors(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void Sensors::_clearItsTUesla() {
    itsTUesla = NULL;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Sensors.cpp
*********************************************************************/
