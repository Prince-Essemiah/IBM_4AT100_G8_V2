/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: TUesla
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\TUesla.h
*********************************************************************/

#ifndef TUesla_H
#define TUesla_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## link itsCargo
class Cargo;

//## link itsDCBoard
class DCBoard;

//## link itsDCLoadingEmployee
class DCLoadingEmployee;

//## link itsDCLocalizationSystem
class DCLocalizationSystem;

//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## link itsEnvironmentSensors
class EnvironmentSensors;

//## link itsSensors
class Sensors;

//## auto_generated
class TUesla;

//## link itsDCT
class DCT;

//## package TUesla

//## class TUesla
class TUesla {
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedTUesla;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    TUesla();
    
    //## auto_generated
    ~TUesla();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
    
    //## auto_generated
    Cargo* getItsCargo() const;
    
    //## auto_generated
    void setItsCargo(Cargo* p_Cargo);
    
    //## auto_generated
    DCBoard* getItsDCBoard() const;
    
    //## auto_generated
    void setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    DCLoadingEmployee* getItsDCLoadingEmployee() const;
    
    //## auto_generated
    void setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    DCLocalizationSystem* getItsDCLocalizationSystem() const;
    
    //## auto_generated
    void setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    EnvironmentSensors* getItsEnvironmentSensors() const;
    
    //## auto_generated
    void setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);
    
    //## auto_generated
    Sensors* getItsSensors() const;
    
    //## auto_generated
    void setItsSensors(Sensors* p_Sensors);

protected :

    Cargo* itsCargo;		//## link itsCargo
    
    DCBoard* itsDCBoard;		//## link itsDCBoard
    
    DCLoadingEmployee* itsDCLoadingEmployee;		//## link itsDCLoadingEmployee
    
    DCLocalizationSystem* itsDCLocalizationSystem;		//## link itsDCLocalizationSystem
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    DCT* itsDCT;		//## link itsDCT
    
    EnvironmentSensors* itsEnvironmentSensors;		//## link itsEnvironmentSensors
    
    Sensors* itsSensors;		//## link itsSensors

public :

    //## auto_generated
    void __setItsCargo(Cargo* p_Cargo);
    
    //## auto_generated
    void _setItsCargo(Cargo* p_Cargo);
    
    //## auto_generated
    void _clearItsCargo();
    
    //## auto_generated
    void __setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    void _setItsDCBoard(DCBoard* p_DCBoard);
    
    //## auto_generated
    void _clearItsDCBoard();
    
    //## auto_generated
    void __setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _setItsDCLoadingEmployee(DCLoadingEmployee* p_DCLoadingEmployee);
    
    //## auto_generated
    void _clearItsDCLoadingEmployee();
    
    //## auto_generated
    void __setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem);
    
    //## auto_generated
    void _clearItsDCLocalizationSystem();
    
    //## auto_generated
    void __setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    void _clearItsDCLogisticEmployee();
    
    //## auto_generated
    void __setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);
    
    //## auto_generated
    void _setItsEnvironmentSensors(EnvironmentSensors* p_EnvironmentSensors);
    
    //## auto_generated
    void _clearItsEnvironmentSensors();
    
    //## auto_generated
    void __setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    void _setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    void _clearItsSensors();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedTUesla : virtual public AOMInstance {
    DECLARE_META(TUesla, OMAnimatedTUesla)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

//## package TUesla



#endif
/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\TUesla.h
*********************************************************************/
