#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "EYCraftingUnavailableReason.h"
#include "YCraftSuccessfulPopupText.h"
#include "YItemDataTableRowBase.h"
#include "YShopItem.h"
#include "YBlueprintFunctionsLibrary.generated.h"

class AActor;
class UDataTable;
class UObject;

UCLASS(Blueprintable)
class PROSPECT_API UYBlueprintFunctionsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UYBlueprintFunctionsLibrary();

    UFUNCTION(BlueprintCallable)
    static bool TryGetItemTextDataFromBlueprintRowHandle(UObject* objCtx, const FDataTableRowHandle& bpRowHandle, FYCraftSuccessfulPopupText& craftSuccessfulPopupText);
    
    UFUNCTION(BlueprintCallable)
    static bool TryGetDeviceTypeTextFromItemType(UObject* objCtx, const FYItemDataTableRowBase& itemDataTableRowBase, FYCraftSuccessfulPopupText& FYCraftSuccessfulPopupText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAnimationPreview(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCraftingStationRowName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FireShot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 FindPlayerFactionLevelForFaction(AActor* actorContext, const FString& factionId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindAllShopHandleFromShopRow(UDataTable* factionDataTable, bool excludeQuickShop, TArray<FDataTableRowHandle>& outRowHandles);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesShopStringCorrespondToAFaction(const FString& shopId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesShopNameCorrespondToAFaction(const FName& shopId);
    
    UFUNCTION(BlueprintCallable)
    static FText CraftingUnavailableReasonToText(EYCraftingUnavailableReason unavailableReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanSkipItemCrafting(AActor* wlrdCtx, const FString& callerContextString, const FYShopItem& shopItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanCraftItem(AActor* wlrdCtx, const FString& callerContextString, const FYShopItem& shopItem, EYCraftingUnavailableReason& outUnavailableReason, const int32 repeatTimes);
    
};

