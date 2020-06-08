/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: EnvironmentSensors
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\EnvironmentSensors.h
*********************************************************************/

#ifndef EnvironmentSensors_H
#define EnvironmentSensors_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## package TUesla::Actors::SecondaryActors

//## class EnvironmentSensors
class EnvironmentSensors {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    EnvironmentSensors();
    
    //## auto_generated
    ~EnvironmentSensors();
    
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
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\EnvironmentSensors.h
*********************************************************************/
