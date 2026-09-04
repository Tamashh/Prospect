#include "YActivityLocation.h"
#include "Components/SceneComponent.h"

AYActivityLocation::AYActivityLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_status = EYActivityLocationStatus::Free;
    this->m_respawnBlockTime = 180.0f;
    this->m_activityType = EYActivityType::None;
    this->m_spawnWeight = 1.0f;
    this->m_isGenericActivityLocation = false;
    this->m_spawnRadiusOverride = -1.0f;
    this->m_despawnMinTimeNoPlayerClose = 0.0f;
    this->m_hiddenInEditor = true;
}

void AYActivityLocation::NotifyIsAvailable() {
}

void AYActivityLocation::NotifyActorDestroyed() {
}



EYActivityType AYActivityLocation::GetActivityType() {
    return EYActivityType::None;
}

float AYActivityLocation::DetermineRespawnBlockTime() {
    return 0.0f;
}


