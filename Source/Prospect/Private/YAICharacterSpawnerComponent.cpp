#include "YAICharacterSpawnerComponent.h"

UYAICharacterSpawnerComponent::UYAICharacterSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYAICharacterSpawnerComponent* UYAICharacterSpawnerComponent::TryGetYAICharacterSpawner(const UObject* WorldContextObject) {
    return NULL;
}

UYAICharacterSpawnerComponent* UYAICharacterSpawnerComponent::GetYAICharacterSpawner(const UObject* WorldContextObject) {
    return NULL;
}

int32 UYAICharacterSpawnerComponent::GetNumPendingSpawnRequests() const {
    return 0;
}
