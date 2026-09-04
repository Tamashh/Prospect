#include "YWidgetProvider_WeaponShops.h"

UYWidgetProvider_WeaponShops::UYWidgetProvider_WeaponShops() {
}

void UYWidgetProvider_WeaponShops::UpdateCraftingTimer(float remainingSeconds) {
}

void UYWidgetProvider_WeaponShops::StartItemCrafting(const FYShopItem& shopItem) {
}

void UYWidgetProvider_WeaponShops::SkipItemCrafting(bool useOptionalCosts) {
}

void UYWidgetProvider_WeaponShops::PurchaseItem(const FYShopItem& shopItem, int32 repeatTimes) {
}

void UYWidgetProvider_WeaponShops::OnShopSet(const FName& shopId) {
}

void UYWidgetProvider_WeaponShops::OnCurrenciesUpdated() {
}

void UYWidgetProvider_WeaponShops::HandleStashChange(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYWidgetProvider_WeaponShops::HandleItemPurchased(const EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus) {
}

void UYWidgetProvider_WeaponShops::HandleItemCrafted(bool craftingFailed) {
}

void UYWidgetProvider_WeaponShops::HandleCraftingStarted(EYStartItemCraftingResultStatus startItemCraftingStatus) {
}

void UYWidgetProvider_WeaponShops::GetItemDataToCreateBlueprintItems(TArray<FYShopBlueprintData>& itemUiData, bool sortOnFactionLevel, bool sortAlphabetically) {
}

void UYWidgetProvider_WeaponShops::DebugGetAllItemsDataToCreateBlueprintItems(TArray<FDataTableRowHandle>& outRowHandles) {
}

void UYWidgetProvider_WeaponShops::BroadcastCraftedItemSuccess(const FYCraftedBlueprintInfo& craftedBlueprintInfo) {
}


