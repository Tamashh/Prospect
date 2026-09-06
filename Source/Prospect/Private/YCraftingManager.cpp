#include "YCraftingManager.h"

UYCraftingManager::UYCraftingManager() {
}

void UYCraftingManager::OnWeaponShopItemPurchasedResponse(const EYPurchaseWeaponShopItemStatus Status) const {
}

void UYCraftingManager::OnItemsUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& infos) const {
}

void UYCraftingManager::OnItemRepairedResult(const FString& UserId, const TArray<FYCustomItemInfo>& infos, EYRepairItemResult Result) const {
}

void UYCraftingManager::OnItemCraftingStartedResponse(EYStartItemCraftingResultStatus Status) const {
}

void UYCraftingManager::OnItemCraftedClaimedResponse(bool craftingFailed) const {
}

void UYCraftingManager::OnItemClaimedResponseResponse(const FYCraftedBlueprintInfo& craftedBlueprintInfo) const {
}


