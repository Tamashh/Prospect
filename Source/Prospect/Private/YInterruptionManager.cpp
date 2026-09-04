#include "YInterruptionManager.h"

UYInterruptionManager::UYInterruptionManager() {
    this->m_interruptionManagementSettings = NULL;
}

float UYInterruptionManager::RetryLoginTimeRemaining() {
    return 0.0f;
}

void UYInterruptionManager::PlayerMovementMaxSavedMovesHit() {
}

void UYInterruptionManager::OnSignalRReconnecting() {
}

void UYInterruptionManager::OnSignalRReady() {
}

void UYInterruptionManager::OnPlayfabMessageProcessedSuccessfullyCallback() {
}

void UYInterruptionManager::OnPlayfabMessageErrorCallback(int32 httpErrorCode, const FString& errorMessage) {
}

void UYInterruptionManager::OnPlayerTypeInitializedCallback(EYPlayerInitializationType playerInitializationType) {
}

void UYInterruptionManager::OnPlayerInitializationCompleteCallback() {
}

void UYInterruptionManager::OnMapLoadedCallback(FWorldContext& WorldContext, const FURL& URL, float loadDuration) {
}

void UYInterruptionManager::OnAzureFunctionSuccesfullCallback() {
}

void UYInterruptionManager::OnAzureFunctionErrorCallback(int32 httpErrorCode, const FString& errorMessage) {
}

bool UYInterruptionManager::IsInterruptionStateActive(EYInterruptionCause interruptionCause) const {
    return false;
}

UYInterruptionManager* UYInterruptionManager::GetInterruptionManager(const UObject* WorldContext) {
    return NULL;
}

bool UYInterruptionManager::GetHasTravelledBecauseOfInterrupt() const {
    return false;
}

void UYInterruptionManager::DEBUGSetServerCrash(bool newState) {
}

void UYInterruptionManager::CheckPlayerSoftLocked() {
}


