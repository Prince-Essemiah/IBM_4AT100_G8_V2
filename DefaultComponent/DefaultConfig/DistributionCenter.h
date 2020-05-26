/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DistributionCenter
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DistributionCenter.h
*********************************************************************/

#ifndef DistributionCenter_H
#define DistributionCenter_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## package TUesla

//## class DistributionCenter
class DistributionCenter {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DistributionCenter();
    
    //## auto_generated
    ~DistributionCenter();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DistributionCenter.h
*********************************************************************/
