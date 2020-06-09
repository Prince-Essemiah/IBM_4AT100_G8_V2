/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: ObstacleDetection
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\ObstacleDetection.h
*********************************************************************/

#ifndef ObstacleDetection_H
#define ObstacleDetection_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Usecases.h"
//## link itsDCLocalizationSystem
class DCLocalizationSystem;

//## package TUesla::Usecases

//## usecase ObstacleDetection
// Name: Obstacle Detection
// Primary Actors:  DCLocalizationSystem
// Goal: The Obstacle is detected and Notified to TU/esla
// 
// Main Scenario:
// 1. The DCLocalizationSystem detects the position of the Obstacles.
// 2. The DCLocalizationSystem send the Coordinates of the Obstacles to the PathPlanner
// 
// Alternative Flow;
// 1.1 The DCLocalizationSystem detects no Obstacles.
// 
class ObstacleDetection {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedObstacleDetection;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    ObstacleDetection();
    
    //## auto_generated
    ~ObstacleDetection();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLocalizationSystem* getItsDCLocalizationSystem() const;
    
    //## auto_generated
    void setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCLocalizationSystem* itsDCLocalizationSystem;		//## link itsDCLocalizationSystem
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _clearItsDCLocalizationSystem();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedObstacleDetection : virtual public AOMInstance {
    DECLARE_META(ObstacleDetection, OMAnimatedObstacleDetection)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\ObstacleDetection.h
*********************************************************************/
