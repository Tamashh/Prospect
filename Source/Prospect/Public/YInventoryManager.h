#pragma once
#include "CoreMinimal.h"
#include "EYRepairItemResult.h"
#include "YCustomItemInfo.h"
#include "YInstanceUpdateAmount.h"
#include "YInventory.h"
#include "YPlayerInventoryLimitResultData.h"
#include "YPlayerSetItemsEntry.h"
#include "YSellItemsClientResult.h"
#include "YTechTreeNodeStatus.h"
#include "UObject/Object.h"
#include "YClaimableVictimCompensation.h"
#include "YInsurancePayoutPackage.h"
#include "YOnCouponItemsReceivedDelegate.h"
#include "YOnCurrenciesAddedDelegate.h"
#include "YOnCurrenciesUpdatedSignatureDelegate.h"
#include "YOnItemRepairedDelegate.h"
#include "YOnItemSuccessfullyScrappedDelegate.h"
#include "YOnUpdatedFactionProgressionDelegate.h"
#include "YInventoryManager.generated.h"

class UYBackendInventoryModel;

UCLASS(Blueprintable)
class UYInventoryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UYBackendInventoryModel*> m_playerModels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> m_pendingCompleteInventoryUpdates;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnUpdatedFactionProgression updatedFactionProgression;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesUpdatedSignature CurrenciesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesAdded CurrenciesAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemSuccessfullyScrapped OnItemSuccessfullyScrapped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnItemRepaired OnItemRepaired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCouponItemsReceived OnCouponItemsReceived;
    
    UYInventoryManager();

    UFUNCTION(BlueprintCallable)
    static void RepairItem(UObject* objCtx, const FString& customItemID);
    
    UFUNCTION(BlueprintCallable)
    void ProcessPlayerSet(const FString& UserId, const FString& contextString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnVictimCompensationPayoutPackage(bool success, const FString& Guid, const FYClaimableVictimCompensation& claimedPackage);
    
    UFUNCTION(BlueprintCallable)
    void OnTechTreeNodesAvailable(const FString& UserId, const TArray<FYTechTreeNodeStatus>& techTreeNodes, const int32& remainingTimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnSellItemsClientResult(const FYSellItemsClientResult& scrapItems);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerSetsProcessed(const FString& UserId, const TArray<FYPlayerSetItemsEntry>& Sets);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoriesLimitsAvailable(const TArray<FYPlayerInventoryLimitResultData>& playerInventoriesLimits);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerInventoriesAvailable(const TArray<FYInventory>& inventoryEntries);
    
    UFUNCTION(BlueprintCallable)
    void OnItemsRemoved(const FString& UserId, const TArray<FString>& itemsToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnItemRepairedResult(const FString& UserId, const TArray<FYCustomItemInfo>& infos, EYRepairItemResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomItemUpdated(const FString& UserId, const TArray<FYCustomItemInfo>& Items);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomItemsUpdated(const FString& UserId, const TArray<FYInstanceUpdateAmount>& itemsUpdatedAmount);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomInventoryAvailable(const FString& UserId, const TArray<FYCustomItemInfo>& customItems);
    
    UFUNCTION(BlueprintCallable)
    void OnCraftedItemReceived(const FString& UserId, const TArray<FYCustomItemInfo>& infos);
    
    UFUNCTION(BlueprintCallable)
    void OnClaimInsurancePayoutPackage(const FYInsurancePayoutPackage& Package, int32 Index);
    
};

