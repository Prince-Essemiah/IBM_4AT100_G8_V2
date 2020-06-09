/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: DCLoadingEmployee
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\DCLoadingEmployee.h
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
//## link itsLoadingCargo
class LoadingCargo;

//## link itsTUesla
class TUesla;

//## package TUesla::Actors::PrimaryActors

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
    LoadingCargo* getItsLoadingCargo() const;
    
    //## auto_generated
    void setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    LoadingCargo* itsLoadingCargo;		//## link itsLoadingCargo
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _setItsLoadingCargo(LoadingCargo* p_LoadingCargo);
    
    //## auto_generated
    void _clearItsLoadingCargo();
    
    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
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
	File Path	: DefaultComponent\PathPlanning_Simulation\DCLoadingEmployee.h
*********************************************************************/
