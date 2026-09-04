#include "YControllerSessionComponent.h"
#include "Net/UnrealNetwork.h"

UYControllerSessionComponent::UYControllerSessionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_initiatedTravel = false;
}

void UYControllerSessionComponent::UpdateCharacterSelectionUserDataFlag(bool Add) {
}

void UYControllerSessionComponent::ShowWarningNotification() {
}

void UYControllerSessionComponent::ServerReportSessionState_Implementation() {
}

void UYControllerSessionComponent::OnPlayfabResponseSetTutorialStarted(const FYAzureFunctionResult& azureResult) {
}

void UYControllerSessionComponent::OnPlayfabResponseSetCharacterSelectionStarted(const FYAzureFunctionResult& azureResult) {
}

void UYControllerSessionComponent::OnPlayfabResponseGetTutorialStarted(const FYAzureFunctionResult& azureResult) {
}

void UYControllerSessionComponent::OnFinishedMatchResult(EYPlayerMatchFinishedResult Result) {
}

void UYControllerSessionComponent::OnFeatureTogglesReceivedCallback(const FYFeatureToggles& newFeatureToggleStats) {
}

void UYControllerSessionComponent::OnCompletedSessionState(EYSessionEventType completedType) {
}

void UYControllerSessionComponent::ClientReportSessionState_Implementation(const FString& Output) {
}

void UYControllerSessionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYControllerSessionComponent, m_instanceGuid);
}


