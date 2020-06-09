/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Sun, 7, Jun 2020  
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

//## package TUesla::Actors::SecondaryActors

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

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
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