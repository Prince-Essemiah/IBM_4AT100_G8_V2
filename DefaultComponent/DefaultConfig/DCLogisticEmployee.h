/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Tue, 26, May 2020  
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.h
*********************************************************************/

#ifndef DCLogisticEmployee_H
#define DCLogisticEmployee_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## link itsUC_SetCoordinates
class UC_SetCoordinates;

//## package ActorPkg

//## actor DCLogisticEmployee
class DCLogisticEmployee {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    DCLogisticEmployee();
    
    //## auto_generated
    ~DCLogisticEmployee();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    UC_SetCoordinates* getItsUC_SetCoordinates() const;
    
    //## auto_generated
    void setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_SetCoordinates* itsUC_SetCoordinates;		//## link itsUC_SetCoordinates
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);
    
    //## auto_generated
    void _setItsUC_SetCoordinates(UC_SetCoordinates* p_UC_SetCoordinates);
    
    //## auto_generated
    void _clearItsUC_SetCoordinates();
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCLogisticEmployee.h
*********************************************************************/
