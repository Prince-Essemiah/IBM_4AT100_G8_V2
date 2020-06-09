/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: PathPlanning_Simulation
	Model Element	: ObstacleDetection
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\PathPlanning_Simulation\ObstacleDetection.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "ObstacleDetection.h"
//## link itsDCLocalizationSystem
#include "DCLocalizationSystem.h"
//#[ ignore
#define TUesla_Usecases_ObstacleDetection_ObstacleDetection_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Usecases

//## usecase ObstacleDetection
ObstacleDetection::ObstacleDetection() {
    NOTIFY_CONSTRUCTOR(ObstacleDetection, ObstacleDetection(), 0, TUesla_Usecases_ObstacleDetection_ObstacleDetection_SERIALIZE);
    itsDCLocalizationSystem = NULL;
}

ObstacleDetection::~ObstacleDetection() {
    NOTIFY_DESTRUCTOR(~ObstacleDetection, true);
    cleanUpRelations();
}

DCLocalizationSystem* ObstacleDetection::getItsDCLocalizationSystem() const {
    return itsDCLocalizationSystem;
}

void ObstacleDetection::setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(p_DCLocalizationSystem != NULL)
        {
            p_DCLocalizationSystem->_setItsObstacleDetection(this);
        }
    _setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void ObstacleDetection::cleanUpRelations() {
    if(itsDCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
            ObstacleDetection* p_ObstacleDetection = itsDCLocalizationSystem->getItsObstacleDetection();
            if(p_ObstacleDetection != NULL)
                {
                    itsDCLocalizationSystem->__setItsObstacleDetection(NULL);
                }
            itsDCLocalizationSystem = NULL;
        }
}

void ObstacleDetection::__setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    itsDCLocalizationSystem = p_DCLocalizationSystem;
    if(p_DCLocalizationSystem != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsDCLocalizationSystem", p_DCLocalizationSystem, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
        }
}

void ObstacleDetection::_setItsDCLocalizationSystem(DCLocalizationSystem* p_DCLocalizationSystem) {
    if(itsDCLocalizationSystem != NULL)
        {
            itsDCLocalizationSystem->__setItsObstacleDetection(NULL);
        }
    __setItsDCLocalizationSystem(p_DCLocalizationSystem);
}

void ObstacleDetection::_clearItsDCLocalizationSystem() {
    NOTIFY_RELATION_CLEARED("itsDCLocalizationSystem");
    itsDCLocalizationSystem = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedObstacleDetection::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsDCLocalizationSystem", false, true);
    if(myReal->itsDCLocalizationSystem)
        {
            aomsRelations->ADD_ITEM(myReal->itsDCLocalizationSystem);
        }
}
//#]

IMPLEMENT_META_P(ObstacleDetection, TUesla_Usecases, TUesla::Usecases, false, OMAnimatedObstacleDetection)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\PathPlanning_Simulation\ObstacleDetection.cpp
*********************************************************************/
