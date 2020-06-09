/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: CompareSOC
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\CompareSOC.h
*********************************************************************/

#ifndef CompareSOC_H
#define CompareSOC_H

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

//## usecase CompareSOC
// Name: Compare SOC of DCT
// Actors: DCT
// Goal: Compare SOC of DCT based on the threshold
// 
// Main Scenario:
// 1. DCT sends BatterySOC to TU/esla.
// 1. TU/esla checks the BatterySOC based on given threshold.
// 2. Sends coordinates to Path Planner for the Charging Pad if BatterySOC < 10%.
// 
// Alternative Flow
// 2. if BatterySOC > 10% [do nothing]
// 
class CompareSOC {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCompareSOC;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    CompareSOC();
    
    //## auto_generated
    ~CompareSOC();
    
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
class OMAnimatedCompareSOC : virtual public AOMInstance {
    DECLARE_META(CompareSOC, OMAnimatedCompareSOC)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\CompareSOC.h
*********************************************************************/
