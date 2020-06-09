/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: UC_Drive_Simulation
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "UC_Drive.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            UC_Drive * p_UC_Drive;
            p_UC_Drive = new UC_Drive;
            p_UC_Drive->startBehavior();
            //#[ configuration DefaultComponent::UC_Drive_Simulation 
            //#]
            OXF::start();
            delete p_UC_Drive;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\MainDefaultComponent.cpp
*********************************************************************/
