/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_LoadingCargo_Simulation
	Model Element	: DCLogisticEmployee
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLogisticEmployee.h
*********************************************************************/

#ifndef DCLogisticEmployee_H
#define DCLogisticEmployee_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "PrimaryActors.h"
//## link itsTUesla
class TUesla;

//## package SystemContext::Actors::PrimaryActors

//## actor DCLogisticEmployee
class DCLogisticEmployee {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCLogisticEmployee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCLogisticEmployee();
    
    //## auto_generated
    ~DCLogisticEmployee();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCLogisticEmployee : virtual public AOMInstance {
    DECLARE_META(DCLogisticEmployee, OMAnimatedDCLogisticEmployee)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_LoadingCargo_Simulation\DCLogisticEmployee.h
*********************************************************************/
