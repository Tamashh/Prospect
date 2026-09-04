#include "YOnboardingPlayerInstanceComponent.h"
#include "Net/UnrealNetwork.h"

UYOnboardingPlayerInstanceComponent::UYOnboardingPlayerInstanceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYOnboardingPlayerInstanceComponent::SetCompletedMissionResult(EYMissionResultType missionResultType) {
}

void UYOnboardingPlayerInstanceComponent::OnRep_MissionReplicatedStateData() {
}

void UYOnboardingPlayerInstanceComponent::NotifyMissionLineStepStarted() {
}

void UYOnboardingPlayerInstanceComponent::GoToStep(int32 step, bool bCallCompletionDelegateOfCurrentStep) {
}

FYMissionReplicatedStateData UYOnboardingPlayerInstanceComponent::GetMissionReplicatedStateData() const {
    return FYMissionReplicatedStateData{};
}

int32 UYOnboardingPlayerInstanceComponent::GetCurrentMetaQuestStepHandle() {
    return 0;
}

void UYOnboardingPlayerInstanceComponent::CompleteCurrentStep() {
}

void UYOnboardingPlayerInstanceComponent::ClientClearHintIndicator_Implementation() {
}




void UYOnboardingPlayerInstanceComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYOnboardingPlayerInstanceComponent, m_rowHandle);
    DOREPLIFETIME(UYOnboardingPlayerInstanceComponent, m_missionReplicatedStateData);
}


