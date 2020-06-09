/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: StopCrash_Simulation
	Model Element	: StopCrash_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\StopCrash_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "StopCrash.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            StopCrash * p_StopCrash;
            p_StopCrash = new StopCrash;
            p_StopCrash->startBehavior();
            //#[ configuration DefaultComponent::StopCrash_Simulation 
            //#]
            OXF::start();
            delete p_StopCrash;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\StopCrash_Simulation\MainDefaultComponent.cpp
*********************************************************************/
