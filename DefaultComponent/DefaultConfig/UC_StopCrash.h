/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_StopCrash
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_StopCrash.h
*********************************************************************/

#ifndef UC_StopCrash_H
#define UC_StopCrash_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## link itsDCT
class DCT;

//## link itsSensors
class Sensors;

//## package TUesla::UseCaseModelling::StopCrash

//## class UC_StopCrash
class UC_StopCrash : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfUC_StopCrash;
    
//#[ ignore
    class Activity_0OfUC_StopCrash : virtual public OMActivity {
    public :
    
        class ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionAction_1InActivityActivity_0OfUC_StopCrash : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_1InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionControllerAbortsInActivityActivity_0OfUC_StopCrash : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionControllerAbortsInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionAction_3InActivityActivity_0OfUC_StopCrash : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_3InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionAction_5InActivityActivity_0OfUC_StopCrash : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_5InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionAction_7InActivityActivity_0OfUC_StopCrash : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_7InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        class ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash : virtual public OMActivityFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_StopCrash* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfUC_StopCrash(UC_StopCrash& context);
        
        ////    Framework    ////
        
        UC_StopCrash* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_StopCrash();
    
    //## auto_generated
    ~UC_StopCrash();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action activity_0:ROOT.DetectsCollision
    OMList<OMString> delegatedFilterPassableFlowsFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.DetectsCollision
    void delegatedAcceptEventDataFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_1
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_1
    void delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.ControllerAborts
    OMList<OMString> delegatedFilterPassableFlowsFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.ControllerAborts
    void delegatedAcceptEventDataFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_3
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_3InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_3
    void delegatedInvokeContextMethodFromActionAction_3InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.DCTStopSignal
    OMList<OMString> delegatedFilterPassableFlowsFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.DCTStopSignal
    void delegatedAcceptEventDataFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_5
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_5InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_5
    void delegatedInvokeContextMethodFromActionAction_5InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.SendSignalGUI
    OMList<OMString> delegatedFilterPassableFlowsFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.SendSignalGUI
    void delegatedAcceptEventDataFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_7
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_7InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.action_7
    void delegatedInvokeContextMethodFromActionAction_7InActivityActivity_0OfUC_StopCrash();
    
    //## activity_action activity_0:ROOT.activityfinal_9
    OMList<OMString> delegatedFilterPassableFlowsFromActionActivityfinal_9InActivityActivity_0OfUC_StopCrash();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    Sensors* getItsSensors() const;
    
    //## auto_generated
    void setItsSensors(Sensors* p_Sensors);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    Sensors* itsSensors;		//## link itsSensors
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_StopCrash.h
*********************************************************************/
