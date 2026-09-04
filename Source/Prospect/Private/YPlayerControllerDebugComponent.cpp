#include "YPlayerControllerDebugComponent.h"

UYPlayerControllerDebugComponent::UYPlayerControllerDebugComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_maxDebugEntries = 20;
}

void UYPlayerControllerDebugComponent::ServerYDebugUpdateWeapon_Implementation(const FYInventoryItem& weapon) {
}
bool UYPlayerControllerDebugComponent::ServerYDebugUpdateWeapon_Validate(const FYInventoryItem& weapon) {
    return true;
}

void UYPlayerControllerDebugComponent::ServerYDebugExecuteUpgradeChange_Implementation(FYUpgradeDebugChange upgradeChange) {
}
bool UYPlayerControllerDebugComponent::ServerYDebugExecuteUpgradeChange_Validate(FYUpgradeDebugChange upgradeChange) {
    return true;
}

void UYPlayerControllerDebugComponent::ServerYDebugAddInventoryItems_Implementation(const TArray<FDataTableRowHandle>& Items) {
}
bool UYPlayerControllerDebugComponent::ServerYDebugAddInventoryItems_Validate(const TArray<FDataTableRowHandle>& Items) {
    return true;
}

void UYPlayerControllerDebugComponent::ServerSetAdditionalPingToPlayer_Implementation(float pingAddition) {
}
bool UYPlayerControllerDebugComponent::ServerSetAdditionalPingToPlayer_Validate(float pingAddition) {
    return true;
}

void UYPlayerControllerDebugComponent::ServerRequestDebugNetworkSettings_Implementation() {
}
bool UYPlayerControllerDebugComponent::ServerRequestDebugNetworkSettings_Validate() {
    return true;
}

void UYPlayerControllerDebugComponent::ServerGetShardDebugState_Implementation() {
}
bool UYPlayerControllerDebugComponent::ServerGetShardDebugState_Validate() {
    return true;
}

void UYPlayerControllerDebugComponent::ServerGetInitializationDebugState_Implementation(EYDebugServerRetrievalType State) {
}
bool UYPlayerControllerDebugComponent::ServerGetInitializationDebugState_Validate(EYDebugServerRetrievalType State) {
    return true;
}

void UYPlayerControllerDebugComponent::RequestPlayfabUserData() {
}

void UYPlayerControllerDebugComponent::OnPlayfabUserReadOnlyDataReceived(const FYAzureFunctionResult& azureResult) {
}

void UYPlayerControllerDebugComponent::OnPlayfabUserDataReceived(const FYAzureFunctionResult& azureResult) {
}

bool UYPlayerControllerDebugComponent::GetControllerDebugEvent(UObject* WorldContextObject, EYDebugEventType EventType, int32 Index, FString& outEventString) {
    return false;
}

void UYPlayerControllerDebugComponent::ClientShardState_Implementation(const TArray<FString>& Data) {
}

void UYPlayerControllerDebugComponent::ClientSendInitializationState_Implementation(EYDebugServerRetrievalType State, const FString& Data) {
}

void UYPlayerControllerDebugComponent::ClientGetDebugNetworkSettings_Implementation(FYSessionDebugInformation networkInformation) {
}


