/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: PathPlanning_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "PathPlanning.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            PathPlanning * p_PathPlanning;
            p_PathPlanning = new PathPlanning;
            p_PathPlanning->startBehavior();
            //#[ configuration DefaultComponent::PathPlanning_Simulation 
            //#]
            OXF::start();
            delete p_PathPlanning;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\MainDefaultComponent.cpp
*********************************************************************/
