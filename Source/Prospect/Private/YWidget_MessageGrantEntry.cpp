#include "YWidget_MessageGrantEntry.h"

UYWidget_MessageGrantEntry::UYWidget_MessageGrantEntry() {
    this->m_claimButton = NULL;
    this->m_claimButtonText = NULL;
    this->m_claimErrorText = NULL;
}

void UYWidget_MessageGrantEntry::OnGrantsUpdated(const TArray<FYGrant>& grants) {
}

void UYWidget_MessageGrantEntry::HandleGrantsClaimed(const TArray<FYGrant>& grantIds) {
}

void UYWidget_MessageGrantEntry::HandleGrantClaimFailed(const FYGrant& grantId) {
}

void UYWidget_MessageGrantEntry::HandleClaimButtonClicked() {
}




