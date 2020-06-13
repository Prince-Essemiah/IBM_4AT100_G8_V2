/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: ManualOverride
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\ManualOverride.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ManualOverride.h"
//## auto_generated
#include "UC_ManualOverride.h"
//#[ ignore
#define manualOverride_SERIALIZE OM_NO_OP

#define manualOverride_UNSERIALIZE OM_NO_OP

#define manualOverride_CONSTRUCTOR manualOverride()

#define overrideDone_SERIALIZE OM_NO_OP

#define overrideDone_UNSERIALIZE OM_NO_OP

#define overrideDone_CONSTRUCTOR overrideDone()

#define overrideManual_SERIALIZE OM_NO_OP

#define overrideManual_UNSERIALIZE OM_NO_OP

#define overrideManual_CONSTRUCTOR overrideManual()
//#]

//## package TUesla::UseCaseModelling::ManualOverride


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_ManualOverride, TUesla::UseCaseModelling::ManualOverride)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event manualOverride()
manualOverride::manualOverride() {
    NOTIFY_EVENT_CONSTRUCTOR(manualOverride)
    setId(manualOverride_ManualOverride_UseCaseModelling_TUesla_id);
}

bool manualOverride::isTypeOf(const short id) const {
    return (manualOverride_ManualOverride_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(manualOverride, TUesla_UseCaseModelling_ManualOverride, TUesla::UseCaseModelling::ManualOverride, manualOverride())

//## event overrideDone()
overrideDone::overrideDone() {
    NOTIFY_EVENT_CONSTRUCTOR(overrideDone)
    setId(overrideDone_ManualOverride_UseCaseModelling_TUesla_id);
}

bool overrideDone::isTypeOf(const short id) const {
    return (overrideDone_ManualOverride_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(overrideDone, TUesla_UseCaseModelling_ManualOverride, TUesla::UseCaseModelling::ManualOverride, overrideDone())

//## event overrideManual()
overrideManual::overrideManual() {
    NOTIFY_EVENT_CONSTRUCTOR(overrideManual)
    setId(overrideManual_ManualOverride_UseCaseModelling_TUesla_id);
}

bool overrideManual::isTypeOf(const short id) const {
    return (overrideManual_ManualOverride_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(overrideManual, TUesla_UseCaseModelling_ManualOverride, TUesla::UseCaseModelling::ManualOverride, overrideManual())

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\ManualOverride.cpp
*********************************************************************/
