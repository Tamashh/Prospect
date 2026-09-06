#include "YControllerBackendMissionComponent.h"

UYControllerBackendMissionComponent::UYControllerBackendMissionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerBackendMissionComponent::RetryInitializeMissionData() {
}

void UYControllerBackendMissionComponent::OnMissionRequestFailed() {
}

void UYControllerBackendMissionComponent::OnMissionDataUpdated(const FYMissionProgressionUpdated& Data) {
}

void UYControllerBackendMissionComponent::CompletedMissionIdsUpdated(const TArray<FString>& completedMissionIds) {
}


