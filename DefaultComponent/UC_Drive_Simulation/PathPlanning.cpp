/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\PathPlanning.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "PathPlanning.h"
//## auto_generated
#include "UC_PathPlanning.h"
//#[ ignore
#define pathPlanned_SERIALIZE OM_NO_OP

#define pathPlanned_UNSERIALIZE OM_NO_OP

#define pathPlanned_CONSTRUCTOR pathPlanned()

#define receiveInformation_SERIALIZE OM_NO_OP

#define receiveInformation_UNSERIALIZE OM_NO_OP

#define receiveInformation_CONSTRUCTOR receiveInformation()
//#]

//## package TUesla::UseCaseModelling::PathPlanning


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_PathPlanning, TUesla::UseCaseModelling::PathPlanning)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event pathPlanned()
pathPlanned::pathPlanned() {
    NOTIFY_EVENT_CONSTRUCTOR(pathPlanned)
    setId(pathPlanned_PathPlanning_UseCaseModelling_TUesla_id);
}

bool pathPlanned::isTypeOf(const short id) const {
    return (pathPlanned_PathPlanning_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(pathPlanned, TUesla_UseCaseModelling_PathPlanning, TUesla::UseCaseModelling::PathPlanning, pathPlanned())

//## event receiveInformation()
receiveInformation::receiveInformation() {
    NOTIFY_EVENT_CONSTRUCTOR(receiveInformation)
    setId(receiveInformation_PathPlanning_UseCaseModelling_TUesla_id);
}

bool receiveInformation::isTypeOf(const short id) const {
    return (receiveInformation_PathPlanning_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(receiveInformation, TUesla_UseCaseModelling_PathPlanning, TUesla::UseCaseModelling::PathPlanning, receiveInformation())

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\PathPlanning.cpp
*********************************************************************/
