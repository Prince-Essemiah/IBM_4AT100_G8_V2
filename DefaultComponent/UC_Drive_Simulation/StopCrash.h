/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: StopCrash
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\StopCrash.h
*********************************************************************/

#ifndef StopCrash_H
#define StopCrash_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_StopCrash;

//#[ ignore
#define crashDetect_StopCrash_UseCaseModelling_TUesla_id 13601

#define crashMaintenance_StopCrash_UseCaseModelling_TUesla_id 13602

#define emergencyBrake_StopCrash_UseCaseModelling_TUesla_id 13603
//#]

//## package TUesla::UseCaseModelling::StopCrash



//## event crashDetect()
class crashDetect : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcrashDetect;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    crashDetect();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcrashDetect : virtual public AOMEvent {
    DECLARE_META_EVENT(crashDetect)
};
//#]
#endif // _OMINSTRUMENT

//## event crashMaintenance()
class crashMaintenance : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcrashMaintenance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    crashMaintenance();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcrashMaintenance : virtual public AOMEvent {
    DECLARE_META_EVENT(crashMaintenance)
};
//#]
#endif // _OMINSTRUMENT

//## event emergencyBrake()
class emergencyBrake : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedemergencyBrake;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    emergencyBrake();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedemergencyBrake : virtual public AOMEvent {
    DECLARE_META_EVENT(emergencyBrake)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\StopCrash.h
*********************************************************************/
