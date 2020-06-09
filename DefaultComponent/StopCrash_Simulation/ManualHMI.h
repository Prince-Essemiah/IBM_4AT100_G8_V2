/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: ManualHMI
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\ManualHMI.h
*********************************************************************/

#ifndef ManualHMI_H
#define ManualHMI_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Usecases.h"
//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## link itsDCT
class DCT;

//## package TUesla::Usecases

//## usecase ManualHMI
// Name: DCLogisticEmployee to change the lighting and heating of the DCT
// Primary Actors: DCT, DCLogisticEmployee
// Goal: Change lighting and heating based on DCLogisticEmployee requirements.
// 
// Main Scenario:
// 1. DCLogisticEmployee sets the SetHeating and SetLighting through the GUI
// 2. TU/esla selects preset Lighting and Heating based on the inputs.
// 3. TU/esla relays this preset Lighting and Heating to the DCT.
//  
// 
// 
class ManualHMI {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedManualHMI;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ManualHMI();
    
    //## auto_generated
    ~ManualHMI();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedManualHMI : virtual public AOMInstance {
    DECLARE_META(ManualHMI, OMAnimatedManualHMI)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\ManualHMI.h
*********************************************************************/
