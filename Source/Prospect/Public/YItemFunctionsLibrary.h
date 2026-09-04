#pragma once
#include "CoreMinimal.h"
#include "EYAmmoType.h"
#include "EYCustomizationCategory.h"
#include "EYDeviceCategory.h"
#include "EYDeviceClass.h"
#include "EYItemType.h"
#include "EYMiscellaneousType.h"
#include "EYModificationSlotType.h"
#include "EYVanityType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EYItemRarityType.h"
#include "EYPickupType.h"
#include "YCollectibleLootBucket.h"
#include "YCostEntryRow.h"
#include "YCurrencyRow.h"
#include "YGameplayTagMappingRow.h"
#include "YInventoryItem.h"
#include "YItemDataTableRowBase.h"
#include "YItemSetUIData.h"
#include "YItemVisualAcquisitionData.h"
#include "YMaterialRow.h"
#include "YShopItem.h"
#include "YItemFunctionsLibrary.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class PROSPECT_API UYItemFunctionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYItemFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static FText VanityItemToText(EYVanityType vanityType, bool getSingular);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool TryCreateItemRowHandlePointerBase(const UObject* wrldCtx, const FString& baseItemId, const FString& callerContext, FYItemDataTableRowBase& itemDataTableRowBaseOut, bool noLogError);
    
    UFUNCTION(BlueprintCallable)
    static FText ModTypeToText(EYModificationSlotType modType, FDataTableRowHandle itemRowHandleContext);
    
    UFUNCTION(BlueprintCallable)
    static FText ModkitToText(const FName& modkitText);
    
    UFUNCTION(BlueprintCallable)
    static FText MiscItemToText(EYMiscellaneousType miscType, bool getSingular);
    
    UFUNCTION(BlueprintCallable)
    static FText ItemTypeToText(EYItemType ItemType, bool getSingular);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemTool(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemRowHandle(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsItemReadyToBeReleased(const UObject* WorldContext, const FName& ItemId, const FString& contextString, FName relatedableId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsItemOwned(UObject* WorldContext, const FName& ItemId, const FString& contextString, FName relatedableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetWeaponAssociatedFactionNameFromBPRowHandle(const FDataTableRowHandle& craftingBlueprintRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FYCollectibleLootBucket> GetSortedLootBuckets(const TArray<FYCollectibleLootBucket>& unsortedLootBuckets);
    
    UFUNCTION(BlueprintCallable)
    static bool GetSkippingPriceForSpecificItem(UObject* objectContext, const FString& contextStr, const FYShopItem& shopItem, FYCostEntryRow& outCost, FYCostEntryRow& outOptionalCost);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYPickupType GetPickupTypeFromItemType(const EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYPickupType GetPickupTypeFromItemRowHandle(const FDataTableRowHandle& inItemRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FText GetNameByRowHandle(const UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FText GetNameByID(UObject* WorldContext, const FString& ItemId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYMiscellaneousType GetMiscClassByID(const UObject* WorldContext, const FName& inMatchID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FYMaterialRow> GetMaterialsList(UObject* wrldCtx);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FText GetLoreText(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetItemWeightFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemType GetItemTypeFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemType GetItemType(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemTagsFromItemRowHandle(const FDataTableRowHandle& rowHandle, FGameplayTagContainer& GameplayTagContainer, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FYItemSetUIData GetItemSetUIData(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemRarityType GetItemRarityFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetInventoryItemDebugString(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetIDFromItem(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetIconByRowHandle(UObject* WorldContext, const FString& callerContext, const FDataTableRowHandle& matchRowHandle, bool useLargeIcon, int32 materialVariationIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static TSoftObjectPtr<UTexture2D> GetIconByID(UObject* WorldContext, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static void GetGameplayTagData(UObject* WorldContext, const FGameplayTagContainer& TagContainer, TArray<FYGameplayTagMappingRow>& gameplayTagData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FText GetFlavorText(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYDeviceClass GetDeviceClassFromItemRowHandle(const FDataTableRowHandle& itemDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYDeviceClass GetDeviceClassByID(const UObject* WorldContext, const FName& inMatchID);
    
    UFUNCTION(BlueprintCallable)
    static EYDeviceCategory GetDeviceCategory(UObject* wrldCtx, const FDataTableRowHandle& itemRowHandle, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static FText GetDescription(UObject* WorldContext, const FDataTableRowHandle& matchRowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FYCurrencyRow> GetCurrenciesList(UObject* wrldCtx);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FYCostEntryRow> GetCraftingPriceForSpecificItem(const FString& callerContext, const FYShopItem& shopItem);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCraftingMinutesForSpecificItem(const FString& contextStr, const FYShopItem& shopItem);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetCraftingMaterialsAmountByName(UObject* WorldContext, const FString& materialName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool FindVisualAcquisitionDataFromItem(const UObject* WorldContext, FName ID, FYItemVisualAcquisitionData& outData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYVanityType FindVanityTypeByID(const UObject* WorldContext, const FName& inMatchID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYItemType FindItemTypeByRow(const UObject* WorldContext, FDataTableRowHandle rowHandle, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYItemType FindItemTypeByID(const UObject* WorldContext, const FName& inMatchID, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYCustomizationCategory FindCustomizationCategoryByRowHandle(const UObject* WorldContext, const FDataTableRowHandle& inMatchID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static EYCustomizationCategory FindCustomizationCategoryByID(const UObject* WorldContext, const FName& inMatchID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindCraftingBlueprintRowHandleByItemRowHandle(const UObject* WorldContext, const FDataTableRowHandle& inMatchRowHandle, FDataTableRowHandle& outCraftingBlueprintRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindCraftingBlueprintRowHandleByBaseID(const UObject* WorldContext, const FString& ItemId, FDataTableRowHandle& outCraftingBlueprintRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool DoesItemRequireOwnership(const UObject* WorldContext, const FName& ItemId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    static FText DeviceClassToText(EYDeviceClass deviceClass, bool getSingular);
    
    UFUNCTION(BlueprintCallable)
    static FText DeviceCategoryToText(EYDeviceCategory deviceCategory);
    
    UFUNCTION(BlueprintCallable)
    static FText CustomizationCategoryToText(EYCustomizationCategory customizationCategory, bool getSingular);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CreateItemRowHandle(const UObject* wrldCtx, const FString& baseItemId, FDataTableRowHandle& outRowHandle, const FString& callerContext, bool noLogError);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool CreateCraftingBlueprintRowHandleByBlueprintId(const UObject* WorldContext, const FName& blueprintId, FDataTableRowHandle& outCraftingBlueprintRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CompatibleItemIDsForModToString(UObject* WorldContext, const FYItemDataTableRowBase& modRow, FString& outString, EYItemType& outItemType);
    
    UFUNCTION(BlueprintCallable)
    static void CompatibleDeviceClassesForModToString(const FYItemDataTableRowBase& modRow, FString& outString);
    
    UFUNCTION(BlueprintCallable)
    static void CompatibleDeviceCategoriesForModToString(const FYItemDataTableRowBase& modRow, FString& outString);
    
    UFUNCTION(BlueprintCallable)
    static void CompatibleAmmoTypesForModToString(const FYItemDataTableRowBase& modRow, FString& outString);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CompatibilityListForModToString(UObject* WorldContext, const FYItemDataTableRowBase& modRow, FString& outString, bool excludeItemTypes, bool excludeDeviceClasses, bool excludeDeviceCategories, bool excludeAmmoTypes);
    
    UFUNCTION(BlueprintCallable)
    static FText AmmoTypeToText(EYAmmoType ammoType);
    
};

