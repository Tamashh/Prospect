#include "YActorDespawningComponent.h"

UYActorDespawningComponent::UYActorDespawningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_defaultDespawnDistance = 7500.0f;
}

float UYActorDespawningComponent::GetDebugActorDespawnDistanceMultiplier() {
    return 0.0f;
}

FString UYActorDespawningComponent::DetermineDebugDespawnActorInfo(AActor* Actor) {
    return TEXT("");
}


