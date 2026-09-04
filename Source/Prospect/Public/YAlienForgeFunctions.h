#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYAlienForgeBIAction.h"
#include "EYAlienForgeCanItemBeForgedState.h"
#include "YAlienForgeActivityStats.h"
#include "YAlienForgeProgressDescriptionState.h"
#include "YAlienForgeSettingsRow.h"
#include "YAlienForgeUIInventoryState.h"
#include "YInventoryItem.h"
#include "YPlayerInventory.h"
#include "YAlienForgeFunctions.generated.h"

class AActor;
class UObject;
class UYStateInventoryComponent;

UCLASS(Blueprintable)
class UYAlienForgeFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYAlienForgeFunctions();

    UFUNCTION(BlueprintCallable)
    static bool IsPlayerInteractingWithAlienForge(AActor* actorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemUsableInAlienForge(const UObject* objectContext, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    static bool IsItemConsumedFromForging(const FYAlienForgeProgressDescriptionState& alienForgeProgressDescriptionState, const FYInventoryItem& Item);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInventoryComponentOwnedByAlienForge(const UYStateInventoryComponent* inventoryComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 GetRequiredAmountToForge(const AActor* WorldContext, const FDataTableRowHandle& itemDataTableRowHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetAlienForgeSettingsRow(const AActor* WorldContext, FYAlienForgeSettingsRow& alienForgeSettingsRow);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAlienForgeCorrectInventoryStateFromActor(AActor* actorContext, FYAlienForgeUIInventoryState& itemMapping);
    
    UFUNCTION(BlueprintCallable)
    static FYAlienForgeUIInventoryState GetAlienForgeCorrectInventoryState(const FYPlayerInventory& playerInventory, const TArray<FYInventoryItem>& forgedItems);
    
    UFUNCTION(BlueprintCallable)
    static FYAlienForgeActivityStats GetAlienForgeBiStruct(const FString& forgeInteractionUniqueId, const FYAlienForgeUIInventoryState& itemsMapping, EYAlienForgeBIAction alienForgeBiAction, const EYAlienForgeCanItemBeForgedState alienForgeCanItemBeForgedState);
    
};

