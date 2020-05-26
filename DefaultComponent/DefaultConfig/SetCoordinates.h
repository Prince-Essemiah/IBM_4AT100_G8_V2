/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SetCoordinates
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\SetCoordinates.h
*********************************************************************/

#ifndef SetCoordinates_H
#define SetCoordinates_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
class UC_SetCoordinates;

//#[ ignore
#define selectingLD_SetCoordinates_UseCaseModelling_TUesla_id 26801
//#]

//## package TUesla::UseCaseModelling::SetCoordinates



//## event selectingLD()
class selectingLD : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    selectingLD();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\SetCoordinates.h
*********************************************************************/
