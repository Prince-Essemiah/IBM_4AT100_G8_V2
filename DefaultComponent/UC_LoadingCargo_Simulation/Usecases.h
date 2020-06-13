/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: Usecases
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\Usecases.h
*********************************************************************/

#ifndef Usecases_H
#define Usecases_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include "TUesla.h"
//#[ ignore
#define receiveInformation_Usecases_TUesla_id 6201

#define EmergencyBrake_Usecases_TUesla_id 6202

#define OverrideManual_Usecases_TUesla_id 6203

#define CrashDetect_Usecases_TUesla_id 6204

#define CrashMaintenance_Usecases_TUesla_id 6205

#define ManualOverride_Usecases_TUesla_id 6206

#define OverrideDone_Usecases_TUesla_id 6207

#define PathPlanned_Usecases_TUesla_id 6208
//#]

//## package TUesla::Usecases



//## event receiveInformation()
class receiveInformation : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreceiveInformation;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    receiveInformation();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreceiveInformation : virtual public AOMEvent {
    DECLARE_META_EVENT(receiveInformation)
};
//#]
#endif // _OMINSTRUMENT

//## event EmergencyBrake()
class EmergencyBrake : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEmergencyBrake;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    EmergencyBrake();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEmergencyBrake : virtual public AOMEvent {
    DECLARE_META_EVENT(EmergencyBrake)
};
//#]
#endif // _OMINSTRUMENT

//## event OverrideManual()
class OverrideManual : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOverrideManual;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OverrideManual();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOverrideManual : virtual public AOMEvent {
    DECLARE_META_EVENT(OverrideManual)
};
//#]
#endif // _OMINSTRUMENT

//## event CrashDetect()
class CrashDetect : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCrashDetect;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CrashDetect();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCrashDetect : virtual public AOMEvent {
    DECLARE_META_EVENT(CrashDetect)
};
//#]
#endif // _OMINSTRUMENT

//## event CrashMaintenance()
class CrashMaintenance : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCrashMaintenance;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CrashMaintenance();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCrashMaintenance : virtual public AOMEvent {
    DECLARE_META_EVENT(CrashMaintenance)
};
//#]
#endif // _OMINSTRUMENT

//## event ManualOverride()
class ManualOverride : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedManualOverride;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ManualOverride();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedManualOverride : virtual public AOMEvent {
    DECLARE_META_EVENT(ManualOverride)
};
//#]
#endif // _OMINSTRUMENT

//## event OverrideDone()
class OverrideDone : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedOverrideDone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    OverrideDone();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedOverrideDone : virtual public AOMEvent {
    DECLARE_META_EVENT(OverrideDone)
};
//#]
#endif // _OMINSTRUMENT

//## event PathPlanned()
class PathPlanned : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedPathPlanned;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    PathPlanned();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedPathPlanned : virtual public AOMEvent {
    DECLARE_META_EVENT(PathPlanned)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\Usecases.h
*********************************************************************/
