#include "YWidget_ContractsMenu.h"

UYWidget_ContractsMenu::UYWidget_ContractsMenu() {
    this->m_faction = EYFaction::Invalid;
    this->m_useLatentWidgetCreation = true;
}

void UYWidget_ContractsMenu::UpdateContractsMenuAfterClaimFail(const FString& contractId, const EYClaimContractRewardsStatus& Status) {
}

void UYWidget_ContractsMenu::SetupBoardFaction(const FName& factionId) {
}

void UYWidget_ContractsMenu::ReplaceContract(const FString& newContractId, bool contractLockedDueToLowFactionReputation) {
}

void UYWidget_ContractsMenu::RefreshContractsBoardMenu() {
}

void UYWidget_ContractsMenu::HandleContractsStatusChanged(const FYActiveContractsUIData& activeContractsUIData) {
}











