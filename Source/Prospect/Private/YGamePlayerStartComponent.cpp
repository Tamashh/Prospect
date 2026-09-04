#include "YGamePlayerStartComponent.h"

UYGamePlayerStartComponent::UYGamePlayerStartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UYGamePlayerStartComponent* UYGamePlayerStartComponent::FindGamePlayerStartComponent(const UObject* Context) {
    return NULL;
}

bool UYGamePlayerStartComponent::FindClusters(int32 minSize, TArray<FYPlayerStartCluster>& outClusters) const {
    return false;
}

FYPlayerStartCluster UYGamePlayerStartComponent::FindBestScoredPlayerStartCluster(const TArray<FYPlayerStartCluster>& clusters, int32& outScore) const {
    return FYPlayerStartCluster{};
}


