/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: Drive
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\Drive.h
*********************************************************************/

#ifndef Drive_H
#define Drive_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_Drive;

//#[ ignore
#define inputReceived_Drive_UseCaseModelling_TUesla_id 16001

#define driveDCT_Drive_UseCaseModelling_TUesla_id 16002

#define stopDCT_Drive_UseCaseModelling_TUesla_id 16003
//#]

//## package TUesla::UseCaseModelling::Drive



//## event inputReceived()
class inputReceived : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedinputReceived;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    inputReceived();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedinputReceived : virtual public AOMEvent {
    DECLARE_META_EVENT(inputReceived)
};
//#]
#endif // _OMINSTRUMENT

//## event driveDCT()
class driveDCT : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimateddriveDCT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    driveDCT();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimateddriveDCT : virtual public AOMEvent {
    DECLARE_META_EVENT(driveDCT)
};
//#]
#endif // _OMINSTRUMENT

//## event stopDCT()
class stopDCT : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedstopDCT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    stopDCT();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedstopDCT : virtual public AOMEvent {
    DECLARE_META_EVENT(stopDCT)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\Drive.h
*********************************************************************/
