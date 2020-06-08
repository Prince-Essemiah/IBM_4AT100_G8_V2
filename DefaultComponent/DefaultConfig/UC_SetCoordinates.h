/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_SetCoordinates
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_SetCoordinates.h
*********************************************************************/

#ifndef UC_SetCoordinates_H
#define UC_SetCoordinates_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## auto_generated
#include "SetCoordinates.h"
//## link itsDCLogisticEmployee
class DCLogisticEmployee;

//## package TUesla::UseCaseModelling::SetCoordinates

//## class UC_SetCoordinates
class UC_SetCoordinates : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfUC_SetCoordinates;
    
//#[ ignore
    class Activity_0OfUC_SetCoordinates : virtual public OMActivity {
    public :
    
        class ActionCouplingInActivityActivity_0OfUC_SetCoordinates : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionCouplingInActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, IOxfEvent::ID eventId, UC_SetCoordinates& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_SetCoordinates* mContext;
        };
        
        class ActionAction_6InActivityActivity_0OfUC_SetCoordinates : virtual public OMContextualAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionAction_6InActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, UC_SetCoordinates& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void invokeContextMethod();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_SetCoordinates* mContext;
        };
        
        class ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates : virtual public OMFlowFinalNode {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, UC_SetCoordinates& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_SetCoordinates* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfUC_SetCoordinates(UC_SetCoordinates& context);
        
        ////    Framework    ////
        
        UC_SetCoordinates* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_SetCoordinates();
    
    //## auto_generated
    ~UC_SetCoordinates();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action activity_0:ROOT.Coupling
    OMList<OMString> delegatedFilterPassableFlowsFromActionCouplingInActivityActivity_0OfUC_SetCoordinates();
    
    //## activity_action activity_0:ROOT.Coupling
    void delegatedAcceptEventDataFromActionCouplingInActivityActivity_0OfUC_SetCoordinates();
    
    //## activity_action activity_0:ROOT.action_6
    OMList<OMString> delegatedFilterPassableFlowsFromActionAction_6InActivityActivity_0OfUC_SetCoordinates();
    
    //## activity_action activity_0:ROOT.action_6
    void delegatedInvokeContextMethodFromActionAction_6InActivityActivity_0OfUC_SetCoordinates();
    
    //## activity_action activity_0:ROOT.flowfinal_7
    OMList<OMString> delegatedFilterPassableFlowsFromActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCLogisticEmployee* getItsDCLogisticEmployee() const;
    
    //## auto_generated
    void setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCLogisticEmployee* itsDCLogisticEmployee;		//## link itsDCLogisticEmployee
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_SetCoordinates.h
*********************************************************************/
