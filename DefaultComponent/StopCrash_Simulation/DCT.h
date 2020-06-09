/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: DCT
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\DCT.h
*********************************************************************/

#ifndef DCT_H
#define DCT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SecondaryActors.h"
//## link itsCharging
class Charging;

//## link itsCompareSOC
class CompareSOC;

//## link itsCoupling
class Coupling;

//## link itsDrive
class Drive;

//## link itsHMI
class HMI;

//## link itsLoadingCargo
class LoadingCargo;

//## link itsManualHMI
class ManualHMI;

//## link itsManualOverrideAutonomousMode
class ManualOverrideAutonomousMode;

//## link itsStopCrash
class StopCrash;

//## link itsTUesla
class TUesla;

//## package TUesla::Actors::SecondaryActors

//## class DCT
class DCT {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCT();
    
    //## auto_generated
    ~DCT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Charging* getItsCharging() const;
    
    //## auto_generated
    void setItsCharging(Charging* p_Charging);
    
    //## auto_generated
    CompareSOC* getItsCompareSOC() const;
    
    //## auto_generated
    void setItsCompareSOC(CompareSOC* p_CompareSOC);
    
    //## auto_generated
    Coupling* getItsCoupling() const;
    
    //## auto_generated
    void setItsCoupling(Coupling* p_Coupling);
    
    //## auto_generated
    Drive* getItsDrive() const;
    
    //## auto_generated
    void setItsDrive(Drive* p_Drive);
    
    //## auto_generated
    HMI* getItsHMI() const;
    
    //## auto_generated
    void setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    LoadingCargo* getItsLoadingCargo() const;
    
    //## auto_generated
    void setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    ManualHMI* getItsManualHMI() const;
    
    //## auto_generated
    void setItsManualHMI(ManualHMI* p_ManualHMI);
    
    //## auto_generated
    ManualOverrideAutonomousMode* getItsManualOverrideAutonomousMode() const;
    
    //## auto_generated
    void setItsManualOverrideAutonomousMode(ManualOverrideAutonomousMode* p_ManualOverrideAutonomousMode);
    
    //## auto_generated
    StopCrash* getItsStopCrash() const;
    
    //## auto_generated
    void setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Charging* itsCharging;		//## link itsCharging
    
    CompareSOC* itsCompareSOC;		//## link itsCompareSOC
    
    Coupling* itsCoupling;		//## link itsCoupling
    
    Drive* itsDrive;		//## link itsDrive
    
    HMI* itsHMI;		//## link itsHMI
    
    LoadingCargo* itsLoadingCargo;		//## link itsLoadingCargo
    
    ManualHMI* itsManualHMI;		//## link itsManualHMI
    
    ManualOverrideAutonomousMode* itsManualOverrideAutonomousMode;		//## link itsManualOverrideAutonomousMode
    
    StopCrash* itsStopCrash;		//## link itsStopCrash
    
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
    void __setItsCompareSOC(CompareSOC* p_CompareSOC);
    
    //## auto_generated
    void _setItsCompareSOC(CompareSOC* p_CompareSOC);
    
    //## auto_generated
    void _clearItsCompareSOC();
    
    //## auto_generated
    void __setItsCoupling(Coupling* p_Coupling);
    
    //## auto_generated
    void _setItsCoupling(Coupling* p_Coupling);
    
    //## auto_generated
    void _clearItsCoupling();
    
    //## auto_generated
    void __setItsDrive(Drive* p_Drive);
    
    //## auto_generated
    void _setItsDrive(Drive* p_Drive);
    
    //## auto_generated
    void _clearItsDrive();
    
    //## auto_generated
    void __setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    void _setItsHMI(HMI* p_HMI);
    
    //## auto_generated
    void _clearItsHMI();
    
    //## auto_generated
    void __setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _clearItsLoadingCargo();
    
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
    void __setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _setItsStopCrash(StopCrash* p_StopCrash);
    
    //## auto_generated
    void _clearItsStopCrash();
    
    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCT : virtual public AOMInstance {
    DECLARE_META(DCT, OMAnimatedDCT)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\DCT.h
*********************************************************************/
