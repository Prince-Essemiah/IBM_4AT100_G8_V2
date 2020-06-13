/*********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: UC_Drive_Simulation
	Model Element	: Sensors
//!	Generated Date	: Sat, 13, Jun 2020  
	File Path	: DefaultComponent\UC_Drive_Simulation\Sensors.h
*********************************************************************/

#ifndef Sensors_H
#define Sensors_H

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

//## link itsUC_StopCrash
class UC_StopCrash;

//## package SystemContext::Actors::SecondaryActors

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
    class Camera {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedCamera;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        Camera();
        
        //## auto_generated
        ~Camera();
    };
    
    //## class Sensors::Lidar
    class Lidar {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedLidar;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        Lidar();
        
        //## auto_generated
        ~Lidar();
    };
    
    //## class Sensors::Velocity
    class Velocity {
        ////    Friends    ////
        
    public :
    
    #ifdef _OMINSTRUMENT
        friend class OMAnimatedVelocity;
    #endif // _OMINSTRUMENT
    
        ////    Constructors and destructors    ////
        
        //## auto_generated
        Velocity();
        
        //## auto_generated
        ~Velocity();
    };
    
    ////    Friends    ////
    
#ifdef _OMINSTRUMENT
    friend class OMAnimatedSensors;
#endif // _OMINSTRUMENT

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
    
    //## auto_generated
    UC_StopCrash* getItsUC_StopCrash() const;
    
    //## auto_generated
    void setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TUesla* itsTUesla;		//## link itsTUesla
    
    UC_StopCrash* itsUC_StopCrash;		//## link itsUC_StopCrash
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _setItsTUesla(TUesla* p_TUesla);
    
    //## auto_generated
    void _clearItsTUesla();
    
    //## auto_generated
    void __setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);
    
    //## auto_generated
    void _setItsUC_StopCrash(UC_StopCrash* p_UC_StopCrash);
    
    //## auto_generated
    void _clearItsUC_StopCrash();
};

#ifdef _OMINSTRUMENT
//#[ ignore
class OMAnimatedSensors : virtual public AOMInstance {
    DECLARE_META(Sensors, OMAnimatedSensors)
    
    ////    Framework operations    ////
    
public :

    virtual void serializeRelations(AOMSRelations* aomsRelations) const;
};

class OMAnimatedCamera : virtual public AOMInstance {
    DECLARE_META(Sensors::Camera, OMAnimatedCamera)
};

class OMAnimatedLidar : virtual public AOMInstance {
    DECLARE_META(Sensors::Lidar, OMAnimatedLidar)
};

class OMAnimatedVelocity : virtual public AOMInstance {
    DECLARE_META(Sensors::Velocity, OMAnimatedVelocity)
};
//#]
#endif // _OMINSTRUMENT

#endif
/*********************************************************************
	File Path	: DefaultComponent\UC_Drive_Simulation\Sensors.h
*********************************************************************/
