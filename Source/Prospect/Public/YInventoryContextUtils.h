#pragma once
#include "CoreMinimal.h"
#include "EYItemOriginType.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYInventoryPlace.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YMatchInventoryUpdate.h"
#include "YInventoryContextUtils.generated.h"

class AActor;
class AYLootContainer;
class UObject;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class PROSPECT_API UYInventoryContextUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYInventoryContextUtils();

    UFUNCTION(BlueprintCallable)
    static bool UpdateInventoryItems(AActor* relevantActorContext, const FYMatchInventoryUpdate& dataUpdate);
    
    UFUNCTION(BlueprintCallable)
    static void SplitItemAmount(AActor* actorContext, const FYInventoryItem& itemToDrop, int32 amountToDrop, EYInventoryPlace inventoryToDrop);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemFromActorInventory(AActor* OwningPlayer, const FYInventoryItem& itemToRemove, const int32 amountToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemFromActiveSet(AActor* actorContext, const FYInventoryItem& itemToRemove);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveItemById(UObject* playerContext, int32 TargetId, const FYInventoryItem& itemToRemove, const int32 amountToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveAttachmentFromWeapon(AActor* actorContext, const FString& weaponItemId, const FString& modItemId, EYPlayerSetType targetSetType, bool dropAttachment);
    
    UFUNCTION(BlueprintCallable)
    static void MoveStashItemToEmptySetSlot(AActor* actorContext, const FYInventoryItem& stashItem, const EYPlayerSetType Slot);
    
    UFUNCTION(BlueprintCallable)
    static void MoveItemsById(AActor* playerContext, const int32 TargetId, const int32 originId, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking);
    
    UFUNCTION(BlueprintCallable)
    static void MoveItemInOwningPlayerInventory(AActor* OwningPlayer, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking);
    
    UFUNCTION(BlueprintCallable)
    static void MoveItemByContext(AActor* playerContext, AActor* targetContext, AActor* originContext, const FYInventoryItem& itemToMove, const int32 amountToMove, EYPlayerSetType newSetType, bool ignoreStacking);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool HasItemsInInventoryByComponentId(AActor* WorldContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasItemAtNonGrowableSetType(AActor* actorContext, EYPlayerSetType setType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxStashItemAmountByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxSafeWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxLootContainerWeightForComponentId(AActor* actorContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxLoadoutWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxBagWeightForComponentId(AActor* actorContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxBagWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AYLootContainer* GetLootContainerForComponentId(AActor* actorContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLoadoutWeightPercentageByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetLoadoutWeightPercentageByAbsolute(const int32 maxBagWeight, const int32 maxSafeWeight, AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemAtNonGrowableSetTypeForComponent(const UYStateInventoryComponent* stateInventoryComponent, EYPlayerSetType setType, FYInventoryItem& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetItemAtNonGrowableSetType(AActor* actorContext, EYPlayerSetType setType, FYInventoryItem& OutItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FYInventoryItem> GetInventoryItemsInLoadoutByContext(AActor* relevantActorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentStashItemAmountByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetCurrentSafeWeightForComponentId(AActor* WorldContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentSafeWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentLootContainerWeightForComponenentId(AActor* actorContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentLoadoutWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetCurrentInventoryValueForComponentId(AActor* WorldContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentInventoryValueByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static float GetCurrentBagWeightForComponentId(AActor* WorldContext, int32 componentId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurrentBagWeightByContext(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 FindTotalItemAmountFromStashAndLoadout(AActor* actorContext, FName baseItemId, const FString& contextString);

    UFUNCTION(BlueprintCallable)
    static int32 FindTotalItemAmountFromActor(AActor* actorContext, FName baseItemId, const FString& contextString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYStateInventoryComponent* FindStateInventoryComponentWithItemId(const UObject* WorldContext, const FString& ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UYStateInventoryComponent* FindStateInventoryComponentWithItem(const UObject* WorldContext, const FYInventoryItem& itemToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindStashItemFromActor(AActor* actorCtx, const FString& ItemId, const FString& ctxStr, FYInventoryItem& outInventoryItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static bool FindItemAnywhereWithItemId(const UObject* WorldContext, const FString& ItemId, FYInventoryItem& OutItem, EYPlayerSetType& outType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindInventoryItemSetTypeFromStateInventory(const UYStateInventoryComponent* stateInventory, const FString& ItemId, const FString& contextString, EYPlayerSetType& setType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindInventoryItemSetTypeFromActor(AActor* actorContext, const FString& ItemId, const FString& contextString, EYPlayerSetType& setType);
    
    UFUNCTION(BlueprintCallable)
    static bool FindInventoryItemFromActor(AActor* actorCtx, const FString& ItemId, const FString& ctxStr, FYInventoryItem& outInventoryItem);
    
    UFUNCTION(BlueprintCallable)
    static void EquipItemByContext(AActor* actorContext, const FYInventoryItem& itemToEquip, EYPlayerSetType equippedSlot);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static FYInventoryItem CreateItem(AActor* OwningPlayer, const FDataTableRowHandle& itemRowHandle, EYItemOriginType Origin, int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool CreateAndAddItemToPlayer(AActor* OwningPlayer, FDataTableRowHandle itemRowHandle, EYItemOriginType Origin, int32 Amount, FYInventoryItem& OutItem, int32& outRemainingItemAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInStash(AActor* actorContext, const FYInventoryItem& inItem, const bool ignoreStacking, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInSafeForComponentId(AActor* actorContext, int32 componentId, const FYInventoryItem& inItem, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInSafe(AActor* actorContext, const FYInventoryItem& inItem, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInLootContainerForComponentId(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInBagOrSafe(AActor* actorContext, const FYInventoryItem& inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInBagForComponentId(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInBag(AActor* actorContext, const FYInventoryItem& inItem, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanStoreItemInAlienForgeLootContainer(AActor* actorContext, const FYInventoryItem& inItem, int32 componentId, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMoveItem(AActor* actorContext, const FYInventoryItem& Item, int32 amountToMove, int32 originInventoryComponentId, int32 targetInventoryComponentId, EYPlayerSetType targetSetType, const bool ignoreStacking, int32& outAllowedAmount, FString& resultCode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanMoveBag(AActor* actorContext, const FYInventoryItem& bagItem, int32 originInventoryComponentId, int32 targetInventoryComponentId, EYPlayerSetType targetSetType);
    
    UFUNCTION(BlueprintCallable)
    static bool CanAddItemToActor(AActor* OwningPlayer, const FYInventoryItem& itemToAdd, int32& outAllowedAmount);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemToActor(AActor* OwningPlayer, const FYInventoryItem& itemToAdd, int32& remainingItemAmount);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemById(UObject* playerContext, int32 TargetId, const FYInventoryItem& itemToAdd, int32 amountToAdd, EYPlayerSetType newSetType, bool ignoreStacking);
    
    UFUNCTION(BlueprintCallable)
    static void AddAttachmentToWeapon(AActor* actorContext, const FString& weaponItemId, const FString& modItemId);
    
};

