/*********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_DCTReverseParkLD
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_DCTReverseParkLD.h
*********************************************************************/

#ifndef UC_DCTReverseParkLD_H
#define UC_DCTReverseParkLD_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//##   ignore
#include <simulation\OMActivityContext.h>
//## link itsDCT
class DCT;

//## package TUesla::UseCaseModelling::DCTReverseParkLD

//## class UC_DCTReverseParkLD
class UC_DCTReverseParkLD : virtual public OMActivityContext {
public :

    //## auto_generated
    class Activity_0OfUC_DCTReverseParkLD;
    
//#[ ignore
    class Activity_0OfUC_DCTReverseParkLD : virtual public OMActivity {
    public :
    
        class ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD : virtual public OMAcceptEventAction {
            ////    Constructors and destructors    ////
            
        public :
        
            ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD(const OMString& id, Activity_0OfUC_DCTReverseParkLD& activity, IOxfEvent::ID eventId, UC_DCTReverseParkLD& context);
            
            virtual OMList<OMString> filterPassableFlows();
            
            virtual void acceptEventData();
            
            ////    Framework operations    ////
            
            ////    Framework    ////
            
            UC_DCTReverseParkLD* mContext;
        };
        
        ////    Constructors and destructors    ////
        
        Activity_0OfUC_DCTReverseParkLD(UC_DCTReverseParkLD& context);
        
        ////    Framework    ////
        
        UC_DCTReverseParkLD* mContext;
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    UC_DCTReverseParkLD();
    
    //## auto_generated
    ~UC_DCTReverseParkLD();
    
//#[ ignore
    virtual OMActivity* createMainActivity();
//#]

    //## activity_action activity_0:ROOT.DCTReceivesInputController
    OMList<OMString> delegatedFilterPassableFlowsFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD();
    
    //## activity_action activity_0:ROOT.DCTReceivesInputController
    void delegatedAcceptEventDataFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD();
    
    ////    Additional operations    ////
    
    //## auto_generated
    DCT* getItsDCT() const;
    
    //## auto_generated
    void setItsDCT(DCT* p_DCT);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    DCT* itsDCT;		//## link itsDCT
    
    ////    Framework operations    ////
};

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_DCTReverseParkLD.h
*********************************************************************/
