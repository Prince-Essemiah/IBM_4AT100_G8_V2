/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCT
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.h
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
//## link itsTUesla
class TUesla;

//## link itsUC_Drive
class UC_Drive;

//## link itsUC_LoadingCargo
class UC_LoadingCargo;

//## link itsUC_ManualOverride
class UC_ManualOverride;

//## link itsUC_StopCrash
class UC_StopCrash;

//## package SystemContext::Actors::SecondaryActors

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
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    UC_Drive* getItsUC_Drive() const;
    
    //## auto_generated
    void setItsUC_Drive(UC_Drive* p_UC_Drive);
    
    //## auto_generated
    UC_LoadingCargo* getItsUC_LoadingCargo() const;
    
    //## auto_generated
    void setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    UC_ManualOverride* getItsUC_ManualOverride() const;
    
    //## auto_generated
    void setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride);
    
    //## auto_generated
    UC_StopCrash* getItsUC_StopCrash() const;
    
    //## auto_generated
    void setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_Drive* itsUC_Drive;		//## link itsUC_Drive
    
    UC_LoadingCargo* itsUC_LoadingCargo;		//## link itsUC_LoadingCargo
    
    UC_ManualOverride* itsUC_ManualOverride;		//## link itsUC_ManualOverride
    
    UC_StopCrash* itsUC_StopCrash;		//## link itsUC_StopCrash
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_Drive(UC_Drive* p_UC_Drive);
    
    //## auto_generated
    void _setItsUC_Drive(UC_Drive* p_UC_Drive);
    
    //## auto_generated
    void _clearItsUC_Drive();
    
    //## auto_generated
    void __setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _clearItsUC_LoadingCargo();
    
    //## auto_generated
    void __setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride);
    
    //## auto_generated
    void _setItsUC_ManualOverride(UC_ManualOverride* p_UC_ManualOverride);
    
    //## auto_generated
    void _clearItsUC_ManualOverride();
    
    //## auto_generated
    void __setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);
    
    //## auto_generated
    void _setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);
    
    //## auto_generated
    void _clearItsUC_StopCrash();
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
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.h
*********************************************************************/
