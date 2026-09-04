#include "YPlayerInitializationComponent.h"
#include "Net/UnrealNetwork.h"

UYPlayerInitializationComponent::UYPlayerInitializationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_timeOutDuration = 120.0f;
    this->m_isServerInitialized = false;
}

void UYPlayerInitializationComponent::SetPlayerLocationAndStartLevelStreaming() {
}

void UYPlayerInitializationComponent::ServerRequestDebugStatusUpdate_Implementation() {
}

void UYPlayerInitializationComponent::OnSpawnLocationSet(FYPlayerSpawnLocationInfo Data, EYCachedSpawnLocationType Type, const FString& contextStr) {
}

void UYPlayerInitializationComponent::OnRep_IsServerInitialized() {
}

void UYPlayerInitializationComponent::OnInventoryInitializationCompleted() {
}

void UYPlayerInitializationComponent::OnGlobalVanityAssetsLoaded(bool newState) {
}

void UYPlayerInitializationComponent::OnCallbackMeshInitialized() {
}

void UYPlayerInitializationComponent::NotifyClientAboutServerFinishedInitialization() {
}

void UYPlayerInitializationComponent::ClientOnStatusUpdateFromServer_Implementation(const TArray<FString>& infos) {
}

void UYPlayerInitializationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYPlayerInitializationComponent, m_isServerInitialized);
}


