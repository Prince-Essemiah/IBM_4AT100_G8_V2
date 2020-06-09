/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: ManualOverrideAutonomousMode_Simulation
	Model Element	: ManualOverrideAutonomousMode_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "ManualOverrideAutonomousMode.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            ManualOverrideAutonomousMode * p_ManualOverrideAutonomousMode;
            p_ManualOverrideAutonomousMode = new ManualOverrideAutonomousMode;
            p_ManualOverrideAutonomousMode->startBehavior();
            //#[ configuration DefaultComponent::ManualOverrideAutonomousMode_Simulation 
            //#]
            OXF::start();
            delete p_ManualOverrideAutonomousMode;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\ManualOverrideAutonomousMode_Simulation\MainDefaultComponent.cpp
*********************************************************************/
