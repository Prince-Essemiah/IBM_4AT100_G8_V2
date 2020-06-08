/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Sensors
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\Sensors.h
*********************************************************************/

#ifndef Sensors_H
#define Sensors_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## link itsTUesla
class TUesla;

//## package TUesla::Actors::SecondaryActors

//## class Sensors
class Sensors {
public :

    //## auto_generated
    class Camera;
    
    //## auto_generated
    class Lidar;
    
    //## auto_generated
    class Velocity;
    
    //## class Sensors::Camera
    class Camera : public Sensors {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Camera();
        
        //## auto_generated
        ~Camera();
    };
    
    //## class Sensors::Lidar
    class Lidar : public Sensors {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Lidar();
        
        //## auto_generated
        ~Lidar();
    };
    
    //## class Sensors::Velocity
    class Velocity : public Sensors {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        Velocity();
        
        //## auto_generated
        ~Velocity();
    };
    
    ////    Constructors and destructors    ////
    
    //## auto_generated
    Sensors();
    
    //## auto_generated
    ~Sensors();
    
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
	File Path	: DefaultComponent\DefaultConfig\Sensors.h
*********************************************************************/
