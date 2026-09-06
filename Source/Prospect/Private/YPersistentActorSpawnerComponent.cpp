#include "YPersistentActorSpawnerComponent.h"

UYPersistentActorSpawnerComponent::UYPersistentActorSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultSpawnRadius = 10000.0f;
    this->m_defaultDespawnRadiusBonus = 1000.0f;
}

void UYPersistentActorSpawnerComponent::RemoveActorToSpawn(UYPersistentActorInfo* persistentData) {
}

UYPersistentActorSpawnerComponent* UYPersistentActorSpawnerComponent::GetPersistentActorSpawner(const UObject* WorldContextObject) {
    return NULL;
}

void UYPersistentActorSpawnerComponent::DebugPurgeAllEntries() {
}

void UYPersistentActorSpawnerComponent::AddNewActorToSpawn(UYPersistentActorInfo* persistentData, const FString& Context) {
}
