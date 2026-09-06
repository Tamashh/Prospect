#pragma once
#include "CoreMinimal.h"
#include "EYModificationSlotType.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYItemRarityType.h"
#include "YDetailedStatisticsDataSettingData.h"
#include "YInventoryItem.h"
#include "YModEntry.h"
#include "YModSettingsEntry.h"
#include "YStatsTypeDataEntry.h"
#include "YStoredModData.h"
#include "YModFunctions.generated.h"

class AActor;
class APlayerController;

UCLASS(Blueprintable)
class UYModFunctions : public UObject {
    GENERATED_BODY()
public:
    UYModFunctions();

    UFUNCTION(BlueprintCallable)
    static void RemoveAttachmentsFromWeapon(AActor* actorCtx, const FString& weaponItemId);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveAttachmentFromWeapon(AActor* actorContext, int32 inventoryId, const FString& weaponItemId, const FString& modId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText ModSlotTypeToText(const EYModificationSlotType modType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ItemHasModSlots(UObject* objectContext, const FDataTableRowHandle& itemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModdableItem(UObject* objCtx, const FDataTableRowHandle& itemRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsModCompatibleWithWeapon(const FDataTableRowHandle& weaponRowHandle, const FDataTableRowHandle& modRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetScopeOffset(AActor* actorCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModFromItemId(AActor* actorContext, int32 inventoryId, const FString& ItemId, const FString& modId, FYModEntry& outMod);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetModByType(AActor* actorCtx, EYModificationSlotType slotType, FYModEntry& foundMod);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDataTableRowHandle> GetCompatibleWeaponsForMod(UObject* objectContext, const FDataTableRowHandle& modRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FDataTableRowHandle> GetCompatibleModsForWeapon(const UObject* objectContext, const FDataTableRowHandle& weaponRowHandle, EYModificationSlotType optionalModSlotType);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYModificationSlotType FindModTypeFromRow(const FDataTableRowHandle& row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindModSettingsForType(const UObject* objectContext, EYModificationSlotType Type, FYModSettingsEntry& outSettings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EYItemRarityType FindModRarityFromRow(const FDataTableRowHandle& row);
    
    UFUNCTION(BlueprintCallable)
    static bool FindItemStatsEntryFromModHandle(FDataTableRowHandle baseItemHandle, FDataTableRowHandle modRowHandle, float rollChance, EYItemRarityType rarity, TArray<FYStatsTypeDataEntry>& outEntries, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDetailedItemStatsFromModHandle(APlayerController* PlayerController, FDataTableRowHandle baseItemHandle, TArray<FDataTableRowHandle> modRowHandles, float rollChance, EYItemRarityType rarity, FYDetailedStatisticsDataSettingData& outData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesItemHaveMods(const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    static FYStoredModData CalculateModsFromRarityToNewRarityByRow(const UObject* objCtx, const FDataTableRowHandle& itemRowHandle, EYItemRarityType toRarity);
    
    UFUNCTION(BlueprintCallable)
    static bool AddAttachmentToWeapon(AActor* actorContext, int32 weaponInventoryId, int32 modInventoryId, const FString& weaponItemId, const FYInventoryItem& modItem, const FString& newlyGeneratedGUID);
    
};

