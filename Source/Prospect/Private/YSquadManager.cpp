#include "YSquadManager.h"

UYSquadManager::UYSquadManager() {
    this->m_maxNumOfSquadmates = 3;
    this->m_shouldSendNewInvites = true;
}

void UYSquadManager::ProcessSquadInviteQueue() {
}

void UYSquadManager::OnSocialEntriesUpdated() {
}

void UYSquadManager::OnSendSquadInviteResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSquadManager::OnRequestLeaveSquadModalConfirmed() {
}

void UYSquadManager::OnReadyForMatchResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSquadManager::OnLeaveSquadResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSquadManager::OnGetSquadMembersResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSquadManager::OnGetCompleteSquadInfoResponse(const FYAzureFunctionResult& azureResult) {
}

void UYSquadManager::OnAcceptSquadInviteResponse(const FYAzureFunctionResult& azureResult) {
}

UYSquadManager* UYSquadManager::GetInstance(const UObject* WorldContext) {
    return NULL;
}


