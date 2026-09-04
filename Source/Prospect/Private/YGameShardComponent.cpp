#include "YGameShardComponent.h"

UYGameShardComponent::UYGameShardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYGameShardComponent::SetIsOnlyRelevantToSelf(AActor* relevantActor, bool newState) {
}

UYGameShardComponent* UYGameShardComponent::FindGameShardComponent(UObject* WorldContext) {
    return NULL;
}


