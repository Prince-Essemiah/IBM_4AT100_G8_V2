/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Cargo
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Cargo.h
*********************************************************************/

#ifndef Cargo_H
#define Cargo_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## package TUesla

//## class Cargo
class Cargo {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Cargo();
    
    //## auto_generated
    ~Cargo();
    
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
	File Path	: DefaultComponent\DefaultConfig\Cargo.h
*********************************************************************/
