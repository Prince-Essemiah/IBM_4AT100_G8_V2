/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: PathPlanning
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\PathPlanning.h
*********************************************************************/

#ifndef PathPlanning_H
#define PathPlanning_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_PathPlanning;

//#[ ignore
#define pathPlanned_PathPlanning_UseCaseModelling_TUesla_id 12201

#define receiveInformation_PathPlanning_UseCaseModelling_TUesla_id 12202
//#]

//## package TUesla::UseCaseModelling::PathPlanning



//## event pathPlanned()
class pathPlanned : public OMEvent {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedpathPlanned;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    pathPlanned();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedpathPlanned : virtual public AOMEvent {
    DECLARE_META_EVENT(pathPlanned)
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\PathPlanning.h
*********************************************************************/
