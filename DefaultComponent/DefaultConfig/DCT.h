/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCT
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCT.h
*********************************************************************/

#ifndef DCT_H
#define DCT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## classInstance itsBattery
#include "Battery.h"
//## classInstance itsHeating
#include "Heating.h"
//## classInstance itsLighting
#include "Lighting.h"
//## classInstance itsPowertrain
#include "Powertrain.h"
//## classInstance itsSteeringWheel
#include "SteeringWheel.h"
//## link itsTUesla
class TUesla;

//## package TUesla

//## class DCT
class DCT {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCT();
    
    //## auto_generated
    ~DCT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Battery* getItsBattery() const;
    
    //## auto_generated
    Heating* getItsHeating() const;
    
    //## auto_generated
    Lighting* getItsLighting() const;
    
    //## auto_generated
    Powertrain* getItsPowertrain() const;
    
    //## auto_generated
    SteeringWheel* getItsSteeringWheel() const;
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Battery itsBattery;		//## classInstance itsBattery
    
    Heating itsHeating;		//## classInstance itsHeating
    
    Lighting itsLighting;		//## classInstance itsLighting
    
    Powertrain itsPowertrain;		//## classInstance itsPowertrain
    
    SteeringWheel itsSteeringWheel;		//## classInstance itsSteeringWheel
    
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
	File Path	: DefaultComponent\DefaultConfig\DCT.h
*********************************************************************/
