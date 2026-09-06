#include "YControllerContractsCheatsComponent.h"

UYControllerContractsCheatsComponent::UYControllerContractsCheatsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYControllerContractsCheatsComponent::ServerRequestPlayerActiveContracts_Implementation(const FString& UserId, bool debugCall) {
}

void UYControllerContractsCheatsComponent::ServerDebugSetActiveContractProgress_Implementation(const FString& UserId, const FString& contractId, int32 objectiveIndex, int32 newProgress) {
}

void UYControllerContractsCheatsComponent::ServerDebugRemoveAllActiveContracts_Implementation(const FString& UserId) {
}

void UYControllerContractsCheatsComponent::ServerDebugGivePlayerContractRewards_Implementation(const FString& UserId, const FString& contractId) {
}

void UYControllerContractsCheatsComponent::ServerDebugActivateContractWithPredecessor_Implementation(const FString& UserId, const FString& contractId) {
}

void UYControllerContractsCheatsComponent::ServerDebugActivateContractByRowName_Implementation(const FString& UserId, const FString& contractId) {
}

UYControllerContractsCheatsComponent* UYControllerContractsCheatsComponent::FindContractsCheatComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerContractsCheatsComponent* UYControllerContractsCheatsComponent::FindContractsCheatComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerContractsCheatsComponent::DebugOnPlayerRemovedAllCompletedContracts(const FString& UserId) {
}

void UYControllerContractsCheatsComponent::DebugHandleActiveContractNewProgressReceived(const FString& UserId, const FString& activeContractId, const int32 objectiveIndex, const int32 newProgress) {
}


