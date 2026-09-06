#include "YItemFunctionsLibrary.h"

UYItemFunctionsLibrary::UYItemFunctionsLibrary() {
}

FText UYItemFunctionsLibrary::VanityItemToText(EYVanityType vanityType, bool getSingular) {
    return FText::GetEmpty();
}

bool UYItemFunctionsLibrary::TryCreateItemRowHandlePointerBase(const UObject* wrldCtx, const FString& baseItemId, const FString& callerContext, FYItemDataTableRowBase& itemDataTableRowBaseOut, bool noLogError) {
    return false;
}

FText UYItemFunctionsLibrary::ModTypeToText(EYModificationSlotType modType, FDataTableRowHandle itemRowHandleContext) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::ModkitToText(const FName& modkitText) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::MiscItemToText(EYMiscellaneousType miscType, bool getSingular) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::ItemTypeToText(EYItemType ItemType, bool getSingular) {
    return FText::GetEmpty();
}

bool UYItemFunctionsLibrary::IsItemTool(const FDataTableRowHandle& rowHandle) {
    return false;
}

bool UYItemFunctionsLibrary::IsItemStackable(const FDataTableRowHandle& itemRowHandle) {
    return false;
}

bool UYItemFunctionsLibrary::IsItemRowHandle(const FDataTableRowHandle& rowHandle) {
    return false;
}

bool UYItemFunctionsLibrary::IsItemReadyToBeReleased(const UObject* WorldContext, const FName& ItemId, const FString& contextString, FName relatedableId) {
    return false;
}

bool UYItemFunctionsLibrary::IsItemOwned(UObject* WorldContext, const FName& ItemId, const FString& contextString, FName relatedableId) {
    return false;
}

FString UYItemFunctionsLibrary::GetWeaponAssociatedFactionNameFromBPRowHandle(const FDataTableRowHandle& craftingBlueprintRowHandle) {
    return TEXT("");
}

TArray<FYCollectibleLootBucket> UYItemFunctionsLibrary::GetSortedLootBuckets(const TArray<FYCollectibleLootBucket>& unsortedLootBuckets) {
    return TArray<FYCollectibleLootBucket>();
}

bool UYItemFunctionsLibrary::GetSkippingPriceForSpecificItem(UObject* objectContext, const FString& contextStr, const FYShopItem& shopItem, FYCostEntryRow& outCost, FYCostEntryRow& outOptionalCost) {
    return false;
}

EYPickupType UYItemFunctionsLibrary::GetPickupTypeFromItemType(const EYItemType ItemType) {
    return EYPickupType::None;
}

EYPickupType UYItemFunctionsLibrary::GetPickupTypeFromItemRowHandle(const FDataTableRowHandle& inItemRowHandle) {
    return EYPickupType::None;
}

FText UYItemFunctionsLibrary::GetNameByRowHandle(const UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::GetNameByID(UObject* WorldContext, const FString& ItemId, const FString& contextString) {
    return FText::GetEmpty();
}

EYMiscellaneousType UYItemFunctionsLibrary::GetMiscClassByID(const UObject* WorldContext, const FName& inMatchID) {
    return EYMiscellaneousType::Invalid;
}

TArray<FYMaterialRow> UYItemFunctionsLibrary::GetMaterialsList(UObject* wrldCtx) {
    return TArray<FYMaterialRow>();
}

FText UYItemFunctionsLibrary::GetLoreText(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString) {
    return FText::GetEmpty();
}

float UYItemFunctionsLibrary::GetItemWeightFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle) {
    return 0.0f;
}

EYItemType UYItemFunctionsLibrary::GetItemTypeFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle) {
    return EYItemType::None;
}

EYItemType UYItemFunctionsLibrary::GetItemType(const FYInventoryItem& inventoryItem) {
    return EYItemType::None;
}

bool UYItemFunctionsLibrary::GetItemTagsFromItemRowHandle(const FDataTableRowHandle& rowHandle, FGameplayTagContainer& GameplayTagContainer, const FString& contextString) {
    return false;
}

FYItemSetUIData UYItemFunctionsLibrary::GetItemSetUIData(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& callerContext) {
    return FYItemSetUIData{};
}

EYItemRarityType UYItemFunctionsLibrary::GetItemRarityFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle) {
    return EYItemRarityType::Invalid;
}

FString UYItemFunctionsLibrary::GetInventoryItemDebugString(const FYInventoryItem& inventoryItem) {
    return TEXT("");
}

FString UYItemFunctionsLibrary::GetIDFromItem(const FYInventoryItem& inventoryItem) {
    return TEXT("");
}

TSoftObjectPtr<UTexture2D> UYItemFunctionsLibrary::GetIconByRowHandle(UObject* WorldContext, const FString& callerContext, const FDataTableRowHandle& matchRowHandle, bool useLargeIcon, int32 materialVariationIndex) {
    return NULL;
}

TSoftObjectPtr<UTexture2D> UYItemFunctionsLibrary::GetIconByID(UObject* WorldContext, const FString& ItemId) {
    return NULL;
}

void UYItemFunctionsLibrary::GetGameplayTagData(UObject* WorldContext, const FGameplayTagContainer& TagContainer, TArray<FYGameplayTagMappingRow>& gameplayTagData) {
}

FText UYItemFunctionsLibrary::GetFlavorText(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString) {
    return FText::GetEmpty();
}

EYDeviceClass UYItemFunctionsLibrary::GetDeviceClassFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle) {
    return EYDeviceClass::None;
}

EYDeviceClass UYItemFunctionsLibrary::GetDeviceClassByID(const UObject* WorldContext, const FName& inMatchID) {
    return EYDeviceClass::None;
}

EYDeviceCategory UYItemFunctionsLibrary::GetDeviceCategory(UObject* wrldCtx, const FDataTableRowHandle& itemRowHandle, const FString& callerContext) {
    return EYDeviceCategory::AssaultRifle;
}

FText UYItemFunctionsLibrary::GetDescription(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString) {
    return FText::GetEmpty();
}

TArray<FYCurrencyRow> UYItemFunctionsLibrary::GetCurrenciesList(UObject* wrldCtx) {
    return TArray<FYCurrencyRow>();
}

TArray<FYCostEntryRow> UYItemFunctionsLibrary::GetCraftingPriceForSpecificItem(const FString& callerContext, const FYShopItem& shopItem) {
    return TArray<FYCostEntryRow>();
}

int32 UYItemFunctionsLibrary::GetCraftingMinutesForSpecificItem(const FString& contextStr, const FYShopItem& shopItem) {
    return 0;
}

int32 UYItemFunctionsLibrary::GetCraftingMaterialsAmountByName(UObject* WorldContext, const FString& materialName) {
    return 0;
}

FText UYItemFunctionsLibrary::GenericClaimableOriginToText(EYGenericClaimableOrigin Origin) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::GenericClaimableDataResponseTypeToText(EYClaimGenericClaimableDataResponseType responseType) {
    return FText::GetEmpty();
}

bool UYItemFunctionsLibrary::FindVisualAcquisitionDataFromItem(const UObject* WorldContext, FName ID, FYItemVisualAcquisitionData& outData) {
    return false;
}

EYVanityType UYItemFunctionsLibrary::FindVanityTypeByID(const UObject* WorldContext, const FName& inMatchID, bool noLogError) {
    return EYVanityType::None;
}

EYItemType UYItemFunctionsLibrary::FindItemTypeByRow(const UObject* WorldContext, const FDataTableRowHandle& rowHandle, const FString& contextString) {
    return EYItemType::None;
}

EYItemType UYItemFunctionsLibrary::FindItemTypeByID(const UObject* WorldContext, const FName& inMatchID, const FString& contextString) {
    return EYItemType::None;
}

EYCustomizationCategory UYItemFunctionsLibrary::FindCustomizationCategoryByRowHandle(const UObject* WorldContext, const FDataTableRowHandle& inMatchID) {
    return EYCustomizationCategory::Invalid;
}

EYCustomizationCategory UYItemFunctionsLibrary::FindCustomizationCategoryByID(const UObject* WorldContext, const FName& inMatchID) {
    return EYCustomizationCategory::Invalid;
}

bool UYItemFunctionsLibrary::FindCraftingBlueprintRowHandleByItemRowHandle(const UObject* WorldContext, const FDataTableRowHandle& inMatchRowHandle, FDataTableRowHandle& outCraftingBlueprintRowHandle) {
    return false;
}

bool UYItemFunctionsLibrary::FindCraftingBlueprintRowHandleByBaseID(const UObject* WorldContext, const FString& ItemId, FDataTableRowHandle& outCraftingBlueprintRowHandle) {
    return false;
}

bool UYItemFunctionsLibrary::DoesItemRequireOwnership(const UObject* WorldContext, const FName& ItemId, const FString& contextString) {
    return false;
}

bool UYItemFunctionsLibrary::DoesItemHaveTag(const FYInventoryItem& inventoryItem, const FGameplayTag& Tag) {
    return false;
}

bool UYItemFunctionsLibrary::DoesItemHaveNotDroppableTag(const FYInventoryItem& inventoryItem) {
    return false;
}

FText UYItemFunctionsLibrary::DeviceClassToText(EYDeviceClass deviceClass, bool getSingular) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::DeviceCategoryToText(EYDeviceCategory deviceCategory) {
    return FText::GetEmpty();
}

FText UYItemFunctionsLibrary::CustomizationCategoryToText(EYCustomizationCategory customizationCategory, bool getSingular) {
    return FText::GetEmpty();
}

bool UYItemFunctionsLibrary::CreateItemRowHandle(const UObject* wrldCtx, const FString& baseItemId, FDataTableRowHandle& outRowHandle, const FString& callerContext, bool noLogError) {
    return false;
}

bool UYItemFunctionsLibrary::CreateCraftingBlueprintRowHandleByBlueprintId(const UObject* WorldContext, const FName& blueprintId, FDataTableRowHandle& outCraftingBlueprintRowHandle) {
    return false;
}

void UYItemFunctionsLibrary::CompatibleItemIDsForModToString(UObject* WorldContext, const FYItemDataTableRowBase& modRow, FString& outString, EYItemType& outItemType) {
}

void UYItemFunctionsLibrary::CompatibleDeviceClassesForModToString(const FYItemDataTableRowBase& modRow, FString& outString) {
}

void UYItemFunctionsLibrary::CompatibleDeviceCategoriesForModToString(const FYItemDataTableRowBase& modRow, FString& outString) {
}

void UYItemFunctionsLibrary::CompatibleAmmoTypesForModToString(const FYItemDataTableRowBase& modRow, FString& outString) {
}

void UYItemFunctionsLibrary::CompatibilityListForModToString(UObject* WorldContext, const FYItemDataTableRowBase& modRow, FString& outString, bool excludeItemTypes, bool excludeDeviceClasses, bool excludeDeviceCategories, bool excludeAmmoTypes) {
}

FText UYItemFunctionsLibrary::AmmoTypeToText(EYAmmoType ammoType) {
    return FText::GetEmpty();
}


