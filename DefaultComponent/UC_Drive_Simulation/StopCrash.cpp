/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: StopCrash
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\StopCrash.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "StopCrash.h"
//## auto_generated
#include "UC_StopCrash.h"
//#[ ignore
#define crashDetect_SERIALIZE OM_NO_OP

#define crashDetect_UNSERIALIZE OM_NO_OP

#define crashDetect_CONSTRUCTOR crashDetect()

#define crashMaintenance_SERIALIZE OM_NO_OP

#define crashMaintenance_UNSERIALIZE OM_NO_OP

#define crashMaintenance_CONSTRUCTOR crashMaintenance()

#define emergencyBrake_SERIALIZE OM_NO_OP

#define emergencyBrake_UNSERIALIZE OM_NO_OP

#define emergencyBrake_CONSTRUCTOR emergencyBrake()
//#]

//## package TUesla::UseCaseModelling::StopCrash


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_StopCrash, TUesla::UseCaseModelling::StopCrash)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event crashDetect()
crashDetect::crashDetect() {
    NOTIFY_EVENT_CONSTRUCTOR(crashDetect)
    setId(crashDetect_StopCrash_UseCaseModelling_TUesla_id);
}

bool crashDetect::isTypeOf(const short id) const {
    return (crashDetect_StopCrash_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(crashDetect, TUesla_UseCaseModelling_StopCrash, TUesla::UseCaseModelling::StopCrash, crashDetect())

//## event crashMaintenance()
crashMaintenance::crashMaintenance() {
    NOTIFY_EVENT_CONSTRUCTOR(crashMaintenance)
    setId(crashMaintenance_StopCrash_UseCaseModelling_TUesla_id);
}

bool crashMaintenance::isTypeOf(const short id) const {
    return (crashMaintenance_StopCrash_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(crashMaintenance, TUesla_UseCaseModelling_StopCrash, TUesla::UseCaseModelling::StopCrash, crashMaintenance())

//## event emergencyBrake()
emergencyBrake::emergencyBrake() {
    NOTIFY_EVENT_CONSTRUCTOR(emergencyBrake)
    setId(emergencyBrake_StopCrash_UseCaseModelling_TUesla_id);
}

bool emergencyBrake::isTypeOf(const short id) const {
    return (emergencyBrake_StopCrash_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(emergencyBrake, TUesla_UseCaseModelling_StopCrash, TUesla::UseCaseModelling::StopCrash, emergencyBrake())

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\StopCrash.cpp
*********************************************************************/
