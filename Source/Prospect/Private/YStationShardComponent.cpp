#include "YStationShardComponent.h"

UYStationShardComponent::UYStationShardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYStationShardComponent::SetIsOnlyRelevantToSelf(AActor* relevantActor, bool newState) {
}

UYStationShardComponent* UYStationShardComponent::FindStationShardComponent(UObject* WorldContext) {
    return NULL;
}
