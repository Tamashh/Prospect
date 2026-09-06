#include "YOnboardingPlayerDataComponent.h"
#include "Net/UnrealNetwork.h"

UYOnboardingPlayerDataComponent::UYOnboardingPlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_activeOnboardingInstance = NULL;
}

void UYOnboardingPlayerDataComponent::OnSceneClosed(const FDataTableRowHandle closedSceneHandle) {
}

void UYOnboardingPlayerDataComponent::OnOnboardingStateUpdated(const FYMissionReplicatedStateData& missionReplicatedStateData) {
}

void UYOnboardingPlayerDataComponent::OnAllRewardsWidgetsClosed() {
}

bool UYOnboardingPlayerDataComponent::IsAnyMissionActiveAfterInitialization() const {
    return false;
}

void UYOnboardingPlayerDataComponent::InitializationMissionInstanceComponent_Implementation(const FDataTableRowHandle& rowHandle, const FYMissionRuntimeInitializationData& runtimeData) {
}
bool UYOnboardingPlayerDataComponent::InitializationMissionInstanceComponent_Validate(const FDataTableRowHandle& rowHandle, const FYMissionRuntimeInitializationData& runtimeData) {
    return true;
}

bool UYOnboardingPlayerDataComponent::HasReceivedInitializationFromBackend() const {
    return false;
}

FYMissionRuntimeData UYOnboardingPlayerDataComponent::GetMissionRuntimeData() const {
    return FYMissionRuntimeData{};
}

void UYOnboardingPlayerDataComponent::GetMissionRow(const FString& callerContext, FYMissionDataTableRow& rowHandle) const {
}

TArray<FString> UYOnboardingPlayerDataComponent::GetCompletedMissionsIds() const {
    return TArray<FString>();
}

void UYOnboardingPlayerDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYOnboardingPlayerDataComponent, m_activeOnboardingInstance);
}


