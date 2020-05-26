/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Truck
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/

#ifndef Truck_H
#define Truck_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## link itsTruckDriver
class TruckDriver;

//## package TUesla

//## class Truck
class Truck {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Truck();
    
    //## auto_generated
    ~Truck();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    TruckDriver* getItsTruckDriver() const;
    
    //## auto_generated
    void setItsTruckDriver(TruckDriver* p_TruckDriver);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    TruckDriver* itsTruckDriver;		//## link itsTruckDriver
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTruckDriver(TruckDriver* p_TruckDriver);
    
    //## auto_generated
    void _setItsTruckDriver(TruckDriver* p_TruckDriver);
    
    //## auto_generated
    void _clearItsTruckDriver();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Truck.h
*********************************************************************/
