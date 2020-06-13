/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLoadingEmployee.h
*********************************************************************/

#ifndef DCLoadingEmployee_H
#define DCLoadingEmployee_H

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

//## link itsUC_LoadingCargo
class UC_LoadingCargo;

//## package SystemContext::Actors::PrimaryActors

//## actor DCLoadingEmployee
class DCLoadingEmployee {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCLoadingEmployee;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCLoadingEmployee();
    
    //## auto_generated
    ~DCLoadingEmployee();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    UC_LoadingCargo* getItsUC_LoadingCargo() const;
    
    //## auto_generated
    void setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_LoadingCargo* itsUC_LoadingCargo;		//## link itsUC_LoadingCargo
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _setItsUC_LoadingCargo(UC_LoadingCargo* p_UC_LoadingCargo);
    
    //## auto_generated
    void _clearItsUC_LoadingCargo();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCLoadingEmployee : virtual public AOMInstance {
    DECLARE_META(DCLoadingEmployee, OMAnimatedDCLoadingEmployee)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCLoadingEmployee.h
*********************************************************************/
