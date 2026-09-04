#include "YPlayerFactionsProgressionComponent.h"

UYPlayerFactionsProgressionComponent::UYPlayerFactionsProgressionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlayerFactionsProgressionComponent::SetFactionProgressionLocalData(const FYUpdatedFactionProgression& factionProgressData) {
}

UYPlayerFactionsProgressionComponent* UYPlayerFactionsProgressionComponent::FindFactionProgressComponentChecked(AActor* actorContext) {
    return NULL;
}

UYPlayerFactionsProgressionComponent* UYPlayerFactionsProgressionComponent::FindFactionProgressComponent(AActor* actorContext) {
    return NULL;
}

void UYPlayerFactionsProgressionComponent::CheckAndBroadcastFactionLevelUp(const EYFaction& Faction, int32 newFactionLevel, int32 currentFactionLevel) {
}

void UYPlayerFactionsProgressionComponent::CacheAndBroadcastData(const FYPlayerFactionProgressionUIData& playerFactionProgressionUIData, bool predicted) {
}


