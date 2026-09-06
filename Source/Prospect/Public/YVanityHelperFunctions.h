#pragma once
#include "CoreMinimal.h"
#include "EYVanityType.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "EYApperenceCategoriesTypes.h"
#include "EYCustomizationModelType.h"
#include "YActiveGlobalRuntimeVanityData.h"
#include "YItemUsingVanityInfo.h"
#include "YVanityItemRowBase.h"
#include "YWeaponVanityRow.h"
#include "YVanityHelperFunctions.generated.h"

class AActor;
class UAnimMontage;
class UMaterialInstance;
class UMeshComponent;

UCLASS(Blueprintable)
class UYVanityHelperFunctions : public UObject {
    GENERATED_BODY()
public:
    UYVanityHelperFunctions();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RetrieveVanityOptionsFor(const UObject* WorldContext, const FName& ItemId, const EYVanityType vanityType, TArray<FYVanityItemRowBase>& outVanityOptions);
    
    UFUNCTION(BlueprintCallable)
    static void ResetGlobalVanityTemporaryDataToPersistent(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable)
    static bool RequestVanityUpdate(AActor* actorContext, FDataTableRowHandle rowHandle, int32 currentSelectedSlot, EYVanityType vanityType, EYCustomizationModelType customizationType);
    
    UFUNCTION(BlueprintCallable)
    static bool IsVanityRowHandleValidForItem(FName weaponRowName, FDataTableRowHandle vanityRowHandle, bool onlyExclusiveOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVanityItemOwnedOrFromRetentionBonus(UObject* WorldContextObject, FName ItemId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsVanityItemInsidePlayerInventory(UObject* WorldContextObject, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsVanityItemFullSuit(UObject* WorldContextObject, FName vanityItemRowName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsVanityDefaultEntry(const UObject* WorldContext, const FString& vanityId, FName relateableId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRowHandlePrimaryVanity(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPersistentAndPendingGlobalVanitySelectionEqual(const UObject* objCtx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsOwnedVanity(UObject* WorldContextObject, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsCharacterVanityItemArchetypeStartingItem(const UObject* WorldContext, FName& ItemId, TArray<FName>& archetypeIdsOut);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetSeperatedVanityEntries(const TArray<FDataTableRowHandle>& vanityRowHandles, FDataTableRowHandle& primaryVanityId, FDataTableRowHandle& secondaryVanityId);
    
    UFUNCTION(BlueprintCallable)
    static bool FindWeaponRowByVanityType(const TArray<FDataTableRowHandle>& vanityEntries, FYWeaponVanityRow& weaponVanityRow);
    
    UFUNCTION(BlueprintCallable)
    static FText FindVanityItemName(const FDataTableRowHandle& rowHandle);
    
    UFUNCTION(BlueprintCallable)
    static TSoftClassPtr<AActor> FindVanityActorFromHandle(AActor* actorContext, FDataTableRowHandle rowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FindItemsUsingVanityItem(UObject* WorldContextObject, FName vanityItemRowName, TArray<FYItemUsingVanityInfo>& outItems);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FindExplanationApperenceCategory(AActor* relevantActor, EYApperenceCategoriesTypes Category);
    
    UFUNCTION(BlueprintCallable)
    static bool FindEquippedGlobalVanityRowHandleById(const FYActiveGlobalRuntimeVanityData& vanityData, FName ItemId, FDataTableRowHandle& outRowHandle, int32& OutIndex);
    
    UFUNCTION(BlueprintCallable)
    static void FindCharacterCustomizationRowHandleFromData(FYActiveGlobalRuntimeVanityData vanityData, EYVanityType vanityType, int32 slotId, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static void FindCharacterCustomizationRowHandleFromActor(AActor* relevantActor, EYVanityType vanityType, FDataTableRowHandle& outRowHandle);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* FindActiveAnimationFromDataGivenType(FYActiveGlobalRuntimeVanityData vanityData, EYVanityType vanityType, int32 slotId);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* FindActiveAnimationForActorGivenType(AActor* relevantActor, EYVanityType vanityType);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyVanityEntriesOnActor(AActor* relevantActor, TArray<FDataTableRowHandle> vanityEntries);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyGenericVanityMaterialOnMesh(UMaterialInstance* materialWithParameterOverrides, UMeshComponent* MeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void AddVanityToWeapon(AActor* actorContext, const FString& weaponItemId, const TArray<FDataTableRowHandle>& vanityIds);
    
};

