/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_DCTReverseParkLD
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_DCTReverseParkLD.cpp
*********************************************************************/

//## auto_generated
#include "UC_DCTReverseParkLD.h"
//## link itsDCT
#include "DCT.h"
//## package TUesla::UseCaseModelling::DCTReverseParkLD

//## class UC_DCTReverseParkLD
//#[ ignore
UC_DCTReverseParkLD::Activity_0OfUC_DCTReverseParkLD::ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD::ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD(const OMString& id, Activity_0OfUC_DCTReverseParkLD& activity, IOxfEvent::ID eventId, UC_DCTReverseParkLD& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_DCTReverseParkLD::Activity_0OfUC_DCTReverseParkLD::ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD();
}

void UC_DCTReverseParkLD::Activity_0OfUC_DCTReverseParkLD::ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD();
}

UC_DCTReverseParkLD::Activity_0OfUC_DCTReverseParkLD::Activity_0OfUC_DCTReverseParkLD(UC_DCTReverseParkLD& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD* varDCTReceivesInputController = new ActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD("activity_0:ROOT.DCTReceivesInputController", *this, , *mContext);
    
    // Setup flows
}
//#]

UC_DCTReverseParkLD::UC_DCTReverseParkLD() {
    itsDCT = NULL;
}

UC_DCTReverseParkLD::~UC_DCTReverseParkLD() {
    cleanUpRelations();
}

//#[ ignore
OMActivity* UC_DCTReverseParkLD::createMainActivity() {
    return new Activity_0OfUC_DCTReverseParkLD(*this);
}
//#]

OMList<OMString> UC_DCTReverseParkLD::delegatedFilterPassableFlowsFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD() {
    //#[ activity_action activity_0:ROOT.DCTReceivesInputController
    OMList<OMString> ans;
    return ans;
    //#]
}

void UC_DCTReverseParkLD::delegatedAcceptEventDataFromActionDCTReceivesInputControllerInActivityActivity_0OfUC_DCTReverseParkLD() {
    //#[ activity_action activity_0:ROOT.DCTReceivesInputController
    //#]
}

DCT* UC_DCTReverseParkLD::getItsDCT() const {
    return itsDCT;
}

void UC_DCTReverseParkLD::setItsDCT(DCT* p_DCT) {
    itsDCT = p_DCT;
}

bool UC_DCTReverseParkLD::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_DCTReverseParkLD::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            itsDCT = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_DCTReverseParkLD.cpp
*********************************************************************/
