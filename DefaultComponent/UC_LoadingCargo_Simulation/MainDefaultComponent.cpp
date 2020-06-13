/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: UC_LoadingCargo_Simulation
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "UC_LoadingCargo.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            UC_LoadingCargo * p_UC_LoadingCargo;
            p_UC_LoadingCargo = new UC_LoadingCargo;
            p_UC_LoadingCargo->startBehavior();
            //#[ configuration DefaultComponent::UC_LoadingCargo_Simulation 
            //#]
            OXF::start();
            delete p_UC_LoadingCargo;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\MainDefaultComponent.cpp
*********************************************************************/
