/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: LoadingCargo_Simulation
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "LoadingCargo.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize(argc, argv, 6423))
        {
            LoadingCargo * p_LoadingCargo;
            p_LoadingCargo = new LoadingCargo;
            p_LoadingCargo->startBehavior();
            //#[ configuration DefaultComponent::LoadingCargo_Simulation 
            //#]
            OXF::start();
            delete p_LoadingCargo;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\MainDefaultComponent.cpp
*********************************************************************/
