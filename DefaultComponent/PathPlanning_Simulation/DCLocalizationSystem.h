/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\DCLocalizationSystem.h
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
//## link itsLoadingCargo
class LoadingCargo;

//## link itsObstacleDetection
class ObstacleDetection;

//## link itsParkingAssign
class ParkingAssign;

//## link itsPathPlanning
class PathPlanning;

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
    LoadingCargo* getItsLoadingCargo() const;
    
    //## auto_generated
    void setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    ObstacleDetection* getItsObstacleDetection() const;
    
    //## auto_generated
    void setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection);
    
    //## auto_generated
    ParkingAssign* getItsParkingAssign() const;
    
    //## auto_generated
    void setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    PathPlanning* getItsPathPlanning() const;
    
    //## auto_generated
    void setItsPathPlanning(PathPlanning* p_PathPlanning);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    LoadingCargo* itsLoadingCargo;		//## link itsLoadingCargo
    
    ObstacleDetection* itsObstacleDetection;		//## link itsObstacleDetection
    
    ParkingAssign* itsParkingAssign;		//## link itsParkingAssign
    
    PathPlanning* itsPathPlanning;		//## link itsPathPlanning
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _clearItsLoadingCargo();
    
    //## auto_generated
    void __setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection);
    
    //## auto_generated
    void _setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection);
    
    //## auto_generated
    void _clearItsObstacleDetection();
    
    //## auto_generated
    void __setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _clearItsParkingAssign();
    
    //## auto_generated
    void __setItsPathPlanning(PathPlanning* p_PathPlanning);
    
    //## auto_generated
    void _setItsPathPlanning(PathPlanning* p_PathPlanning);
    
    //## auto_generated
    void _clearItsPathPlanning();
    
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
	File Path	: DefaultComponent\PathPlanning_Simulation\DCLocalizationSystem.h
*********************************************************************/
