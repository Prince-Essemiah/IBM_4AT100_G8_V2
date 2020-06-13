/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\LoadingCargo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingCargo.h"
//## auto_generated
#include "UC_LoadingCargo.h"
//#[ ignore
#define cargoDoor_SERIALIZE OM_NO_OP

#define cargoDoor_UNSERIALIZE OM_NO_OP

#define cargoDoor_CONSTRUCTOR cargoDoor()
//#]

//## package TUesla::UseCaseModelling::LoadingCargo


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_LoadingCargo, TUesla::UseCaseModelling::LoadingCargo)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event cargoDoor()
cargoDoor::cargoDoor() {
    NOTIFY_EVENT_CONSTRUCTOR(cargoDoor)
    setId(cargoDoor_LoadingCargo_UseCaseModelling_TUesla_id);
}

bool cargoDoor::isTypeOf(const short id) const {
    return (cargoDoor_LoadingCargo_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(cargoDoor, TUesla_UseCaseModelling_LoadingCargo, TUesla::UseCaseModelling::LoadingCargo, cargoDoor())

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\LoadingCargo.cpp
*********************************************************************/
