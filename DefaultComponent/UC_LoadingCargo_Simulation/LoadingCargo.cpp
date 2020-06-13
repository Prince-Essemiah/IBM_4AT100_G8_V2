/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\LoadingCargo.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "LoadingCargo.h"
//## auto_generated
#include "UC_LoadingCargo.h"
//#[ ignore
#define CargoDoor_SERIALIZE OM_NO_OP

#define CargoDoor_UNSERIALIZE OM_NO_OP

#define CargoDoor_CONSTRUCTOR CargoDoor()
//#]

//## package TUesla::UseCaseModelling::LoadingCargo


#ifdef _OMINSTRUMENT
static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */);

IMPLEMENT_META_PACKAGE(TUesla_UseCaseModelling_LoadingCargo, TUesla::UseCaseModelling::LoadingCargo)

static void serializeGlobalVars(AOMSAttributes* /* aomsAttributes */) {
}
#endif // _OMINSTRUMENT

//## event CargoDoor()
CargoDoor::CargoDoor() {
    NOTIFY_EVENT_CONSTRUCTOR(CargoDoor)
    setId(CargoDoor_LoadingCargo_UseCaseModelling_TUesla_id);
}

bool CargoDoor::isTypeOf(const short id) const {
    return (CargoDoor_LoadingCargo_UseCaseModelling_TUesla_id==id);
}

IMPLEMENT_META_EVENT_P(CargoDoor, TUesla_UseCaseModelling_LoadingCargo, TUesla::UseCaseModelling::LoadingCargo, CargoDoor())

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\LoadingCargo.cpp
*********************************************************************/
