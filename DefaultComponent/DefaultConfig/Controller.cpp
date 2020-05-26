/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Controller
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/

//## auto_generated
#include "Controller.h"
//## package TUesla

//## class Controller
Controller::Controller() {
}

Controller::~Controller() {
}

KinematicModel* Controller::getItsKinematicModel() const {
    return (KinematicModel*) &itsKinematicModel;
}

PathPlanner* Controller::getItsPathPlanner() const {
    return (PathPlanner*) &itsPathPlanner;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Controller.cpp
*********************************************************************/
