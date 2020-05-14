/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: TUesla
//!	Generated Date	: Tue, 31, Mar 2020  
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
//## classInstance itsDistributionCenter
#include "DistributionCenter.h"
//## classInstance itsTruck
#include "Truck.h"
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
    DistributionCenter* getItsDistributionCenter() const;
    
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
    
    DistributionCenter itsDistributionCenter;		//## classInstance itsDistributionCenter
    
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
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\TUesla.h
*********************************************************************/
