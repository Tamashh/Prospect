#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "EYRepairItemResult.h"
#include "EYStartItemCraftingResultStatus.h"
#include "YCraftedBlueprintInfo.h"
#include "YCustomItemInfo.h"
#include "UObject/Object.h"
#include "YCraftingManager.generated.h"

UCLASS(Blueprintable)
class UYCraftingManager : public UObject {
    GENERATED_BODY()
public:
    UYCraftingManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponShopItemPurchasedResponse(const EYPurchaseWeaponShopItemStatus Status) const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemsUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& infos) const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemRepairedResult(const FString& UserId, const TArray<FYCustomItemInfo>& infos, EYRepairItemResult Result) const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemCraftingStartedResponse(EYStartItemCraftingResultStatus Status) const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemCraftedClaimedResponse(bool craftingFailed) const;
    
    UFUNCTION(BlueprintCallable)
    void OnItemClaimedResponseResponse(const FYCraftedBlueprintInfo& craftedBlueprintInfo) const;
    
};

