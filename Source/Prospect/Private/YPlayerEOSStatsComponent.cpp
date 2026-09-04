#include "YPlayerEOSStatsComponent.h"

UYPlayerEOSStatsComponent::UYPlayerEOSStatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_isInitialized = false;
}

void UYPlayerEOSStatsComponent::RetryQueryStats(FYSocialProfileEntry socialProfileEntry) {
}

void UYPlayerEOSStatsComponent::QueryStatsForLocalPlayerState(const FString& Context) {
}

void UYPlayerEOSStatsComponent::OnSuccesfullyConnectedCallback() {
}

void UYPlayerEOSStatsComponent::OnSocialProfilesUpdateCallback() {
}

void UYPlayerEOSStatsComponent::OnPreviousMatchHasEndedRequeryDelayCallback() {
}

void UYPlayerEOSStatsComponent::OnPlayerStateChangedCallback() {
}

void UYPlayerEOSStatsComponent::OnMatchStateChangedCallback(EYMatchState matchState) {
}

void UYPlayerEOSStatsComponent::OnFeatureToggleReceivedCallback(const FYFeatureToggles& featureToggles) {
}

bool UYPlayerEOSStatsComponent::GetStatFromPlayerStateAndRowHandle(AYPlayerState* PlayerState, const FDataTableRowHandle& statRowHandle, const FString& Context, FYRawStatEntry& statEntry) {
    return false;
}

bool UYPlayerEOSStatsComponent::GetStatFromPlayerState(APlayerState* PlayerState, FYRawStatEntry& statEntry) {
    return false;
}

bool UYPlayerEOSStatsComponent::GetAllStatsFromPlayerState(APlayerState* PlayerState, FYUserRawStatsData& statsData) {
    return false;
}


