#include "YInventoryManager.h"

UYInventoryManager::UYInventoryManager() {
}

void UYInventoryManager::RepairItem(UObject* objCtx, const FString& customItemID) {
}

void UYInventoryManager::ProcessPlayerSet(const FString& UserId, const FString& contextString) {
}

void UYInventoryManager::OnVictimCompensationPayoutPackage(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage) {
}

void UYInventoryManager::OnTechTreeNodesAvailable(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds) {
}

void UYInventoryManager::OnSellItemsClientResult(const FYSellItemsClientResult& scrapItems) {
}

void UYInventoryManager::OnPlayerSetsProcessed(const FString& UserId, const TArray<FYPlayerSetItemsEntry>& Sets) {
}

void UYInventoryManager::OnPlayerInventoriesLimitsAvailable(const TArray<FYPlayerInventoryLimitResultData>& playerInventoriesLimits) {
}

void UYInventoryManager::OnPlayerInventoriesAvailable(const TArray<FYInventory>& inventoryEntries) {
}

void UYInventoryManager::OnItemsRemoved(const FString& UserId, const TArray<FString>& itemsToRemove) {
}

void UYInventoryManager::OnItemRepairedResult(const FString& UserId, const TArray<FYCustomItemInfo>& infos, EYRepairItemResult Result) {
}

void UYInventoryManager::OnCustomItemUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items) {
}

void UYInventoryManager::OnCustomItemsUpdated(const FString& UserId, const TArray<FYInstanceUpdateAmount>& itemsUpdatedAmount) {
}

void UYInventoryManager::OnCustomInventoryAvailable(const FString& UserId, const TArray<FYCustomItemInfo>& customItems) {
}

void UYInventoryManager::OnCraftedItemReceived(const FString& UserId, const TArray<FYCustomItemInfo>& infos) {
}

void UYInventoryManager::OnClaimInsurancePayoutPackage(const FYInsurancePayoutPackage& Package, int32 Index) {
}


