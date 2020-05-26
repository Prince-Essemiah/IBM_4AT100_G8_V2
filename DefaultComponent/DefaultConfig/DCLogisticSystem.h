/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLogisticSystem
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLogisticSystem.h
*********************************************************************/

#ifndef DCLogisticSystem_H
#define DCLogisticSystem_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsUC_SetCoordinates
class UC_SetCoordinates;

//## package TUesla

//## class DCLogisticSystem
class DCLogisticSystem {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCLogisticSystem();
    
    //## auto_generated
    ~DCLogisticSystem();
    
    ////    Additional operations    ////
    
    //## auto_generated
    UC_SetCoordinates* getItsUC_SetCoordinates() const;
    
    //## auto_generated
    void setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    UC_SetCoordinates* itsUC_SetCoordinates;		//## link itsUC_SetCoordinates
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);
    
    //## auto_generated
    void _setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);
    
    //## auto_generated
    void _clearItsUC_SetCoordinates();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLogisticSystem.h
*********************************************************************/
