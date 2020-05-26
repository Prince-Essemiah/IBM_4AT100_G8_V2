/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TUesla
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\TUesla.h
*********************************************************************/

#ifndef TUesla_H
#define TUesla_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## classInstance itsController
#include "Controller.h"
//## classInstance itsDCT_1
#include "DCT.h"
//## classInstance itsDistributionCenter_1
#include "DistributionCenter.h"
//## classInstance itsTruck
#include "Truck.h"
//## link itsDCLoadingEmployee
class DCLoadingEmployee;

//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## link itsTruckDriver
class TruckDriver;

//## package TUesla

//## class TUesla
class TUesla {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TUesla();
    
    //## auto_generated
    ~TUesla();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Controller* getItsController() const;
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    DCT* getItsDCT_1() const;
    
    //## auto_generated
    DistributionCenter* getItsDistributionCenter_1() const;
    
    //## auto_generated
    Truck* getItsTruck() const;

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Controller itsController;		//## classInstance itsController
    
    DCT* itsDCT;		//## link itsDCT
    
    DCT itsDCT_1;		//## classInstance itsDCT_1
    
    DistributionCenter itsDistributionCenter_1;		//## classInstance itsDistributionCenter_1
    
    Truck itsTruck;		//## classInstance itsTruck
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
    
    //## auto_generated
    DCLoadingEmployee* getItsDCLoadingEmployee() const;
    
    //## auto_generated
    void setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    TruckDriver* getItsTruckDriver() const;
    
    //## auto_generated
    void setItsTruckDriver(TruckDriver* p_TruckDriver);

protected :

    DCLoadingEmployee* itsDCLoadingEmployee;		//## link itsDCLoadingEmployee
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    TruckDriver* itsTruckDriver;		//## link itsTruckDriver

public :

    //## auto_generated
    void __setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _clearItsDCLoadingEmployee();
    
    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    //## auto_generated
    void __setItsTruckDriver(TruckDriver* p_TruckDriver);
    
    //## auto_generated
    void _setItsTruckDriver(TruckDriver* p_TruckDriver);
    
    //## auto_generated
    void _clearItsTruckDriver();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TUesla.h
*********************************************************************/
