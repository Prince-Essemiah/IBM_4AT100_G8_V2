/********************************************************************
	Rhapsody	: 8.4 
	Login		: Prana
	Component	: DefaultComponent 
	Configuration 	: LoadingCargo_Simulation
	Model Element	: DCLocalizationSystem
//!	Generated Date	: Tue, 9, Jun 2020  
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCLocalizationSystem.cpp
*********************************************************************/

//#[ ignore
#define NAMESPACE_PREFIX
//#]

//## auto_generated
#include "DCLocalizationSystem.h"
//## link itsLoadingCargo
#include "LoadingCargo.h"
//## link itsObstacleDetection
#include "ObstacleDetection.h"
//## link itsParkingAssign
#include "ParkingAssign.h"
//## link itsPathPlanning
#include "PathPlanning.h"
//## link itsTUesla
#include "TUesla.h"
//#[ ignore
#define TUesla_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE OM_NO_OP
//#]

//## package TUesla::Actors::SecondaryActors

//## class DCLocalizationSystem
DCLocalizationSystem::DCLocalizationSystem() {
    NOTIFY_CONSTRUCTOR(DCLocalizationSystem, DCLocalizationSystem(), 0, TUesla_Actors_SecondaryActors_DCLocalizationSystem_DCLocalizationSystem_SERIALIZE);
    itsLoadingCargo = NULL;
    itsObstacleDetection = NULL;
    itsParkingAssign = NULL;
    itsPathPlanning = NULL;
    itsTUesla = NULL;
}

DCLocalizationSystem::~DCLocalizationSystem() {
    NOTIFY_DESTRUCTOR(~DCLocalizationSystem, true);
    cleanUpRelations();
}

LoadingCargo* DCLocalizationSystem::getItsLoadingCargo() const {
    return itsLoadingCargo;
}

void DCLocalizationSystem::setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(p_LoadingCargo != NULL)
        {
            p_LoadingCargo->_setItsDCLocalizationSystem(this);
        }
    _setItsLoadingCargo(p_LoadingCargo);
}

ObstacleDetection* DCLocalizationSystem::getItsObstacleDetection() const {
    return itsObstacleDetection;
}

void DCLocalizationSystem::setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection) {
    if(p_ObstacleDetection != NULL)
        {
            p_ObstacleDetection->_setItsDCLocalizationSystem(this);
        }
    _setItsObstacleDetection(p_ObstacleDetection);
}

ParkingAssign* DCLocalizationSystem::getItsParkingAssign() const {
    return itsParkingAssign;
}

void DCLocalizationSystem::setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(p_ParkingAssign != NULL)
        {
            p_ParkingAssign->_setItsDCLocalizationSystem(this);
        }
    _setItsParkingAssign(p_ParkingAssign);
}

PathPlanning* DCLocalizationSystem::getItsPathPlanning() const {
    return itsPathPlanning;
}

void DCLocalizationSystem::setItsPathPlanning(PathPlanning* p_PathPlanning) {
    if(p_PathPlanning != NULL)
        {
            p_PathPlanning->_setItsDCLocalizationSystem(this);
        }
    _setItsPathPlanning(p_PathPlanning);
}

TUesla* DCLocalizationSystem::getItsTUesla() const {
    return itsTUesla;
}

void DCLocalizationSystem::setItsTUesla(TUesla* p_TUesla) {
    if(p_TUesla != NULL)
        {
            p_TUesla->_setItsDCLocalizationSystem(this);
        }
    _setItsTUesla(p_TUesla);
}

void DCLocalizationSystem::cleanUpRelations() {
    if(itsLoadingCargo != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
            DCLocalizationSystem* p_DCLocalizationSystem = itsLoadingCargo->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsLoadingCargo->__setItsDCLocalizationSystem(NULL);
                }
            itsLoadingCargo = NULL;
        }
    if(itsObstacleDetection != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsObstacleDetection");
            DCLocalizationSystem* p_DCLocalizationSystem = itsObstacleDetection->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsObstacleDetection->__setItsDCLocalizationSystem(NULL);
                }
            itsObstacleDetection = NULL;
        }
    if(itsParkingAssign != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
            DCLocalizationSystem* p_DCLocalizationSystem = itsParkingAssign->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsParkingAssign->__setItsDCLocalizationSystem(NULL);
                }
            itsParkingAssign = NULL;
        }
    if(itsPathPlanning != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsPathPlanning");
            DCLocalizationSystem* p_DCLocalizationSystem = itsPathPlanning->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsPathPlanning->__setItsDCLocalizationSystem(NULL);
                }
            itsPathPlanning = NULL;
        }
    if(itsTUesla != NULL)
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
            DCLocalizationSystem* p_DCLocalizationSystem = itsTUesla->getItsDCLocalizationSystem();
            if(p_DCLocalizationSystem != NULL)
                {
                    itsTUesla->__setItsDCLocalizationSystem(NULL);
                }
            itsTUesla = NULL;
        }
}

void DCLocalizationSystem::__setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    itsLoadingCargo = p_LoadingCargo;
    if(p_LoadingCargo != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsLoadingCargo", p_LoadingCargo, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsLoadingCargo");
        }
}

void DCLocalizationSystem::_setItsLoadingCargo(LoadingCargo* p_LoadingCargo) {
    if(itsLoadingCargo != NULL)
        {
            itsLoadingCargo->__setItsDCLocalizationSystem(NULL);
        }
    __setItsLoadingCargo(p_LoadingCargo);
}

void DCLocalizationSystem::_clearItsLoadingCargo() {
    NOTIFY_RELATION_CLEARED("itsLoadingCargo");
    itsLoadingCargo = NULL;
}

void DCLocalizationSystem::__setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection) {
    itsObstacleDetection = p_ObstacleDetection;
    if(p_ObstacleDetection != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsObstacleDetection", p_ObstacleDetection, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsObstacleDetection");
        }
}

void DCLocalizationSystem::_setItsObstacleDetection(ObstacleDetection* p_ObstacleDetection) {
    if(itsObstacleDetection != NULL)
        {
            itsObstacleDetection->__setItsDCLocalizationSystem(NULL);
        }
    __setItsObstacleDetection(p_ObstacleDetection);
}

void DCLocalizationSystem::_clearItsObstacleDetection() {
    NOTIFY_RELATION_CLEARED("itsObstacleDetection");
    itsObstacleDetection = NULL;
}

void DCLocalizationSystem::__setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    itsParkingAssign = p_ParkingAssign;
    if(p_ParkingAssign != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsParkingAssign", p_ParkingAssign, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsParkingAssign");
        }
}

void DCLocalizationSystem::_setItsParkingAssign(ParkingAssign* p_ParkingAssign) {
    if(itsParkingAssign != NULL)
        {
            itsParkingAssign->__setItsDCLocalizationSystem(NULL);
        }
    __setItsParkingAssign(p_ParkingAssign);
}

void DCLocalizationSystem::_clearItsParkingAssign() {
    NOTIFY_RELATION_CLEARED("itsParkingAssign");
    itsParkingAssign = NULL;
}

void DCLocalizationSystem::__setItsPathPlanning(PathPlanning* p_PathPlanning) {
    itsPathPlanning = p_PathPlanning;
    if(p_PathPlanning != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsPathPlanning", p_PathPlanning, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsPathPlanning");
        }
}

void DCLocalizationSystem::_setItsPathPlanning(PathPlanning* p_PathPlanning) {
    if(itsPathPlanning != NULL)
        {
            itsPathPlanning->__setItsDCLocalizationSystem(NULL);
        }
    __setItsPathPlanning(p_PathPlanning);
}

void DCLocalizationSystem::_clearItsPathPlanning() {
    NOTIFY_RELATION_CLEARED("itsPathPlanning");
    itsPathPlanning = NULL;
}

void DCLocalizationSystem::__setItsTUesla(TUesla* p_TUesla) {
    itsTUesla = p_TUesla;
    if(p_TUesla != NULL)
        {
            NOTIFY_RELATION_ITEM_ADDED("itsTUesla", p_TUesla, false, true);
        }
    else
        {
            NOTIFY_RELATION_CLEARED("itsTUesla");
        }
}

void DCLocalizationSystem::_setItsTUesla(TUesla* p_TUesla) {
    if(itsTUesla != NULL)
        {
            itsTUesla->__setItsDCLocalizationSystem(NULL);
        }
    __setItsTUesla(p_TUesla);
}

void DCLocalizationSystem::_clearItsTUesla() {
    NOTIFY_RELATION_CLEARED("itsTUesla");
    itsTUesla = NULL;
}

#ifdef _OMINSTRUMENT
//#[ ignore
void OMAnimatedDCLocalizationSystem::serializeRelations(AOMSRelations* aomsRelations) const {
    aomsRelations->addRelation("itsTUesla", false, true);
    if(myReal->itsTUesla)
        {
            aomsRelations->ADD_ITEM(myReal->itsTUesla);
        }
    aomsRelations->addRelation("itsParkingAssign", false, true);
    if(myReal->itsParkingAssign)
        {
            aomsRelations->ADD_ITEM(myReal->itsParkingAssign);
        }
    aomsRelations->addRelation("itsPathPlanning", false, true);
    if(myReal->itsPathPlanning)
        {
            aomsRelations->ADD_ITEM(myReal->itsPathPlanning);
        }
    aomsRelations->addRelation("itsObstacleDetection", false, true);
    if(myReal->itsObstacleDetection)
        {
            aomsRelations->ADD_ITEM(myReal->itsObstacleDetection);
        }
    aomsRelations->addRelation("itsLoadingCargo", false, true);
    if(myReal->itsLoadingCargo)
        {
            aomsRelations->ADD_ITEM(myReal->itsLoadingCargo);
        }
}
//#]

IMPLEMENT_META_P(DCLocalizationSystem, TUesla_Actors_SecondaryActors, TUesla::Actors::SecondaryActors, false, OMAnimatedDCLocalizationSystem)
#endif // _OMINSTRUMENT

/*********************************************************************
	File Path	: DefaultComponent\LoadingCargo_Simulation\DCLocalizationSystem.cpp
*********************************************************************/
