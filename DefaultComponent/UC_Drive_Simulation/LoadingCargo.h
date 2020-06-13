/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: LoadingCargo
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\LoadingCargo.h
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
#define cargoDoor_LoadingCargo_UseCaseModelling_TUesla_id 7001
//#]

//## package TUesla::UseCaseModelling::LoadingCargo



//## event cargoDoor()
class cargoDoor : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcargoDoor;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    cargoDoor();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcargoDoor : virtual public AOMEvent {
    DECLARE_META_EVENT(cargoDoor)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\LoadingCargo.h
*********************************************************************/
