/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: Drive
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\Drive.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "Drive.h"
//## auto_generated
#include "UC_Drive.h"
//#[ ignore
#define inputReceived_SERIALIZE OM_NO_OP

#define inputReceived_UNSERIALIZE OM_NO_OP

#define inputReceived_CONSTRUCTOR inputReceived()

#define driveDCT_SERIALIZE OM_NO_OP

#define driveDCT_UNSERIALIZE OM_NO_OP

#define driveDCT_CONSTRUCTOR driveDCT()

#define stopDCT_SERIALIZE OM_NO_OP

#define stopDCT_UNSERIALIZE OM_NO_OP

#define stopDCT_CONSTRUCTOR stopDCT()
//#]

//## package TUesla::UseCaseModelling::Drive


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event inputReceived()
inputReceived::inputReceived() {
    NOTIFY_EVENT_CONSTRUCTOR(inputReceived)
    setId(inputReceived_Drive_UseCaseModelling_TUesla_id);
}

bool inputReceived::isTypeOf(const short id) const {
    return (inputReceived_Drive_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(inputReceived, TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive, inputReceived())

//## event driveDCT()
driveDCT::driveDCT() {
    NOTIFY_EVENT_CONSTRUCTOR(driveDCT)
    setId(driveDCT_Drive_UseCaseModelling_TUesla_id);
}

bool driveDCT::isTypeOf(const short id) const {
    return (driveDCT_Drive_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(driveDCT, TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive, driveDCT())

//## event stopDCT()
stopDCT::stopDCT() {
    NOTIFY_EVENT_CONSTRUCTOR(stopDCT)
    setId(stopDCT_Drive_UseCaseModelling_TUesla_id);
}

bool stopDCT::isTypeOf(const short id) const {
    return (stopDCT_Drive_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(stopDCT, TUesla_UseCaseModelling_Drive, TUesla::UseCaseModelling::Drive, stopDCT())

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\Drive.cpp
*********************************************************************/
