/********************************************************************
	Rhapsody	: 8.4 
	Login		: bthem
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: UC_SetCoordinates
//!	Generated Date	: Mon, 8, Jun 2020  
	File Path	: DefaultComponent\DefaultConfig\UC_SetCoordinates.cpp
*********************************************************************/

//## auto_generated
#include "UC_SetCoordinates.h"
//## link itsDCLogisticEmployee
#include "DCLogisticEmployee.h"
//## package TUesla::UseCaseModelling::SetCoordinates

//## class UC_SetCoordinates
//#[ ignore
UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionCouplingInActivityActivity_0OfUC_SetCoordinates::ActionCouplingInActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, IOxfEvent::ID eventId, UC_SetCoordinates& context) : OMAcceptEventAction(id, activity, eventId), mContext(&context) {
}

OMList<OMString> UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionCouplingInActivityActivity_0OfUC_SetCoordinates::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionCouplingInActivityActivity_0OfUC_SetCoordinates();
}

void UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionCouplingInActivityActivity_0OfUC_SetCoordinates::acceptEventData() {
    mContext->delegatedAcceptEventDataFromActionCouplingInActivityActivity_0OfUC_SetCoordinates();
}

UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionAction_6InActivityActivity_0OfUC_SetCoordinates::ActionAction_6InActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, UC_SetCoordinates& context) : OMContextualAction(id, activity), mContext(&context) {
}

OMList<OMString> UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionAction_6InActivityActivity_0OfUC_SetCoordinates::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionAction_6InActivityActivity_0OfUC_SetCoordinates();
}

void UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionAction_6InActivityActivity_0OfUC_SetCoordinates::invokeContextMethod() {
    mContext->delegatedInvokeContextMethodFromActionAction_6InActivityActivity_0OfUC_SetCoordinates();
}

UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates::ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates(const OMString& id, Activity_0OfUC_SetCoordinates& activity, UC_SetCoordinates& context) : OMFlowFinalNode(id, activity), mContext(&context) {
}

OMList<OMString> UC_SetCoordinates::Activity_0OfUC_SetCoordinates::ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates::filterPassableFlows() {
    return mContext->delegatedFilterPassableFlowsFromActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates();
}

UC_SetCoordinates::Activity_0OfUC_SetCoordinates::Activity_0OfUC_SetCoordinates(UC_SetCoordinates& context) : OMActivity(&context), mContext(&context) {
    // Setup nodes
    ActionCouplingInActivityActivity_0OfUC_SetCoordinates* varCoupling = new ActionCouplingInActivityActivity_0OfUC_SetCoordinates("activity_0:ROOT.Coupling", *this, selectingLD_SetCoordinates_UseCaseModelling_TUesla_id, *mContext);
    ActionAction_6InActivityActivity_0OfUC_SetCoordinates* varAction_6 = new ActionAction_6InActivityActivity_0OfUC_SetCoordinates("activity_0:ROOT.action_6", *this, *mContext);
    ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates* varFlowfinal_7 = new ActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates("activity_0:ROOT.flowfinal_7", *this, *mContext);
    OMInitialAction* varInitialNode0 = new OMInitialAction("activity_0:0", *this);
    
    // Setup flows
    new OMControlFlow("activity_0:0", *this, *varInitialNode0, *varCoupling);
    new OMControlFlow("activity_0:1", *this, *varCoupling, *varAction_6);
    new OMControlFlow("activity_0:2", *this, *varAction_6, *varFlowfinal_7);
}
//#]

UC_SetCoordinates::UC_SetCoordinates() {
    itsDCLogisticEmployee = NULL;
}

UC_SetCoordinates::~UC_SetCoordinates() {
    cleanUpRelations();
}

//#[ ignore
OMActivity* UC_SetCoordinates::createMainActivity() {
    return new Activity_0OfUC_SetCoordinates(*this);
}
//#]

OMList<OMString> UC_SetCoordinates::delegatedFilterPassableFlowsFromActionCouplingInActivityActivity_0OfUC_SetCoordinates() {
    //#[ activity_action activity_0:ROOT.Coupling
    OMList<OMString> ans;
    ans.add("activity_0:1");
    return ans;
    //#]
}

void UC_SetCoordinates::delegatedAcceptEventDataFromActionCouplingInActivityActivity_0OfUC_SetCoordinates() {
    //#[ activity_action activity_0:ROOT.Coupling
    //#]
}

OMList<OMString> UC_SetCoordinates::delegatedFilterPassableFlowsFromActionAction_6InActivityActivity_0OfUC_SetCoordinates() {
    //#[ activity_action activity_0:ROOT.action_6
    OMList<OMString> ans;
    ans.add("activity_0:2");
    return ans;
    //#]
}

void UC_SetCoordinates::delegatedInvokeContextMethodFromActionAction_6InActivityActivity_0OfUC_SetCoordinates() {
    //#[ activity_action activity_0:ROOT.action_6
    //#]
}

OMList<OMString> UC_SetCoordinates::delegatedFilterPassableFlowsFromActionFlowfinal_7InActivityActivity_0OfUC_SetCoordinates() {
    //#[ activity_action activity_0:ROOT.flowfinal_7
    OMList<OMString> ans;
    return ans;
    //#]
}

DCLogisticEmployee* UC_SetCoordinates::getItsDCLogisticEmployee() const {
    return itsDCLogisticEmployee;
}

void UC_SetCoordinates::setItsDCLogisticEmployee(DCLogisticEmployee* p_DCLogisticEmployee) {
    itsDCLogisticEmployee = p_DCLogisticEmployee;
}

bool UC_SetCoordinates::startBehavior() {
    bool done = false;
    done = OMActivityContext::startBehavior();
    return done;
}

void UC_SetCoordinates::cleanUpRelations() {
    if(itsDCLogisticEmployee != NULL)
        {
            itsDCLogisticEmployee = NULL;
        }
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\UC_SetCoordinates.cpp
*********************************************************************/
