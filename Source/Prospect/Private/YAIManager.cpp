#include "YAIManager.h"

UYAIManager::UYAIManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_shouldSpawnPrototypeAIVersions = false;
}

UYAIManager* UYAIManager::TryGetYAIManager(const UObject* WorldContextObject) {
    return NULL;
}

void UYAIManager::RemoveTargetFromAllAIs(AActor* actorToRemove) {
}

UYAIManager* UYAIManager::GetYAIManager(UObject* WorldContextObject) {
    return NULL;
}

int32 UYAIManager::GetNumPendingSpawnRequests() {
    return 0;
}

FName UYAIManager::GenerateUniqueSquadName(const FString& squadNameBase) {
    return NAME_None;
}


