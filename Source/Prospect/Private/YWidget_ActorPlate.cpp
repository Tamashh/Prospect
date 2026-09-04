#include "YWidget_ActorPlate.h"

UYWidget_ActorPlate::UYWidget_ActorPlate() {
    this->m_offscreenRotationContainer = NULL;
    this->m_healthComponent = NULL;
    this->m_dbnoComponent = NULL;
    this->m_perkComponent = NULL;
    this->m_associatedActor = NULL;
    this->m_healthRatio = 1.0f;
    this->m_isWorldLocationProjectedOnScreen = false;
    this->m_offscreenPositionEdgePercent = 0.649999976f;
    this->m_distanceToPlayer = 0.0f;
    this->m_recentlyDamaged = false;
    this->m_alwaysVisibleEvenOffScreen = false;
    this->m_isInTeam = false;
    this->m_isNPCActorPlate = false;
    this->m_autoCleanUpOnZeroHealth = true;
    this->m_hideOnZeroHealth = false;
    this->m_forceNonVisibile = false;
}

void UYWidget_ActorPlate::SetWidgetPlateData(const FYWidgetActorPlateInitializationData& Data) {
}

void UYWidget_ActorPlate::OnTeleported() {
}

void UYWidget_ActorPlate::OnPerksUpdated() {
}

void UYWidget_ActorPlate::OnHealthUpdated(float CurrentHealth, AActor* Instigator) {
}

void UYWidget_ActorPlate::EnableVisibility() {
}

UYWidget_ActorPlate* UYWidget_ActorPlate::CreatePlateWidgetAndAddToViewport(AActor* Owner, const FYActorPlateWidgetCreationData& dataWidgetUpdate) {
    return NULL;
}








