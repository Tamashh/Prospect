#include "YActivitiesManager.h"
#include "Net/UnrealNetwork.h"

UYActivitiesManager::UYActivitiesManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_spawnRequestsAllowedPerFrame = 20;
}

void UYActivitiesManager::OnActivitiesLoaded() {
}

bool UYActivitiesManager::IsActivityActive(EYActivityType Type) {
    return false;
}

AYActivityActorManager* UYActivitiesManager::GetActivityByType(EYActivityType activityType) {
    return NULL;
}

TArray<AYActivityActorManager*> UYActivitiesManager::GetActivities() const {
    return TArray<AYActivityActorManager*>();
}

UYActivitiesManager* UYActivitiesManager::FindActivitiesManager(UObject* WorldContextObject) {
    return NULL;
}

bool UYActivitiesManager::AddSpawnActivityActorToken(FYSpawnActivityActorTokenData requestData) {
    return false;
}

void UYActivitiesManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYActivitiesManager, m_activeActivityTypes);
}


