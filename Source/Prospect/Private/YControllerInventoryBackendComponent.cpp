#include "YControllerInventoryBackendComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerInventoryBackendComponent::UYControllerInventoryBackendComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_backendInventoryModel = NULL;
}

bool UYControllerInventoryBackendComponent::TryGetEndOfMatchData(FYEomInventoryData& outData) const {
    return false;
}

void UYControllerInventoryBackendComponent::SmokeCheckTrySendInventoryToBackend() const {
}

void UYControllerInventoryBackendComponent::RequestTOCDataMigration(const FYAzureFunctionResult& azureResult) {
}

void UYControllerInventoryBackendComponent::OnRep_EndOfMatchUpdates() {
}

bool UYControllerInventoryBackendComponent::IsInitialized() const {
    return false;
}

void UYControllerInventoryBackendComponent::InitializeInventoryFromDataAsset(UYDefaultInventoryDataAsset* DataAsset) {
}

void UYControllerInventoryBackendComponent::InitializeInventory() {
}

void UYControllerInventoryBackendComponent::HandleOnInventoryDataUpdated(const TArray<EYInventoryPlayerTypes>& typesChanged) {
}

void UYControllerInventoryBackendComponent::HandleOnEndOfMatchDataChanged() {
}

void UYControllerInventoryBackendComponent::HandleOnBackendInventoryChanged() const {
}

void UYControllerInventoryBackendComponent::HandleBackendInventoryModelInitialized() {
}

void UYControllerInventoryBackendComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerInventoryBackendComponent, m_endOfMatchData);
}


