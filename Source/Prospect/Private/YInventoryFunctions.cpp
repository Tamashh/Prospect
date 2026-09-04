#include "YInventoryFunctions.h"

UYInventoryFunctions::UYInventoryFunctions() {
}

void UYInventoryFunctions::UnequipItem(FYPlayerDataSet& inOutSet, const FYInventoryItem& itemToUnEquip) {
}

bool UYInventoryFunctions::ModifyDurability(AActor* actorContext, FDataTableRowHandle itemRowHandle, int32 durabilityDelta, bool consumeItemOnNoDurability) {
    return false;
}

bool UYInventoryFunctions::IsWeaponEquipped(AActor* actorCtx) {
    return false;
}

bool UYInventoryFunctions::IsSplittable(const FYInventoryItem& inInventoryItem) {
    return false;
}

bool UYInventoryFunctions::IsItemTypeInInventory(AActor* actorContext, FDataTableRowHandle itemRowHandle) {
    return false;
}

bool UYInventoryFunctions::IsItemInInventory(const FYPlayerInventory& Inventory, const FYInventoryItem& itemToCheck) {
    return false;
}

bool UYInventoryFunctions::IsItemEquipped(const FYPlayerDataSet& playerSet, const FYInventoryItem& itemToCheck) {
    return false;
}

bool UYInventoryFunctions::IsDurabilityHigherThanThreshold(AActor* actorContext, FDataTableRowHandle itemRowHandle, int32 durabilityThreshold) {
    return false;
}

bool UYInventoryFunctions::IsCompatibleAmmoEquipped(AActor* actorCtx) {
    return false;
}

bool UYInventoryFunctions::HasRoomInStashByContext(AActor* actorContext) {
    return false;
}

void UYInventoryFunctions::GetItemScrappingReturnValues(const FYInventoryItem& Item, int32& outCurrency, int32& outReputation) {
}

int32 UYInventoryFunctions::GetItemRepairCostTotal(const FYInventoryItem& inventoryItem) {
    return 0;
}

int32 UYInventoryFunctions::GetItemRepairCostModifierBroken(const FYInventoryItem& inventoryItem) {
    return 0;
}

int32 UYInventoryFunctions::GetItemRepairCostMaxDurability(const FYInventoryItem& inventoryItem) {
    return 0;
}

int32 UYInventoryFunctions::GetItemRepairCostBase(const FYInventoryItem& inventoryItem) {
    return 0;
}

EYPlayerSetTypeSimplified UYInventoryFunctions::GetItemPositionInInventory(const FYInventoryItem& inventoryItem, APlayerState* owningPlayerState) {
    return EYPlayerSetTypeSimplified::Invalid;
}

int32 UYInventoryFunctions::GetItemMaxStackSize(const FYInventoryItem& inventoryItem) {
    return 0;
}

int32 UYInventoryFunctions::GetItemMaxDurability(const FYInventoryItem& inventoryItem) {
    return 0;
}

void UYInventoryFunctions::GetFilteredInventoryAndSet(const FYPlayerInventory& Inventory, const FYPlayerDataSet& set, const TArray<EYPlayerSetType>& Types, FYPlayerInventory& outFilteredInventory, FYPlayerDataSet& outFilteredSet, bool invert) {
}

TArray<FYInventoryItem> UYInventoryFunctions::GetDamagedItemsOfType(UObject* objCtx, EYItemType ItemType) {
    return TArray<FYInventoryItem>();
}

TArray<FYInventoryItem> UYInventoryFunctions::GetDamagedItems(UObject* objCtx, TArray<EYItemType> excludedItemTypes) {
    return TArray<FYInventoryItem>();
}

int32 UYInventoryFunctions::GetAmountOfItemsInPlayerInventoryByItemType(AActor* actorContext, const FYPlayerInventory& playerInventory, EYItemType ItemType) {
    return 0;
}

int32 UYInventoryFunctions::GetAmountOfItemsInPlayerDataSetByItemType(AActor* actorContext, const FYPlayerDataSet& playerSet, EYItemType ItemType) {
    return 0;
}

UYStateInventoryComponent* UYInventoryFunctions::FindStateInventoryComponentWithId(AActor* actorContext, int32 componentId, const FString& callerContext) {
    return NULL;
}

UYBackendInventoryModel* UYInventoryFunctions::FindInventoryModel(const UObject* objectContext, const FString& UserId) {
    return NULL;
}

UYInventoryManager* UYInventoryFunctions::FindInventoryManager(const UObject* objectContext) {
    return NULL;
}

bool UYInventoryFunctions::FindInventoryItemSlotFromActor(AActor* actorContext, const FYInventoryItem& Item, EYPlayerSetType& outInventoryItemSlot) {
    return false;
}

bool UYInventoryFunctions::FindInventoryItemsFromSlots(AActor* actorContext, TArray<EYPlayerSetType> Slots, TArray<FYInventoryItem>& outItems) {
    return false;
}

bool UYInventoryFunctions::FindInventoryItemsByItemType(AActor* actorContext, EYItemType desiredItemType, TArray<FYInventoryItem>& outItems) {
    return false;
}

bool UYInventoryFunctions::FindInventoryItemFromComponentWithId(AActor* actorContext, int32 componentId, const FString& ItemId, const FString& callerContext, FYInventoryItem& outInventoryItem) {
    return false;
}

bool UYInventoryFunctions::FindFirstStashItemByRowId(AActor* actorCtx, const FName& rowId, FYInventoryItem& outInventoryItem) {
    return false;
}

bool UYInventoryFunctions::FindFirstInventoryItemByRowId(AActor* actorCtx, const FName& rowId, FYInventoryItem& outInventoryItem) {
    return false;
}

int32 UYInventoryFunctions::FindAmountOfToolSlots() {
    return 0;
}

bool UYInventoryFunctions::FindAmountOfItemGivenRowId(AActor* actorCtx, const FString& rowId, int32& Amount) {
    return false;
}

bool UYInventoryFunctions::FindAllItemsGivenRowId(AActor* actorCtx, const FString& rowId, TArray<FYInventoryItem>& outItems) {
    return false;
}

bool UYInventoryFunctions::FindAllInventoryItemsByItemType(AActor* actorContext, EYItemType desiredItemType, TArray<FYInventoryItem>& outItems) {
    return false;
}

void UYInventoryFunctions::EquipItem(FYPlayerDataSet& inOutSet, const FYInventoryItem& itemToEquip, EYPlayerSetType equippedSlot) {
}

bool UYInventoryFunctions::DestroyItemInMatchInventoryByContext(AActor* actorContext, const FYInventoryItem& itemToRemove) {
    return false;
}

bool UYInventoryFunctions::DestroyItemInMatchInventory(UYStateInventoryComponent* inventoryComponent, const FYInventoryItem& itemToRemove) {
    return false;
}

void UYInventoryFunctions::ConsumeItemOfTypeInInventory(AActor* actorContext, const FDataTableRowHandle& itemRowHandle) {
}

float UYInventoryFunctions::CalculateWeightForItems(const TArray<FYInventoryItem>& inInventoryItems, const bool isInBag, AActor* contextObject) {
    return 0.0f;
}

float UYInventoryFunctions::CalculateWeightForInventory(const FYPlayerInventory& Inventory, const bool isInBag, AActor* contextObject) {
    return 0.0f;
}

float UYInventoryFunctions::CalculateStackWeight(const FYInventoryItem& StackedItem, bool isInBag, AActor* contextObject) {
    return 0.0f;
}

bool UYInventoryFunctions::CalculateInventoryDiff(const FYPlayerInventory& oldInventory, const FYPlayerInventory& newInventory, TArray<FYInventoryItem>& outItemsAdded, TArray<FYInventoryItem>& outItemsUpdated, TArray<FYInventoryItem>& outItemsRemoved) {
    return false;
}

bool UYInventoryFunctions::CalculateAreInventoriesEqualAndLogResult(const FYPlayerInventory& first, const FYPlayerInventory& second) {
    return false;
}

bool UYInventoryFunctions::CalculateAreInventoriesEqual(const FYPlayerInventory& first, const FYPlayerInventory& second) {
    return false;
}


