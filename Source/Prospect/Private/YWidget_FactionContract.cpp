#include "YWidget_FactionContract.h"

UYWidget_FactionContract::UYWidget_FactionContract() {
    this->m_showEndOfChainRewards = false;
    this->m_currentContractStatus = EYContractStatus::Invalid;
}

void UYWidget_FactionContract::TryToCancelActiveContract() {
}

void UYWidget_FactionContract::SendBackendReqToClaimCompletedActiveContractRewards() {
}

void UYWidget_FactionContract::SendBackendReqToCancelActiveContract() {
}

void UYWidget_FactionContract::SendBackendReqToActivateContract(const FYContractRow& contractConfigData) {
}

void UYWidget_FactionContract::OnDeclineActiveContract() {
}

void UYWidget_FactionContract::OnAcceptedCancelActiveContract() {
}

EYContractStatus UYWidget_FactionContract::GetContractStatus() const {
    return EYContractStatus::Invalid;
}

void UYWidget_FactionContract::FillContractWithData(const FYContractUiData& contractUiData, const FString& callerContext) {
}





