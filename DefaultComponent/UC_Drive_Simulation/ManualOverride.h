/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: ManualOverride
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\ManualOverride.h
*********************************************************************/

#ifndef ManualOverride_H
#define ManualOverride_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_ManualOverride;

//#[ ignore
#define manualOverride_ManualOverride_UseCaseModelling_TUesla_id 25001

#define overrideDone_ManualOverride_UseCaseModelling_TUesla_id 25002

#define overrideManual_ManualOverride_UseCaseModelling_TUesla_id 25003
//#]

//## package TUesla::UseCaseModelling::ManualOverride



//## event manualOverride()
class manualOverride : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedmanualOverride;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    manualOverride();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedmanualOverride : virtual public AOMEvent {
    DECLARE_META_EVENT(manualOverride)
};
//#]
#endif // _OMINSTRUMENT

//## event overrideDone()
class overrideDone : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedoverrideDone;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    overrideDone();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedoverrideDone : virtual public AOMEvent {
    DECLARE_META_EVENT(overrideDone)
};
//#]
#endif // _OMINSTRUMENT

//## event overrideManual()
class overrideManual : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedoverrideManual;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    overrideManual();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedoverrideManual : virtual public AOMEvent {
    DECLARE_META_EVENT(overrideManual)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\ManualOverride.h
*********************************************************************/
