/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLocalizationSystem.h
*********************************************************************/

#ifndef DCLocalizationSystem_H
#define DCLocalizationSystem_H

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

//## link itsUC_LoadingCargo
class UC_LoadingCargo;

//## link itsUC_PathPlanning
class UC_PathPlanning;

//## package SystemContext::Actors::SecondaryActors

//## class DCLocalizationSystem
class DCLocalizationSystem {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCLocalizationSystem;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCLocalizationSystem();
    
    //## auto_generated
    ~DCLocalizationSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    UC_LoadingCargo* getItsUC_LoadingCargo() const;
    
    //## auto_generated
    void setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    UC_PathPlanning* getItsUC_PathPlanning() const;
    
    //## auto_generated
    void setItsUC_PathPlanning(UC_PathPlanning* p_UC_PathPlanning);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_LoadingCargo* itsUC_LoadingCargo;		//## link itsUC_LoadingCargo
    
    UC_PathPlanning* itsUC_PathPlanning;		//## link itsUC_PathPlanning
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _clearItsUC_LoadingCargo();
    
    //## auto_generated
    void __setItsUC_PathPlanning(UC_PathPlanning* p_UC_PathPlanning);
    
    //## auto_generated
    void _setItsUC_PathPlanning(UC_PathPlanning* p_UC_PathPlanning);
    
    //## auto_generated
    void _clearItsUC_PathPlanning();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCLocalizationSystem : virtual public AOMInstance {
    DECLARE_META(DCLocalizationSystem, OMAnimatedDCLocalizationSystem)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLocalizationSystem.h
*********************************************************************/
