/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: Coupling
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\Coupling.h
*********************************************************************/

#ifndef Coupling_H
#define Coupling_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "Usecases.h"
//## link itsDCT
class DCT;

//## package TUesla::Usecases

//## usecase Coupling
// Name: Coupling of the Trailer to the DCT
// Goal: Couple/Uncouple the trailer and DCT
// Primary Actor : DCT
// 
// Main Scenario:
// 1. TU/esla signals DCT to set Couple[==true].
// 2. DCT signals back with CoupleStatus[==true]
// 
// Alternative Scenario
// 1.1 TU/esla signals DCT to set Couple[==false].
// 1.2 DCT signals back with CoupleStatus[==false]
// 
// 
// 
class Coupling {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedCoupling;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Coupling();
    
    //## auto_generated
    ~Coupling();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    void _clearItsDCT();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedCoupling : virtual public AOMInstance {
    DECLARE_META(Coupling, OMAnimatedCoupling)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\Coupling.h
*********************************************************************/
