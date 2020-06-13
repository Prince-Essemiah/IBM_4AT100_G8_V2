/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: EnvironmentSensors
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\EnvironmentSensors.h
*********************************************************************/

#ifndef EnvironmentSensors_H
#define EnvironmentSensors_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SecondaryActors.h"
//## link itsTUesla
class TUesla;

//## package SystemContext::Actors::SecondaryActors

//## class EnvironmentSensors
class EnvironmentSensors {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedEnvironmentSensors;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
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

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedEnvironmentSensors : virtual public AOMInstance {
    DECLARE_META(EnvironmentSensors, OMAnimatedEnvironmentSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\EnvironmentSensors.h
*********************************************************************/
