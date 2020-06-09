/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: Sensors
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//## link itsStopCrash
#include "StopCrash.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_Sensors_Sensors_SERIALIZE OM_NO_OP

#define TUesla_Actors_SecondaryActors_Sensors_Camera_Camera_SERIALIZE OM_NO_OP

#define TUesla_Actors_SecondaryActors_Sensors_Lidar_Lidar_SERIALIZE OM_NO_OP

#define TUesla_Actors_SecondaryActors_Sensors_Velocity_Velocity_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class Sensors
//## class Sensors::Camera
Sensors::Camera::Camera() {
    NOTIFY_CONSTRUCTOR(Camera, Camera(), 0, TUesla_Actors_SecondaryActors_Sensors_Camera_Camera_SERIALIZE);
}

Sensors::Camera::~Camera() {
    NOTIFY_DESTRUCTOR(~Camera, true);
}

//## class Sensors::Lidar
Sensors::Lidar::Lidar() {
    NOTIFY_CONSTRUCTOR(Lidar, Lidar(), 0, TUesla_Actors_SecondaryActors_Sensors_Lidar_Lidar_SERIALIZE);
}

Sensors::Lidar::~Lidar() {
    NOTIFY_DESTRUCTOR(~Lidar, true);
}

//## class Sensors::Velocity
Sensors::Velocity::Velocity() {
    NOTIFY_CONSTRUCTOR(Velocity, Velocity(), 0, TUesla_Actors_SecondaryActors_Sensors_Velocity_Velocity_SERIALIZE);
}

Sensors::Velocity::~Velocity() {
    NOTIFY_DESTRUCTOR(~Velocity, true);
}

Sensors::Sensors() {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, TUesla_Actors_SecondaryActors_Sensors_Sensors_SERIALIZE);
    itsStopCrash = NULL;
    itsTUesla = NULL;
}

Sensors::~Sensors() {
    NOTIFY_DESTRUCTOR(~Sensors, true);
    cleanUpRelations();
}

StopCrash* Sensors::getItsStopCrash() const {
    return itsStopCrash;
}

void Sensors::setItsStopCrash(StopCrash* p_StopCrash) {
    if(p_StopCrash != NULL)
        {
            p_StopCrash->_setItsSensors(this);
        }
    _setItsStopCrash(p_StopCrash);
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
    if(itsStopCrash != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash");
            Sensors* p_Sensors = itsStopCrash->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsStopCrash->__setItsSensors(NULL);
                }
            itsStopCrash = NULL;
        }
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            Sensors* p_Sensors = itsTUesla->getItsSensors();
            if(p_Sensors != NULL)
                {
                    itsTUesla->__setItsSensors(NULL);
                }
            itsTUesla = NULL;
        }
}

void Sensors::__setItsStopCrash(StopCrash* p_StopCrash) {
    itsStopCrash = p_StopCrash;
    if(p_StopCrash != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsStopCrash", p_StopCrash, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsStopCrash");
        }
}

void Sensors::_setItsStopCrash(StopCrash* p_StopCrash) {
    if(itsStopCrash != NULL)
        {
            itsStopCrash->__setItsSensors(NULL);
        }
    __setItsStopCrash(p_StopCrash);
}

void Sensors::_clearItsStopCrash() {
    NOTIFY_RELATION_CLEARED("itsStopCrash");
    itsStopCrash = NULL;
}

void Sensors::__setItsTUesla(TUesla* p_TUesla) {
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

void Sensors::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsSensors(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void Sensors::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedSensors::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsStopCrash", false, true);
    if(myReal->itsStopCrash)
        {
            aomsRelations->ADD_ITEM(myReal->itsStopCrash);
        }
}
//#]

IMPLEMENT_META_P(Sensors, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedSensors)

IMPLEMENT_META_P(Sensors::Camera, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedCamera)

IMPLEMENT_META_P(Sensors::Lidar, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedLidar)

IMPLEMENT_META_P(Sensors::Velocity, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedVelocity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\Sensors.cpp
*********************************************************************/
