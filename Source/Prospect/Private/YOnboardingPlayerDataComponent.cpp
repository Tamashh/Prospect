#include "YOnboardingPlayerDataComponent.h"
#include "Net/UnrealNetwork.h"

UYOnboardingPlayerDataComponent::UYOnboardingPlayerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_activeOnboardingInstance = NULL;
}

void UYOnboardingPlayerDataComponent::OnOnboardingStateUpdated(const FYMissionReplicatedStateData& missionReplicatedStateData) {
}

void UYOnboardingPlayerDataComponent::InitializationMissionInstanceComponent_Implementation(const FDataTableRowHandle& rowHandle, const FYMissionRuntimeInitializationData& runtimeData) {
}
bool UYOnboardingPlayerDataComponent::InitializationMissionInstanceComponent_Validate(const FDataTableRowHandle& rowHandle, const FYMissionRuntimeInitializationData& runtimeData) {
    return true;
}

FYMissionRuntimeData UYOnboardingPlayerDataComponent::GetMissionRuntimeData() const {
    return FYMissionRuntimeData{};
}

void UYOnboardingPlayerDataComponent::GetMissionRow(const FString& callerContext, FYMissionDataTableRow& rowHandle) const {
}

void UYOnboardingPlayerDataComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYOnboardingPlayerDataComponent, m_activeOnboardingInstance);
}


