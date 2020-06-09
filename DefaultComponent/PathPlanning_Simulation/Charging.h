/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: Charging
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\Charging.h
*********************************************************************/

#ifndef Charging_H
#define Charging_H

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

//## usecase Charging
// Name: Charging the DCT Battery
// Goal: Charging of the DCT Battery
// Primary Actor : DCLogisticEmployee, DCT
// 
// Main Scenario:
// 1. TU/esla signals DCLogisticEmployee ChargingPadStatus[==true] through GUI.
// 2. DCLogisticEmployee EngageCharging[==true] through GUI.
// 3. TU/esla increases BatterySOC.
// 4. DCT sends the BatterySOC signal to TU/esla
// 5. If(BatterySOC>95%) then TU/esla signals DCLogisticEmployee ChargingPadStatus[==false] through GUI.
// 6. DCLogisticEmployee disables EngageCharging[==false] through GUI.
// 
// 
// 
class Charging {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCharging;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Charging();
    
    //## auto_generated
    ~Charging();
    
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
class OMAnimatedCharging : virtual public AOMInstance {
    DECLARE_META(Charging, OMAnimatedCharging)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\Charging.h
*********************************************************************/
