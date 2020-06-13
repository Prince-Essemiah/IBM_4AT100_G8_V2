/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: Sensors
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\Sensors.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Sensors.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define SystemContext_Actors_SecondaryActors_Sensors_Sensors_SERIALIZE OM_NO_OP

#define SystemContext_Actors_SecondaryActors_Sensors_Camera_Camera_SERIALIZE OM_NO_OP

#define SystemContext_Actors_SecondaryActors_Sensors_Lidar_Lidar_SERIALIZE OM_NO_OP

#define SystemContext_Actors_SecondaryActors_Sensors_Velocity_Velocity_SERIALIZE OM_NO_OP
//#]

//## package SystemContext::Actors::SecondaryActors

//## class Sensors
//## class Sensors::Camera
Sensors::Camera::Camera() {
    NOTIFY_CONSTRUCTOR(Camera, Camera(), 0, SystemContext_Actors_SecondaryActors_Sensors_Camera_Camera_SERIALIZE);
}

Sensors::Camera::~Camera() {
    NOTIFY_DESTRUCTOR(~Camera, true);
}

//## class Sensors::Lidar
Sensors::Lidar::Lidar() {
    NOTIFY_CONSTRUCTOR(Lidar, Lidar(), 0, SystemContext_Actors_SecondaryActors_Sensors_Lidar_Lidar_SERIALIZE);
}

Sensors::Lidar::~Lidar() {
    NOTIFY_DESTRUCTOR(~Lidar, true);
}

//## class Sensors::Velocity
Sensors::Velocity::Velocity() {
    NOTIFY_CONSTRUCTOR(Velocity, Velocity(), 0, SystemContext_Actors_SecondaryActors_Sensors_Velocity_Velocity_SERIALIZE);
}

Sensors::Velocity::~Velocity() {
    NOTIFY_DESTRUCTOR(~Velocity, true);
}

Sensors::Sensors() {
    NOTIFY_CONSTRUCTOR(Sensors, Sensors(), 0, SystemContext_Actors_SecondaryActors_Sensors_Sensors_SERIALIZE);
    itsTUesla = NULL;
}

Sensors::~Sensors() {
    NOTIFY_DESTRUCTOR(~Sensors, true);
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
            NOTIFY_RELATION_CLEARED("itsTUesla");
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
}
//#]

IMPLEMENT_META_P(Sensors, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedSensors)

IMPLEMENT_META_P(Sensors::Camera, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedCamera)

IMPLEMENT_META_P(Sensors::Lidar, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedLidar)

IMPLEMENT_META_P(Sensors::Velocity, SystemContext_Actors_SecondaryActors, SystemContext::Actors::SecondaryActors, false, OMAnimatedVelocity)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\Sensors.cpp
*********************************************************************/
