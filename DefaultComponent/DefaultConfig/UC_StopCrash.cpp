/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_StopCrash
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_StopCrash.cpp
*********************************************************************/

//## auto_generated
#include "UC_StopCrash.h"
//## link itsDCT
#include "DCT.h"
//## link itsSensors
#include "Sensors.h"
//## package TUesla::UseCaseModelling::StopCrash

//## class UC_StopCrash
//#[ ignore
UC_StopCrash::Activity_0OfUC_StopCrash::ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash::ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_1InActivityActivity_0OfUC_StopCrash::ActionAction_1InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_1InActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_1InActivityActivity_0OfUC_StopCrash::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionControllerAbortsInActivityActivity_0OfUC_StopCrash::ActionControllerAbortsInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionControllerAbortsInActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionControllerAbortsInActivityActivity_0OfUC_StopCrash::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_3InActivityActivity_0OfUC_StopCrash::ActionAction_3InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_3InActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_3InActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_3InActivityActivity_0OfUC_StopCrash::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_3InActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash::ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_5InActivityActivity_0OfUC_StopCrash::ActionAction_5InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_5InActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_5InActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_5InActivityActivity_0OfUC_StopCrash::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_5InActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash::ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, IOxfEvent::ID eventId, UC_StopCrash& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_7InActivityActivity_0OfUC_StopCrash::ActionAction_7InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_7InActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_7InActivityActivity_0OfUC_StopCrash();
}

void UC_StopCrash::Activity_0OfUC_StopCrash::ActionAction_7InActivityActivity_0OfUC_StopCrash::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_7InActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash::ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash(const OMString& id, Activity_0OfUC_StopCrash& activity, UC_StopCrash& context) : OMActivityFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> UC_StopCrash::Activity_0OfUC_StopCrash::ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionActivityfinal_9InActivityActivity_0OfUC_StopCrash();
}

UC_StopCrash::Activity_0OfUC_StopCrash::Activity_0OfUC_StopCrash(UC_StopCrash& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash* varDetectsCollision = new ActionDetectsCollisionInActivityActivity_0OfUC_StopCrash("activity_0:ROOT.DetectsCollision", *this, , *mContext);
    ActionAction_1InActivityActivity_0OfUC_StopCrash* varAction_1 = new ActionAction_1InActivityActivity_0OfUC_StopCrash("activity_0:ROOT.action_1", *this, *mContext);
    ActionControllerAbortsInActivityActivity_0OfUC_StopCrash* varControllerAborts = new ActionControllerAbortsInActivityActivity_0OfUC_StopCrash("activity_0:ROOT.ControllerAborts", *this, , *mContext);
    ActionAction_3InActivityActivity_0OfUC_StopCrash* varAction_3 = new ActionAction_3InActivityActivity_0OfUC_StopCrash("activity_0:ROOT.action_3", *this, *mContext);
    ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash* varDCTStopSignal = new ActionDCTStopSignalInActivityActivity_0OfUC_StopCrash("activity_0:ROOT.DCTStopSignal", *this, , *mContext);
    ActionAction_5InActivityActivity_0OfUC_StopCrash* varAction_5 = new ActionAction_5InActivityActivity_0OfUC_StopCrash("activity_0:ROOT.action_5", *this, *mContext);
    ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash* varSendSignalGUI = new ActionSendSignalGUIInActivityActivity_0OfUC_StopCrash("activity_0:ROOT.SendSignalGUI", *this, , *mContext);
    ActionAction_7InActivityActivity_0OfUC_StopCrash* varAction_7 = new ActionAction_7InActivityActivity_0OfUC_StopCrash("activity_0:ROOT.action_7", *this, *mContext);
    ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash* varActivityfinal_9 = new ActionActivityfinal_9InActivityActivity_0OfUC_StopCrash("activity_0:ROOT.activityfinal_9", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_0:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_0:0", *this, *varInitialNode0, *varDetectsCollision);
    new OMControlFlow("activity_0:1", *this, *varDetectsCollision, *varAction_1);
    new OMControlFlow("activity_0:2", *this, *varAction_1, *varControllerAborts);
    new OMControlFlow("activity_0:3", *this, *varControllerAborts, *varAction_3);
    new OMControlFlow("activity_0:4", *this, *varAction_3, *varDCTStopSignal);
    new OMControlFlow("activity_0:5", *this, *varDCTStopSignal, *varAction_5);
    new OMControlFlow("activity_0:6", *this, *varAction_5, *varSendSignalGUI);
    new OMControlFlow("activity_0:7", *this, *varSendSignalGUI, *varAction_7);
    new OMControlFlow("activity_0:8", *this, *varAction_7, *varActivityfinal_9);
}
//#]

UC_StopCrash::UC_StopCrash() {
    itsDCT = NULL;
    itsSensors = NULL;
}

UC_StopCrash::~UC_StopCrash() {
    cleanUpRelations();
}

//#[ ignore
OMActivity* UC_StopCrash::createMainActivity() {
    return new Activity_0OfUC_StopCrash(*this);
}
//#]

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.DetectsCollision
    OMList<OMString> ans;
    ans.add("activity_0:1");
    return ans;
    //#]
}

void UC_StopCrash::delegatedAcceptEventDataFromActionDetectsCollisionInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.DetectsCollision
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionAction_1InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_1
    OMList<OMString> ans;
    ans.add("activity_0:2");
    return ans;
    //#]
}

void UC_StopCrash::delegatedInvokeContextMethodFromActionAction_1InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_1
    AbortSignalController
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.ControllerAborts
    OMList<OMString> ans;
    ans.add("activity_0:3");
    return ans;
    //#]
}

void UC_StopCrash::delegatedAcceptEventDataFromActionControllerAbortsInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.ControllerAborts
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionAction_3InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_3
    OMList<OMString> ans;
    ans.add("activity_0:4");
    return ans;
    //#]
}

void UC_StopCrash::delegatedInvokeContextMethodFromActionAction_3InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_3
    DCTBrakes
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.DCTStopSignal
    OMList<OMString> ans;
    ans.add("activity_0:5");
    return ans;
    //#]
}

void UC_StopCrash::delegatedAcceptEventDataFromActionDCTStopSignalInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.DCTStopSignal
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionAction_5InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_5
    OMList<OMString> ans;
    ans.add("activity_0:6");
    return ans;
    //#]
}

void UC_StopCrash::delegatedInvokeContextMethodFromActionAction_5InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_5
    DeactivateController
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.SendSignalGUI
    OMList<OMString> ans;
    ans.add("activity_0:7");
    return ans;
    //#]
}

void UC_StopCrash::delegatedAcceptEventDataFromActionSendSignalGUIInActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.SendSignalGUI
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionAction_7InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_7
    OMList<OMString> ans;
    ans.add("activity_0:8");
    return ans;
    //#]
}

void UC_StopCrash::delegatedInvokeContextMethodFromActionAction_7InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.action_7
    DisplayManualGUI
    //#]
}

OMList<OMString> UC_StopCrash::delegatedFilterPassableFlowsFromActionActivityfinal_9InActivityActivity_0OfUC_StopCrash() {
    //#[ activity_action activity_0:ROOT.activityfinal_9
    OMList<OMString> ans;
    return ans;
    //#]
}

DCT* UC_StopCrash::getItsDCT() const {
    return itsDCT;
}

void UC_StopCrash::setItsDCT(DCT* p_DCT) {
    itsDCT = p_DCT;
}

Sensors* UC_StopCrash::getItsSensors() const {
    return itsSensors;
}

void UC_StopCrash::setItsSensors(Sensors* p_Sensors) {
    itsSensors = p_Sensors;
}

bool UC_StopCrash::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_StopCrash::cleanUpRelations() {
    if(itsDCT != NULL)
        {
            itsDCT = NULL;
        }
    if(itsSensors != NULL)
        {
            itsSensors = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_StopCrash.cpp
*********************************************************************/
