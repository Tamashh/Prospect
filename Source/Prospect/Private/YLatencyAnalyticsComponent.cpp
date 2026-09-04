#include "YLatencyAnalyticsComponent.h"

UYLatencyAnalyticsComponent::UYLatencyAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYLatencyAnalyticsComponent::SetupDelegateForPlayerStateClient() {
}

void UYLatencyAnalyticsComponent::SetupDelegateForPlayerState(APlayerState* PlayerState) {
}

void UYLatencyAnalyticsComponent::OnPlayerMatchStateChanged(EYPlayerMatchState newState, AYPlayerState* PlayerState) {
}

void UYLatencyAnalyticsComponent::OnNetCleanup(APlayerState* PlayerState) {
}

void UYLatencyAnalyticsComponent::CaptureSampleServer() {
}

void UYLatencyAnalyticsComponent::CaptureSampleClient() {
}

void UYLatencyAnalyticsComponent::AddLatencySample(double sample) {
}


