#pragma once
#include "CoreMinimal.h"
#include "EYPurchaseWeaponShopItemStatus.h"
#include "EYStartItemCraftingResultStatus.h"
#include "YCraftedBlueprintInfo.h"
#include "Engine/DataTable.h"
#include "OnCurrenciesUpdatedResponseReceivedSignatureDelegate.h"
#include "OnItemClaimedReceivedSignatureDelegate.h"
#include "OnItemCraftingStartedResponseReceivedSignatureDelegate.h"
#include "OnItemCraftingStoppedResponseReceivedSignatureDelegate.h"
#include "OnItemPurchasedResponseReceivedSignatureDelegate.h"
#include "OnItemsReceivedDelegate.h"
#include "OnItemsUpdatedResponseReceivedSignatureDelegate.h"
#include "OnTimerUpdatedSignatureDelegate.h"
#include "YOnCraftedItemClaimFailSignatureDelegate.h"
#include "YOnItemCraftingStartedFailSignatureDelegate.h"
#include "YOnItemPurchasingFailSignatureDelegate.h"
#include "YShopBlueprintData.h"
#include "YShopItem.h"
#include "YWidgetProvider.h"
#include "YWidgetProvider_WeaponShops.generated.h"

class UYStateInventoryComponent;

UCLASS(Blueprintable)
class UYWidgetProvider_WeaponShops : public UYWidgetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_shopId;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsReceived OnItemsReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemsUpdatedResponseReceivedSignature OnItemsUpdatedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrenciesUpdatedResponseReceivedSignature OnCurrenciesUpdatedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemPurchasedResponseReceivedSignature OnItemPurchasedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemClaimedReceivedSignature OnItemClaimedReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCraftingStartedResponseReceivedSignature OnItemCraftingStartedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemCraftingStoppedResponseReceivedSignature OnItemCraftingStoppedResponseReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimerUpdatedSignature OnTimerUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemCraftingStartedFailSignature OnItemCraftingStartedFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCraftedItemClaimFailSignature OnCraftedItemClaimFail;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemPurchasingFailSignature OnItemPurchasingFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYShopBlueprintData> m_blueprintsUiData;
    
    UYWidgetProvider_WeaponShops();

private:
    UFUNCTION(BlueprintCallable)
    void UpdateCraftingTimer(float remainingSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartItemCrafting(const FYShopItem& shopItem);
    
    UFUNCTION(BlueprintCallable)
    void SkipItemCrafting(bool useOptionalCosts);
    
    UFUNCTION(BlueprintCallable)
    void PurchaseItem(const FYShopItem& shopItem, int32 repeatTimes);
    
    UFUNCTION(BlueprintCallable)
    void OnShopSet(const FName& shopId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCurrenciesUpdated();
    
    UFUNCTION(BlueprintCallable)
    void HandleStashChange(UYStateInventoryComponent* stateInventoryComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemPurchased(const EYPurchaseWeaponShopItemStatus purchaseWeaponShopItemStatus);
    
    UFUNCTION(BlueprintCallable)
    void HandleItemCrafted(bool craftingFailed);
    
    UFUNCTION(BlueprintCallable)
    void HandleCraftingStarted(EYStartItemCraftingResultStatus startItemCraftingStatus);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetItemDataToCreateBlueprintItems(TArray<FYShopBlueprintData>& itemUiData, bool sortOnFactionLevel, bool sortAlphabetically);
    
    UFUNCTION(BlueprintCallable)
    void DebugGetAllItemsDataToCreateBlueprintItems(TArray<FDataTableRowHandle>& outRowHandles);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastCraftedItemSuccess(const FYCraftedBlueprintInfo& craftedBlueprintInfo);
    
};

