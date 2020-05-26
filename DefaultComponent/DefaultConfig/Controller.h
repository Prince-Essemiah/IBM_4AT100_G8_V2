/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/

#ifndef Controller_H
#define Controller_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## classInstance itsKinematicModel
#include "KinematicModel.h"
//## classInstance itsPathPlanner
#include "PathPlanner.h"
//## package TUesla

//## class Controller
class Controller {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Controller();
    
    //## auto_generated
    ~Controller();
    
    ////    Additional operations    ////
    
    //## auto_generated
    KinematicModel* getItsKinematicModel() const;
    
    //## auto_generated
    PathPlanner* getItsPathPlanner() const;
    
    ////    Relations and components    ////

protected :

    KinematicModel itsKinematicModel;		//## classInstance itsKinematicModel
    
    PathPlanner itsPathPlanner;		//## classInstance itsPathPlanner
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.h
*********************************************************************/
