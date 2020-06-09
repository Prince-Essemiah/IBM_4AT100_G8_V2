/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: Drive
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\Drive.h
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
#include "Usecases.h"
//## link itsDCT
class DCT;

//## package TUesla::Usecases

//## usecase Drive
// Name: Drive
// Primary Actors:  DCT
// Goal: TU/esla drives the DCT to desired location.
// 
// Main Scenario:
// 1. Controller is Engaged .
// 2. Controller relays SteeringAngle and Velocity to DCT.
// 3. DCT enables Steering and Throttle on receiving SteeringAngle and Velocity from the controller.
// 4. DCT drives.
// 5. DCT stops
// 6. The Steering and throttle are disengaged.
// 
// Alternative Flow:
// 6.1 Go to step 3
// 
class Drive {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDrive;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Drive();
    
    //## auto_generated
    ~Drive();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDrive : virtual public AOMInstance {
    DECLARE_META(Drive, OMAnimatedDrive)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\Drive.h
*********************************************************************/
