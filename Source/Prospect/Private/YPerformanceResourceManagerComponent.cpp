#include "YPerformanceResourceManagerComponent.h"

UYPerformanceResourceManagerComponent::UYPerformanceResourceManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYPerformanceResourceManagerComponent::RequestExecutionHandles(UObject* objectContext, int32 Amount, TArray<int32>& outHandles) {
    return false;
}

void UYPerformanceResourceManagerComponent::OnFinishedSpawnRequest(int32 Handle) {
}

void UYPerformanceResourceManagerComponent::ExecuteSpawnActor(UObject* WorldContext, const FYResourceSpawnActorRequest& requestData) {
}


