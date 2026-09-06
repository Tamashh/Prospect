#include "YInventoryContextUtils.h"

UYInventoryContextUtils::UYInventoryContextUtils() {
}

bool UYInventoryContextUtils::UpdateInventoryItems(AActor* relevantActorContext, const FYMatchInventoryUpdate& dataUpdate) {
    return false;
}

void UYInventoryContextUtils::SplitItemAmount(AActor* actorContext, const FYInventoryItem& itemToDrop, int32 amountToDrop, EYInventoryPlace inventoryToDrop) {
}

bool UYInventoryContextUtils::RemoveItemFromActorInventory(AActor* OwningPlayer, const FYInventoryItem& itemToRemove, const int32 amountToRemove) {
    return false;
}

bool UYInventoryContextUtils::RemoveItemFromActiveSet(AActor* actorContext, const FYInventoryItem& itemToRemove) {
    return false;
}

bool UYInventoryContextUtils::RemoveItemById(UObject* playerContext, int32 TargetId, const FYInventoryItem& itemToRemove, const int32 amountToRemove) {
    return false;
}

void UYInventoryContextUtils::RemoveAttachmentFromWeapon(AActor* actorContext, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment) {
}

void UYInventoryContextUtils::MoveStashItemToEmptySetSlot(AActor* actorContext, const FYInventoryItem& stashItem, const EYPlayerSetType Slot) {
}

void UYInventoryContextUtils::MoveItemsById(AActor* playerContext, const int32 TargetId, const int32 originId, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking) {
}

void UYInventoryContextUtils::MoveItemInOwningPlayerInventory(AActor* OwningPlayer, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking) {
}

void UYInventoryContextUtils::MoveItemByContext(AActor* playerContext, AActor* targetContext, AActor* originContext, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking) {
}

bool UYInventoryContextUtils::HasItemsInInventoryByComponentId(AActor* WorldContext, int32 componentId) {
    return false;
}

bool UYInventoryContextUtils::HasItemAtNonGrowableSetType(AActor* actorContext, EYPlayerSetType setType) {
    return false;
}

int32 UYInventoryContextUtils::GetMaxStashItemAmountByContext(AActor* actorContext) {
    return 0;
}

int32 UYInventoryContextUtils::GetMaxSafeWeightByContext(AActor* actorContext) {
    return 0;
}

int32 UYInventoryContextUtils::GetMaxLootContainerWeightForComponentId(AActor* actorContext, int32 componentId) {
    return 0;
}

int32 UYInventoryContextUtils::GetMaxLoadoutWeightByContext(AActor* actorContext) {
    return 0;
}

int32 UYInventoryContextUtils::GetMaxBagWeightForComponentId(AActor* actorContext, int32 componentId) {
    return 0;
}

int32 UYInventoryContextUtils::GetMaxBagWeightByContext(AActor* actorContext) {
    return 0;
}

AYLootContainer* UYInventoryContextUtils::GetLootContainerForComponentId(AActor* actorContext, int32 componentId) {
    return NULL;
}

float UYInventoryContextUtils::GetLoadoutWeightPercentageByContext(AActor* actorContext) {
    return 0.0f;
}

float UYInventoryContextUtils::GetLoadoutWeightPercentageByAbsolute(const int32 maxBagWeight, const int32 maxSafeWeight, AActor* actorContext) {
    return 0.0f;
}

bool UYInventoryContextUtils::GetItemAtNonGrowableSetTypeForComponent(const UYStateInventoryComponent* stateInventoryComponent, EYPlayerSetType setType, FYInventoryItem& OutItem) {
    return false;
}

bool UYInventoryContextUtils::GetItemAtNonGrowableSetType(AActor* actorContext, EYPlayerSetType setType, FYInventoryItem& OutItem) {
    return false;
}

TArray<FYInventoryItem> UYInventoryContextUtils::GetInventoryItemsInLoadoutByContext(AActor* relevantActorContext) {
    return TArray<FYInventoryItem>();
}

int32 UYInventoryContextUtils::GetCurrentStashItemAmountByContext(AActor* actorContext) {
    return 0;
}

float UYInventoryContextUtils::GetCurrentSafeWeightForComponentId(AActor* WorldContext, int32 componentId) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentSafeWeightByContext(AActor* actorContext) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentLootContainerWeightForComponenentId(AActor* actorContext, int32 componentId) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentLoadoutWeightByContext(AActor* actorContext) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentInventoryValueForComponentId(AActor* WorldContext, int32 componentId) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentInventoryValueByContext(AActor* actorContext) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentBagWeightForComponentId(AActor* WorldContext, int32 componentId) {
    return 0.0f;
}

float UYInventoryContextUtils::GetCurrentBagWeightByContext(AActor* actorContext) {
    return 0.0f;
}

int32 UYInventoryContextUtils::FindTotalItemAmountFromStashAndLoadout(AActor* actorContext, FName baseItemId, const FString& contextString) {
    return 0;
}

int32 UYInventoryContextUtils::FindTotalItemAmountFromActor(AActor* actorContext, FName baseItemId, const FString& contextString) {
    return 0;
}

UYStateInventoryComponent* UYInventoryContextUtils::FindStateInventoryComponentWithItemId(const UObject* WorldContext, const FString& ItemId) {
    return NULL;
}

UYStateInventoryComponent* UYInventoryContextUtils::FindStateInventoryComponentWithItem(const UObject* WorldContext, const FYInventoryItem& itemToFind) {
    return NULL;
}

bool UYInventoryContextUtils::FindStashItemFromActor(AActor* actorCtx, const FString& ItemId, const FString& ctxStr, FYInventoryItem& outInventoryItem) {
    return false;
}

bool UYInventoryContextUtils::FindItemAnywhereWithItemId(const UObject* WorldContext, const FString& ItemId, FYInventoryItem& OutItem, EYPlayerSetType& outType) {
    return false;
}

bool UYInventoryContextUtils::FindInventoryItemSetTypeFromStateInventory(const UYStateInventoryComponent* stateInventory, const FString& ItemId, const FString& contextString, EYPlayerSetType& setType) {
    return false;
}

bool UYInventoryContextUtils::FindInventoryItemSetTypeFromActor(AActor* actorContext, const FString& ItemId, const FString& contextString, EYPlayerSetType& setType) {
    return false;
}

bool UYInventoryContextUtils::FindInventoryItemFromActor(AActor* actorCtx, const FString& ItemId, const FString& ctxStr, FYInventoryItem& outInventoryItem) {
    return false;
}

void UYInventoryContextUtils::EquipItemByContext(AActor* actorContext, const FYInventoryItem& itemToEquip, EYPlayerSetType equippedSlot) {
}

FYInventoryItem UYInventoryContextUtils::CreateItem(AActor* OwningPlayer, const FDataTableRowHandle& itemRowHandle, EYItemOriginType Origin, int32 Amount) {
    return FYInventoryItem{};
}

bool UYInventoryContextUtils::CreateAndAddItemToPlayer(AActor* OwningPlayer, FDataTableRowHandle itemRowHandle, EYItemOriginType Origin, int32 Amount, FYInventoryItem& OutItem, int32& outRemainingItemAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInStash(AActor* actorContext, const FYInventoryItem& inItem, const bool ignoreStacking, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInSafeForComponentId(AActor* actorContext, int32 componentId, const FYInventoryItem& inItem, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInSafe(AActor* actorContext, const FYInventoryItem& inItem, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInLootContainerForComponentId(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInBagOrSafe(AActor* actorContext, const FYInventoryItem& inItem) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInBagForComponentId(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInBag(AActor* actorContext, const FYInventoryItem& inItem, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanStoreItemInAlienForgeLootContainer(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::CanMoveItem(AActor* actorContext, const FYInventoryItem& Item, int32 amountToMove, int32 originInventoryComponentId, int32 targetInventoryComponentId, EYPlayerSetType targetSetType, const bool ignoreStacking, int32& outAllowedAmount, FString& resultCode) {
    return false;
}

bool UYInventoryContextUtils::CanMoveBag(AActor* actorContext, const FYInventoryItem& bagItem, int32 originInventoryComponentId, int32 targetInventoryComponentId, EYPlayerSetType targetSetType) {
    return false;
}

bool UYInventoryContextUtils::CanAddItemToActor(AActor* OwningPlayer, const FYInventoryItem& itemToAdd, int32& outAllowedAmount) {
    return false;
}

bool UYInventoryContextUtils::AddItemToActor(AActor* OwningPlayer, const FYInventoryItem& itemToAdd, int32& remainingItemAmount) {
    return false;
}

bool UYInventoryContextUtils::AddItemById(UObject* playerContext, int32 TargetId, const FYInventoryItem& itemToAdd, int32 amountToAdd, EYPlayerSetType newSetType, bool ignoreStacking) {
    return false;
}

void UYInventoryContextUtils::AddAttachmentToWeapon(AActor* actorContext, const FString& weaponItemId, const FString& modItemId) {
}


