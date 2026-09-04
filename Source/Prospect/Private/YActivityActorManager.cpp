#include "YActivityActorManager.h"
#include "YActivityRegisterComponent.h"

AYActivityActorManager::AYActivityActorManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bShouldNeverSeamlessTravel = true;
    this->m_registerComponent = CreateDefaultSubobject<UYActivityRegisterComponent>(TEXT("YActivityRegisterComponent"));
    this->m_activityType = EYActivityType::None;
    this->m_defaultActivityActorClass = NULL;
}


int32 AYActivityActorManager::GetNumSpawnedActors() {
    return 0;
}

int32 AYActivityActorManager::GetDesiredActorCount() {
    return 0;
}

FYActivityDataTableRow AYActivityActorManager::GetActivityTuning() const {
    return FYActivityDataTableRow{};
}






