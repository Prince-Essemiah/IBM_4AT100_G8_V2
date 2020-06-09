/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: EnvironmentSensors
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\EnvironmentSensors.h
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
//## link itsHMI
class HMI;

//## link itsTUesla
class TUesla;

//## package TUesla::Actors::SecondaryActors

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
    HMI* getItsHMI() const;
    
    //## auto_generated
    void setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    HMI* itsHMI;		//## link itsHMI
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    void _setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    void _clearItsHMI();
    
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
	File Path	: DefaultComponent\StopCrash_Simulation\EnvironmentSensors.h
*********************************************************************/
