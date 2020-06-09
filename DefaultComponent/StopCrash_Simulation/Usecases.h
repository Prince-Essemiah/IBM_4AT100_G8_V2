/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: Usecases
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\Usecases.h
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
#define detectCrash_Usecases_TUesla_id 6201

#define callMaintanence_Usecases_TUesla_id 6202

#define receiveInformation_Usecases_TUesla_id 6203

#define reqLoadDCT_Usecases_TUesla_id 6204

#define evDCTDocks_Usecases_TUesla_id 6205

#define reqLoadingComplete_Usecases_TUesla_id 6206

#define evManualOverride_Usecases_TUesla_id 6207

#define EmergencyBrake_Usecases_TUesla_id 6208

#define OverrideManual_Usecases_TUesla_id 6209

#define CrashDetect_Usecases_TUesla_id 6210

#define CrashMaintenance_Usecases_TUesla_id 6211
//#]

//## package TUesla::Usecases



//## event detectCrash()
class detectCrash : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddetectCrash;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    detectCrash();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddetectCrash : virtual public AOMEvent {
    DECLARE_META_EVENT(detectCrash)
};
//#]
#endif // _OMINSTRUMENT

//## event callMaintanence()
class callMaintanence : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedcallMaintanence;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    callMaintanence();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedcallMaintanence : virtual public AOMEvent {
    DECLARE_META_EVENT(callMaintanence)
};
//#]
#endif // _OMINSTRUMENT

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

//## event reqLoadDCT()
class reqLoadDCT : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLoadDCT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLoadDCT();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLoadDCT : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLoadDCT)
};
//#]
#endif // _OMINSTRUMENT

//## event evDCTDocks()
class evDCTDocks : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevDCTDocks;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evDCTDocks();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevDCTDocks : virtual public AOMEvent {
    DECLARE_META_EVENT(evDCTDocks)
};
//#]
#endif // _OMINSTRUMENT

//## event reqLoadingComplete()
class reqLoadingComplete : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedreqLoadingComplete;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    reqLoadingComplete();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedreqLoadingComplete : virtual public AOMEvent {
    DECLARE_META_EVENT(reqLoadingComplete)
};
//#]
#endif // _OMINSTRUMENT

//## event evManualOverride()
class evManualOverride : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedevManualOverride;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    evManualOverride();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedevManualOverride : virtual public AOMEvent {
    DECLARE_META_EVENT(evManualOverride)
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\Usecases.h
*********************************************************************/
