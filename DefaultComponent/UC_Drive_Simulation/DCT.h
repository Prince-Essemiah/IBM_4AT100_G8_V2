/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: DCT
//!	Generated Date	: Sun, 7, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.h
*********************************************************************/

#ifndef DCT_H
#define DCT_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SecondaryActors.h"
//## link itsTUesla
class TUesla;

//## link itsUC_Drive
class UC_Drive;

//## package TUesla::Actors::SecondaryActors

//## class DCT
class DCT {
    ////    Friends    ////
    
public :

#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCT;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCT();
    
    //## auto_generated
    ~DCT();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    UC_Drive* getItsUC_Drive() const;
    
    //## auto_generated
    void setItsUC_Drive(UC_Drive* p_UC_Drive);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_Drive* itsUC_Drive;		//## link itsUC_Drive
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_Drive(UC_Drive* p_UC_Drive);
    
    //## auto_generated
    void _setItsUC_Drive(UC_Drive* p_UC_Drive);
    
    //## auto_generated
    void _clearItsUC_Drive();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCT : virtual public AOMInstance {
    DECLARE_META(DCT, OMAnimatedDCT)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\DCT.h
*********************************************************************/
