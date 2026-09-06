#include "YControllerContractsBoardsDataComponent.h"

UYControllerContractsBoardsDataComponent::UYControllerContractsBoardsDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_minutesUntilRefresh = 0;
}

void UYControllerContractsBoardsDataComponent::UpdateCachedBoardDataLockedState(const FYPlayerFactionProgressionUIData& playerFactionProgressionUIData) {
}

void UYControllerContractsBoardsDataComponent::TryRequestActiveObjectivesAndBoardsData(bool forceRequest) const {
}

void UYControllerContractsBoardsDataComponent::RequestClaimCompletedActiveContract(const FString& contractId) const {
}

void UYControllerContractsBoardsDataComponent::RequestActivateContract(const FString& contractId) const {
}

void UYControllerContractsBoardsDataComponent::RefreshTimerDisplay() {
}

void UYControllerContractsBoardsDataComponent::OnBoardRefreshTimerElapsed() const {
}

bool UYControllerContractsBoardsDataComponent::HasContractPendingBackendReply(const FString& contractId) const {
    return false;
}

void UYControllerContractsBoardsDataComponent::HandlePlayerContractsReceived(const FYPlayerContractsInitData& playerContractsInitData) {
}

void UYControllerContractsBoardsDataComponent::HandlePlayerContractClaimFail(const FString& UserId, const FString& contractId, EYClaimContractRewardsStatus contractRewardsStatus) {
}

void UYControllerContractsBoardsDataComponent::HandlePlayerContractClaimed(const FYClaimedContractBackendData& claimedContractBackendData) {
}

bool UYControllerContractsBoardsDataComponent::GetIfBoardsDataHasAlreadyBeenInitialized() const {
    return false;
}

UYControllerContractsBoardsDataComponent* UYControllerContractsBoardsDataComponent::FindContractsBoardsDataComponentChecked(AActor* actorContext) {
    return NULL;
}

UYControllerContractsBoardsDataComponent* UYControllerContractsBoardsDataComponent::FindContractsBoardsDataComponent(AActor* actorContext) {
    return NULL;
}

void UYControllerContractsBoardsDataComponent::EnableContractInteractionAgain(const FString& callerUserId, bool isFail, bool anActiveContractHasBeenCancelled, const FYContractStatusChangeInfo& Info) {
}


