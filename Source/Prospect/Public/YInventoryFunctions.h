#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYPlayerSetType.h"
#include "EYPlayerSetTypeSimplified.h"
#include "YInventoryItem.h"
#include "YPlayerDataSet.h"
#include "YPlayerInventory.h"
#include "YInventoryFunctions.generated.h"

class AActor;
class APlayerState;
class UYBackendInventoryModel;
class UYInventoryManager;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class UYInventoryFunctions : public UObject {
    GENERATED_BODY()
public:
    UYInventoryFunctions();

    UFUNCTION(BlueprintCallable)
    static void UnequipItem(FYPlayerDataSet& inOutSet, const FYInventoryItem& itemToUnEquip);
    
    UFUNCTION(BlueprintCallable)
    static bool ModifyDurability(AActor* actorContext, FDataTableRowHandle itemRowHandle, int32 durabilityDelta, bool consumeItemOnNoDurability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWeaponEquipped(AActor* actorCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSplittable(const FYInventoryItem& inInventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemTypeInInventory(AActor* actorContext, FDataTableRowHandle itemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemInInventory(const FYPlayerInventory& Inventory, const FYInventoryItem& itemToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsItemEquipped(const FYPlayerDataSet& playerSet, const FYInventoryItem& itemToCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDurabilityHigherThanThreshold(AActor* actorContext, FDataTableRowHandle itemRowHandle, int32 durabilityThreshold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompatibleAmmoEquipped(AActor* actorCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasRoomInStashByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetItemScrappingReturnValues(const FYInventoryItem& Item, int32& outCurrency, int32& outReputation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemRepairCostTotal(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemRepairCostModifierBroken(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemRepairCostMaxDurability(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemRepairCostBase(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYPlayerSetTypeSimplified GetItemPositionInInventory(const FYInventoryItem& inventoryItem, APlayerState* owningPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemMaxStackSize(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemMaxDurability(const FYInventoryItem& inventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFilteredInventoryAndSet(const FYPlayerInventory& Inventory, const FYPlayerDataSet& set, const TArray<EYPlayerSetType>& Types, FYPlayerInventory& outFilteredInventory, FYPlayerDataSet& outFilteredSet, bool invert);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FYInventoryItem> GetDamagedItemsOfType(UObject* objCtx, EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FYInventoryItem> GetDamagedItems(UObject* objCtx, TArray<EYItemType> excludedItemTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAmountOfItemsInPlayerInventoryByItemType(AActor* actorContext, const FYPlayerInventory& playerInventory, EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAmountOfItemsInPlayerDataSetByItemType(AActor* actorContext, const FYPlayerDataSet& playerSet, EYItemType ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYStateInventoryComponent* FindStateInventoryComponentWithId(AActor* actorContext, int32 componentId, const FString& callerContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYBackendInventoryModel* FindInventoryModel(const UObject* objectContext, const FString& UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYInventoryManager* FindInventoryManager(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInventoryItemSlotFromActor(AActor* actorContext, const FYInventoryItem& Item, EYPlayerSetType& outInventoryItemSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInventoryItemsFromSlots(AActor* actorContext, TArray<EYPlayerSetType> Slots, TArray<FYInventoryItem>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInventoryItemsByItemType(AActor* actorContext, EYItemType desiredItemType, TArray<FYInventoryItem>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInventoryItemFromComponentWithId(AActor* actorContext, int32 componentId, const FString& ItemId, const FString& callerContext, FYInventoryItem& outInventoryItem);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFirstStashItemByRowId(AActor* actorCtx, const FName& rowId, FYInventoryItem& outInventoryItem);
    
    UFUNCTION(BlueprintCallable)
    static bool FindFirstInventoryItemByRowId(AActor* actorCtx, const FName& rowId, FYInventoryItem& outInventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindAmountOfToolSlots();
    
    UFUNCTION(BlueprintCallable)
    static bool FindAmountOfItemGivenRowId(AActor* actorCtx, const FString& rowId, int32& Amount);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAllItemsGivenRowId(AActor* actorCtx, const FString& rowId, TArray<FYInventoryItem>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static bool FindAllInventoryItemsByItemType(AActor* actorContext, EYItemType desiredItemType, TArray<FYInventoryItem>& outItems);
    
    UFUNCTION(BlueprintCallable)
    static void EquipItem(FYPlayerDataSet& inOutSet, const FYInventoryItem& itemToEquip, EYPlayerSetType equippedSlot);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyItemInMatchInventoryByContext(AActor* actorContext, const FYInventoryItem& itemToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool DestroyItemInMatchInventory(UYStateInventoryComponent* inventoryComponent, const FYInventoryItem& itemToRemove);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void ConsumeItemOfTypeInInventory(AActor* actorContext, const FDataTableRowHandle& itemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateWeightForItems(const TArray<FYInventoryItem>& inInventoryItems, const bool isInBag, AActor* contextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateWeightForInventory(const FYPlayerInventory& Inventory, const bool isInBag, AActor* contextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalculateStackWeight(const FYInventoryItem& StackedItem, bool isInBag, AActor* contextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalculateInventoryDiff(const FYPlayerInventory& oldInventory, const FYPlayerInventory& newInventory, TArray<FYInventoryItem>& outItemsAdded, TArray<FYInventoryItem>& outItemsUpdated, TArray<FYInventoryItem>& outItemsRemoved);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalculateAreInventoriesEqualAndLogResult(const FYPlayerInventory& first, const FYPlayerInventory& second);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CalculateAreInventoriesEqual(const FYPlayerInventory& first, const FYPlayerInventory& second);
    
};

