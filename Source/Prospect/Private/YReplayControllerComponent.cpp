#include "YReplayControllerComponent.h"

UYReplayControllerComponent::UYReplayControllerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYReplayControllerComponent::ReadInMarkers(TArray<FYReplayMarker>& outMarkers) {
}

bool UYReplayControllerComponent::IsReplayPaused(UObject* WorldContextObject) {
    return false;
}

bool UYReplayControllerComponent::FindReplayMarker(int32 currentReplayTimeInSeconds, bool findNextMarker, const TArray<FYReplayMarker>& sortedMarkers, FYReplayMarker& outMarker) {
    return false;
}

void UYReplayControllerComponent::DeleteMarker(const FString& MarkerName) {
}

bool UYReplayControllerComponent::AddMarker(FYReplayMarker marker) {
    return false;
}


