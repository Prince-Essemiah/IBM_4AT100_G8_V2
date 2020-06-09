/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: Usecases
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\Usecases.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Usecases.h"
//#[ ignore
#define receiveInformation_SERIALIZE OM_NO_OP

#define receiveInformation_UNSERIALIZE OM_NO_OP

#define receiveInformation_CONSTRUCTOR receiveInformation()

#define EmergencyBrake_SERIALIZE OM_NO_OP

#define EmergencyBrake_UNSERIALIZE OM_NO_OP

#define EmergencyBrake_CONSTRUCTOR EmergencyBrake()

#define OverrideManual_SERIALIZE OM_NO_OP

#define OverrideManual_UNSERIALIZE OM_NO_OP

#define OverrideManual_CONSTRUCTOR OverrideManual()

#define CrashDetect_SERIALIZE OM_NO_OP

#define CrashDetect_UNSERIALIZE OM_NO_OP

#define CrashDetect_CONSTRUCTOR CrashDetect()

#define CrashMaintenance_SERIALIZE OM_NO_OP

#define CrashMaintenance_UNSERIALIZE OM_NO_OP

#define CrashMaintenance_CONSTRUCTOR CrashMaintenance()

#define ManualOverride_SERIALIZE OM_NO_OP

#define ManualOverride_UNSERIALIZE OM_NO_OP

#define ManualOverride_CONSTRUCTOR ManualOverride()

#define CargoDoor_SERIALIZE OM_NO_OP

#define CargoDoor_UNSERIALIZE OM_NO_OP

#define CargoDoor_CONSTRUCTOR CargoDoor()

#define OverrideDone_SERIALIZE OM_NO_OP

#define OverrideDone_UNSERIALIZE OM_NO_OP

#define OverrideDone_CONSTRUCTOR OverrideDone()

#define PathPlanned_SERIALIZE OM_NO_OP

#define PathPlanned_UNSERIALIZE OM_NO_OP

#define PathPlanned_CONSTRUCTOR PathPlanned()
//#]

//## package TUesla::Usecases


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_Usecases, TUesla::Usecases)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event receiveInformation()
receiveInformation::receiveInformation() {
    NOTIFY_EVENT_CONSTRUCTOR(receiveInformation)
    setId(receiveInformation_Usecases_TUesla_id);
}

bool receiveInformation::isTypeOf(const short id) const {
    return (receiveInformation_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(receiveInformation, TUesla_Usecases, TUesla::Usecases, receiveInformation())

//## event EmergencyBrake()
EmergencyBrake::EmergencyBrake() {
    NOTIFY_EVENT_CONSTRUCTOR(EmergencyBrake)
    setId(EmergencyBrake_Usecases_TUesla_id);
}

bool EmergencyBrake::isTypeOf(const short id) const {
    return (EmergencyBrake_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(EmergencyBrake, TUesla_Usecases, TUesla::Usecases, EmergencyBrake())

//## event OverrideManual()
OverrideManual::OverrideManual() {
    NOTIFY_EVENT_CONSTRUCTOR(OverrideManual)
    setId(OverrideManual_Usecases_TUesla_id);
}

bool OverrideManual::isTypeOf(const short id) const {
    return (OverrideManual_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(OverrideManual, TUesla_Usecases, TUesla::Usecases, OverrideManual())

//## event CrashDetect()
CrashDetect::CrashDetect() {
    NOTIFY_EVENT_CONSTRUCTOR(CrashDetect)
    setId(CrashDetect_Usecases_TUesla_id);
}

bool CrashDetect::isTypeOf(const short id) const {
    return (CrashDetect_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(CrashDetect, TUesla_Usecases, TUesla::Usecases, CrashDetect())

//## event CrashMaintenance()
CrashMaintenance::CrashMaintenance() {
    NOTIFY_EVENT_CONSTRUCTOR(CrashMaintenance)
    setId(CrashMaintenance_Usecases_TUesla_id);
}

bool CrashMaintenance::isTypeOf(const short id) const {
    return (CrashMaintenance_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(CrashMaintenance, TUesla_Usecases, TUesla::Usecases, CrashMaintenance())

//## event ManualOverride()
ManualOverride::ManualOverride() {
    NOTIFY_EVENT_CONSTRUCTOR(ManualOverride)
    setId(ManualOverride_Usecases_TUesla_id);
}

bool ManualOverride::isTypeOf(const short id) const {
    return (ManualOverride_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(ManualOverride, TUesla_Usecases, TUesla::Usecases, ManualOverride())

//## event CargoDoor()
CargoDoor::CargoDoor() {
    NOTIFY_EVENT_CONSTRUCTOR(CargoDoor)
    setId(CargoDoor_Usecases_TUesla_id);
}

bool CargoDoor::isTypeOf(const short id) const {
    return (CargoDoor_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(CargoDoor, TUesla_Usecases, TUesla::Usecases, CargoDoor())

//## event OverrideDone()
OverrideDone::OverrideDone() {
    NOTIFY_EVENT_CONSTRUCTOR(OverrideDone)
    setId(OverrideDone_Usecases_TUesla_id);
}

bool OverrideDone::isTypeOf(const short id) const {
    return (OverrideDone_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(OverrideDone, TUesla_Usecases, TUesla::Usecases, OverrideDone())

//## event PathPlanned()
PathPlanned::PathPlanned() {
    NOTIFY_EVENT_CONSTRUCTOR(PathPlanned)
    setId(PathPlanned_Usecases_TUesla_id);
}

bool PathPlanned::isTypeOf(const short id) const {
    return (PathPlanned_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(PathPlanned, TUesla_Usecases, TUesla::Usecases, PathPlanned())

/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\Usecases.cpp
*********************************************************************/
