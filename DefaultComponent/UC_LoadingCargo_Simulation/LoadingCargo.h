/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\LoadingCargo.h
*********************************************************************/

#ifndef LoadingCargo_H
#define LoadingCargo_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_LoadingCargo;

//#[ ignore
#define CargoDoor_LoadingCargo_UseCaseModelling_TUesla_id 7001
//#]

//## package TUesla::UseCaseModelling::LoadingCargo



//## event CargoDoor()
class CargoDoor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCargoDoor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CargoDoor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCargoDoor : virtual public AOMEvent {
    DECLARE_META_EVENT(CargoDoor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\LoadingCargo.h
*********************************************************************/
