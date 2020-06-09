/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: Usecases
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\Usecases.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Usecases.h"
//#[ ignore
#define detectCrash_SERIALIZE OM_NO_OP

#define detectCrash_UNSERIALIZE OM_NO_OP

#define detectCrash_CONSTRUCTOR detectCrash()

#define callMaintanence_SERIALIZE OM_NO_OP

#define callMaintanence_UNSERIALIZE OM_NO_OP

#define callMaintanence_CONSTRUCTOR callMaintanence()

#define receiveInformation_SERIALIZE OM_NO_OP

#define receiveInformation_UNSERIALIZE OM_NO_OP

#define receiveInformation_CONSTRUCTOR receiveInformation()

#define reqLoadDCT_SERIALIZE OM_NO_OP

#define reqLoadDCT_UNSERIALIZE OM_NO_OP

#define reqLoadDCT_CONSTRUCTOR reqLoadDCT()

#define evDCTDocks_SERIALIZE OM_NO_OP

#define evDCTDocks_UNSERIALIZE OM_NO_OP

#define evDCTDocks_CONSTRUCTOR evDCTDocks()

#define reqLoadingComplete_SERIALIZE OM_NO_OP

#define reqLoadingComplete_UNSERIALIZE OM_NO_OP

#define reqLoadingComplete_CONSTRUCTOR reqLoadingComplete()

#define evManualOverride_SERIALIZE OM_NO_OP

#define evManualOverride_UNSERIALIZE OM_NO_OP

#define evManualOverride_CONSTRUCTOR evManualOverride()

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
//#]

//## package TUesla::Usecases


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_Usecases, TUesla::Usecases)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event detectCrash()
detectCrash::detectCrash() {
    NOTIFY_EVENT_CONSTRUCTOR(detectCrash)
    setId(detectCrash_Usecases_TUesla_id);
}

bool detectCrash::isTypeOf(const short id) const {
    return (detectCrash_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(detectCrash, TUesla_Usecases, TUesla::Usecases, detectCrash())

//## event callMaintanence()
callMaintanence::callMaintanence() {
    NOTIFY_EVENT_CONSTRUCTOR(callMaintanence)
    setId(callMaintanence_Usecases_TUesla_id);
}

bool callMaintanence::isTypeOf(const short id) const {
    return (callMaintanence_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(callMaintanence, TUesla_Usecases, TUesla::Usecases, callMaintanence())

//## event receiveInformation()
receiveInformation::receiveInformation() {
    NOTIFY_EVENT_CONSTRUCTOR(receiveInformation)
    setId(receiveInformation_Usecases_TUesla_id);
}

bool receiveInformation::isTypeOf(const short id) const {
    return (receiveInformation_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(receiveInformation, TUesla_Usecases, TUesla::Usecases, receiveInformation())

//## event reqLoadDCT()
reqLoadDCT::reqLoadDCT() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLoadDCT)
    setId(reqLoadDCT_Usecases_TUesla_id);
}

bool reqLoadDCT::isTypeOf(const short id) const {
    return (reqLoadDCT_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(reqLoadDCT, TUesla_Usecases, TUesla::Usecases, reqLoadDCT())

//## event evDCTDocks()
evDCTDocks::evDCTDocks() {
    NOTIFY_EVENT_CONSTRUCTOR(evDCTDocks)
    setId(evDCTDocks_Usecases_TUesla_id);
}

bool evDCTDocks::isTypeOf(const short id) const {
    return (evDCTDocks_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(evDCTDocks, TUesla_Usecases, TUesla::Usecases, evDCTDocks())

//## event reqLoadingComplete()
reqLoadingComplete::reqLoadingComplete() {
    NOTIFY_EVENT_CONSTRUCTOR(reqLoadingComplete)
    setId(reqLoadingComplete_Usecases_TUesla_id);
}

bool reqLoadingComplete::isTypeOf(const short id) const {
    return (reqLoadingComplete_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(reqLoadingComplete, TUesla_Usecases, TUesla::Usecases, reqLoadingComplete())

//## event evManualOverride()
evManualOverride::evManualOverride() {
    NOTIFY_EVENT_CONSTRUCTOR(evManualOverride)
    setId(evManualOverride_Usecases_TUesla_id);
}

bool evManualOverride::isTypeOf(const short id) const {
    return (evManualOverride_Usecases_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(evManualOverride, TUesla_Usecases, TUesla::Usecases, evManualOverride())

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

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\Usecases.cpp
*********************************************************************/
