#include "YSpawnManagerComponent.h"

UYSpawnManagerComponent::UYSpawnManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultSpawnRadius = 10000.0f;
    this->m_defaultDespawnRadiusBonus = 1000.0f;
}

void UYSpawnManagerComponent::RemoveActorToSpawn(UYPersistentData* persistentData) {
}

void UYSpawnManagerComponent::PurgeAllEntries() {
}

bool UYSpawnManagerComponent::IsPersistentDataStillRelevant(UYPersistentData* persistentData) const {
    return false;
}

UYSpawnManagerComponent* UYSpawnManagerComponent::GetYSpawnManager(const UObject* WorldContextObject) {
    return NULL;
}

void UYSpawnManagerComponent::AddNewActorToSpawn(UYPersistentData* persistentData, const FString& Context) {
}


