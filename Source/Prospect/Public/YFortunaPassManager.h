#pragma once
#include "CoreMinimal.h"
#include "EYFortunaPassToastReponseType.h"
#include "YCustomItemInfo.h"
#include "YUserCurrenciesItems.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YClaimableStarterPack.h"
#include "YFortunaPassPlayerData.h"
#include "YInventoryItem.h"
#include "YSeasonProgressionUpdateData.h"
#include "YSeasonWipeData.h"
#include "YFortunaPassManager.generated.h"

class UYFortunaPassManager;
class UYFortunaPassModel;

UCLASS(Blueprintable)
class PROSPECT_API UYFortunaPassManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYRegrantedStarterPacksClaimCompletionResult, bool, success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYRegrantedStarterPacksClaimCompleted, const TArray<FYInventoryItem>&, GrantedItems);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSeasonWipeDataResponse, const FYSeasonWipeData&, seasonWipeData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnRequestSuccess, const TArray<FDataTableRowHandle>&, GrantedItems);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnRequestError, EYFortunaPassToastReponseType, toastResponseType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnFortunaPassSkipLevelsSignature, const FString&, UserId, const int32&, updatedAurumBalance, bool, success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYOnFortunaPassSeasonsTitleDataChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnFortunaPassProgressionUpdateSignalRReceivedSignature, const FYSeasonProgressionUpdateData&, seasonProgressionData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnFortunaPassDataReceivedBackendSignature, const FString&, UserId, const FYFortunaPassPlayerData&, fortunaPassPlayerData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCustomItemsUpdatedSignature, const FString&, UserId, const TArray<FYCustomItemInfo>&, itemAmountChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCurrenciesUpdated, const TArray<FYUserCurrenciesItems>&, currencies, const FString&, callerContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnClaimableStarterPackResponse, const TArray<FYClaimableStarterPack>&, claimableStarterPacks);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYFortunaPassPremiumTrackPurchased, bool, success);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassSeasonsTitleDataChange OnFortunaPassSeasonsTitleDataChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYFortunaPassPremiumTrackPurchased FortunaPassPremiumTrackPurchased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnFortunaPassSkipLevelsSignature OnFortunaPassLevelsSkipped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestError OnClaimRequestError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestSuccess OnClaimRequestSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestError OnSkipLevelsRequestError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnRequestError OnPurchasePremiumRequestError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnSeasonWipeDataResponse OnSeasonWipeDataResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnClaimableStarterPackResponse OnClaimableStarterPackResponse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRegrantedStarterPacksClaimCompletionResult OnRegrantedStarterPacksClaimCompletionResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRegrantedStarterPacksClaimCompleted OnRegrantedStarterPacksClaimCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesUpdated CurrenciesUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomItemsUpdatedSignature OnCustomItemsUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYFortunaPassModel* m_model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYClaimableStarterPack> m_claimableStarterPacks;
    
public:
    UYFortunaPassManager();

    UFUNCTION(BlueprintCallable)
    void RequestClaimableStarterPackData(const UObject* ctxObj);
    
    UFUNCTION(BlueprintCallable)
    void RefreshData();
    
    UFUNCTION(BlueprintCallable)
    bool PurchasePremiumTrack(const UObject* objectContext, bool withSkipLevels);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatedDataTableFromTitleDataReceived(const FString& titleDataKey);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FYClaimableStarterPack> GetClaimableStarterPacks() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UYFortunaPassManager* FindFortunaPassManager(const UObject* objCtx, const FString& contextString);
    
    UFUNCTION(BlueprintCallable)
    void ClaimStarterPackPackage(const UObject* ctxObj, const FString& bundleId);
    
    UFUNCTION(BlueprintCallable)
    void ClaimOldestStarterPackPackage(const UObject* ctxObj);
    
};

