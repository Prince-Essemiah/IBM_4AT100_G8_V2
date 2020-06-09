/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: HMI
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\HMI.h
*********************************************************************/

#ifndef HMI_H
#define HMI_H

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

//## link itsEnvironmentSensors
class EnvironmentSensors;

//## package TUesla::Usecases

//## usecase HMI
// Name: HMI to change the lighting and heating of the DCT
// Primary Actors: DCT, EnvironmentSensor
// Goal: Change lighting and heating based on Temperature and LightIntensity.
// 
// Main Scenario:
// 1. EnvironmentSensor detects the Temperature and LightIntensity.
// 2. EnvironmentSensor sends Temperature and LightIntensity to TU/esla.
// 3. TU/esla selects preset Lighting and Heating based on the inputs.
// 4. TU/esla relays this preset Lighting and Heating to the DCT.
//  
// 
class HMI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedHMI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    HMI();
    
    //## auto_generated
    ~HMI();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    EnvironmentSensors* getItsEnvironmentSensors() const;
    
    //## auto_generated
    void setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    EnvironmentSensors* itsEnvironmentSensors;		//## link itsEnvironmentSensors
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
    
    //## auto_generated
    void __setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);
    
    //## auto_generated
    void _setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);
    
    //## auto_generated
    void _clearItsEnvironmentSensors();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedHMI : virtual public AOMInstance {
    DECLARE_META(HMI, OMAnimatedHMI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\HMI.h
*********************************************************************/
