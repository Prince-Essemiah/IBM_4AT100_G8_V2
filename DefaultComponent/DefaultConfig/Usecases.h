/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Usecases
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Usecases.h
*********************************************************************/

#ifndef Usecases_H
#define Usecases_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <oxf\event.h>
//#[ ignore
#define detectCrash_Usecases_TUesla_id 6201

#define callMaintanence_Usecases_TUesla_id 6202

#define receiveInformation_Usecases_TUesla_id 6203

#define reqLoadDCT_Usecases_TUesla_id 6204

#define evDCTDocks_Usecases_TUesla_id 6205

#define reqLoadingComplete_Usecases_TUesla_id 6206
//#]

//## package TUesla::Usecases



//## event detectCrash()
class detectCrash : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    detectCrash();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event callMaintanence()
class callMaintanence : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    callMaintanence();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event receiveInformation()
class receiveInformation : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    receiveInformation();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event reqLoadDCT()
class reqLoadDCT : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqLoadDCT();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event evDCTDocks()
class evDCTDocks : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    evDCTDocks();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

//## event reqLoadingComplete()
class reqLoadingComplete : public OMEvent {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    reqLoadingComplete();
    
    ////    Framework operations    ////
    
    //## statechart_method
    virtual bool isTypeOf(const short id) const;
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Usecases.h
*********************************************************************/
