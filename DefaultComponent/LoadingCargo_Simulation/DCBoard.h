/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: DCBoard
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCBoard.h
*********************************************************************/

#ifndef DCBoard_H
#define DCBoard_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include <aom\aom.h>
//## auto_generated
#include "SecondaryActors.h"
//## link itsParkingAssign
class ParkingAssign;

//## link itsTUesla
class TUesla;

//## package TUesla::Actors::SecondaryActors

//## class DCBoard
class DCBoard {
public :

    //## auto_generated
    class EntranceBoard;
    
    //## auto_generated
    class TPABoard;
    
    //## class DCBoard::TPABoard
    class TPABoard {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedTPABoard;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        TPABoard();
        
        //## auto_generated
        ~TPABoard();
    };
    
    //## class DCBoard::EntranceBoard
    class EntranceBoard {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedEntranceBoard;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        EntranceBoard();
        
        //## auto_generated
        ~EntranceBoard();
    };
    
    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedDCBoard;
#endif // _OMINSTRUMENT

    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCBoard();
    
    //## auto_generated
    ~DCBoard();
    
    ////    Additional operations    ////
    
    //## auto_generated
    ParkingAssign* getItsParkingAssign() const;
    
    //## auto_generated
    void setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    TUesla* getItsTUesla() const;
    
    //## auto_generated
    void setItsTUesla(TUesla* p_TUesla);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ParkingAssign* itsParkingAssign;		//## link itsParkingAssign
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _setItsParkingAssign(ParkingAssign* p_ParkingAssign);
    
    //## auto_generated
    void _clearItsParkingAssign();
    
    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedDCBoard : virtual public AOMInstance {
    DECLARE_META(DCBoard, OMAnimatedDCBoard)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};

class OMAnimatedTPABoard : virtual public AOMInstance {
    DECLARE_META(DCBoard::TPABoard, OMAnimatedTPABoard)
};

class OMAnimatedEntranceBoard : virtual public AOMInstance {
    DECLARE_META(DCBoard::EntranceBoard, OMAnimatedEntranceBoard)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCBoard.h
*********************************************************************/
