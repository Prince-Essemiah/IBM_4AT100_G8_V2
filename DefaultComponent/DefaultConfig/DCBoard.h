/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DCBoard
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\DCBoard.h
*********************************************************************/

#ifndef DCBoard_H
#define DCBoard_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
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
    class TPABoard : public DCBoard {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        TPABoard();
        
        //## auto_generated
        ~TPABoard();
    };
    
    //## class DCBoard::EntranceBoard
    class EntranceBoard : public DCBoard {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        EntranceBoard();
        
        //## auto_generated
        ~EntranceBoard();
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    DCBoard();
    
    //## auto_generated
    ~DCBoard();
    
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

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\DCBoard.h
*********************************************************************/
