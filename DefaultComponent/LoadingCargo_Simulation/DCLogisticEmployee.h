/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCLogisticEmployee.h
*********************************************************************/

#ifndef DCLogisticEmployee_H
#define DCLogisticEmployee_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "PrimaryActors.h"
//## link itsCharging
class Charging;

//## link itsManualHMI
class ManualHMI;

//## link itsManualOverrideAutonomousMode
class ManualOverrideAutonomousMode;

//## link itsParkingAssign
class ParkingAssign;

//## link itsStopCrash
class StopCrash;

//## link itsTUesla
class TUesla;

//## package TUesla::Actors::PrimaryActors

//## actor DCLogisticEmployee
class DCLogisticEmployee {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCLogisticEmployee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCLogisticEmployee();
    
    //## auto_generated
    ~DCLogisticEmployee();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Charging* getItsCharging() const;
    
    //## auto_generated
    void setItsCharging(Charging* p_Charging);
    
    //## auto_generated
    ManualHMI* getItsManualHMI() const;
    
    //## auto_generated
    void setItsManualHMI(ManualHMI* p_ManualHMI);
    
    //## auto_generated
    ManualOverrideAutonomousMode* getItsManualOverrideAutonomousMode() const;
    
    //## auto_generated
    void setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode);
    
    //## auto_generated
    ParkingAssign* getItsParkingAssign() const;
    
    //## auto_generated
    void setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    StopCrash* getItsStopCrash() const;
    
    //## auto_generated
    void setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    StopCrash* getItsStopCrash_1() const;
    
    //## auto_generated
    void setItsStopCrash_1(StopCrash* p_StopCrash);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Charging* itsCharging;		//## link itsCharging
    
    ManualHMI* itsManualHMI;		//## link itsManualHMI
    
    ManualOverrideAutonomousMode* itsManualOverrideAutonomousMode;		//## link itsManualOverrideAutonomousMode
    
    ParkingAssign* itsParkingAssign;		//## link itsParkingAssign
    
    StopCrash* itsStopCrash;		//## link itsStopCrash
    
    StopCrash* itsStopCrash_1;		//## link itsStopCrash_1
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsCharging(Charging* p_Charging);
    
    //## auto_generated
    void _setItsCharging(Charging* p_Charging);
    
    //## auto_generated
    void _clearItsCharging();
    
    //## auto_generated
    void __setItsManualHMI(ManualHMI* p_ManualHMI);
    
    //## auto_generated
    void _setItsManualHMI(ManualHMI* p_ManualHMI);
    
    //## auto_generated
    void _clearItsManualHMI();
    
    //## auto_generated
    void __setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode);
    
    //## auto_generated
    void _setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode);
    
    //## auto_generated
    void _clearItsManualOverrideAutonomousMode();
    
    //## auto_generated
    void __setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _clearItsParkingAssign();
    
    //## auto_generated
    void __setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _clearItsStopCrash();
    
    //## auto_generated
    void __setItsStopCrash_1(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _setItsStopCrash_1(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _clearItsStopCrash_1();
    
    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCLogisticEmployee : virtual public AOMInstance {
    DECLARE_META(DCLogisticEmployee, OMAnimatedDCLogisticEmployee)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCLogisticEmployee.h
*********************************************************************/
