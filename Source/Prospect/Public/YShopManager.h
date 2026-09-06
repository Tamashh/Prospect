#pragma once
#include "CoreMinimal.h"
#include "YShopOffer.h"
#include "YStoreRotationData.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAzureFunctionResult.h"
#include "YClaimCouponCodeResult.h"
#include "YPlayfabStoreItemEntry.h"
#include "YPlayfabStoreItemsResult.h"
#include "YFeatureToggles.h"
#include "EYGetErrorHandling.h"
#include "YOnCurrenciesAddedDelegate.h"
#include "YOnCustomItemsUpdatedShopSignatureDelegate.h"
#include "YShopManager.generated.h"

class UYShopManager;

UCLASS(Blueprintable)
class UYShopManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYPlayfabShopItemPurchaseCompletedSignature, const FYPlayfabStoreItemEntry&, storeItem, bool, success);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOwnedEntitlementsChanged, const TArray<FString>&, ownedEntitlements);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOneTimePurchaseCompleted, const TArray<FString>&, ItemIds);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FYNewArchetypePurchased);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYCouponRedeemedSignature, const FYClaimCouponCodeResult&, redeemResult, const TArray<FDataTableRowHandle>&, itemRows);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayFabStoresFetched, const FString&, StoreId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayfabShopItemPurchaseCompletedSignature PlayfabShopItemPurchaseCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOneTimePurchaseCompleted OneTimePurchaseCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOwnedEntitlementsChanged OnOwnedEntitlementsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYNewArchetypePurchased NewArchetypePurchased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCouponRedeemedSignature CouponRedeemed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayFabStoresFetched OnPlayFabStoresFetched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCurrenciesAdded CurrenciesAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYOnCustomItemsUpdatedShopSignature CustomItemsUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYPlayfabStoreItemsResult> m_cachedStoresMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoreRotationData m_dailyStoreRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYStoreRotationData m_weeklyStoreRotationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_cachedOneTimePurchases;
    
    UYShopManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnStoreRotationDataResult(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnSteamOverlayActivated(bool activated);
    
    UFUNCTION(BlueprintCallable)
    void OnGetStoreItemsResult(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnFetchEntitlementsResponse(const FYAzureFunctionResult& azureResult);
    
    UFUNCTION(BlueprintCallable)
    void OnFeatureTogglesUpdated(const FYFeatureToggles& featureToggles);

    UFUNCTION(BlueprintCallable)
    void OnEntitlementsUpdated(const TArray<FName>& entitlements);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveOffersUpdated(const TArray<FYShopOffer>& activeOffers);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSingleItemOneTimePurchase(const UObject* Context, const FString& ctxStr, const FName& ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool IsOneTimePurchaseSingleItemAlreadyOwned(const FString& ItemId, UObject* objectContext);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemNewArchetype(const UObject* objectContext, const FDataTableRowHandle& rowHandle, const FString& ID) const;
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UYShopManager* Get(const UObject* WorldContext, EYGetErrorHandling errorHandling);
    
private:
    UFUNCTION(BlueprintCallable)
    void BroadcastOneTimePurchasesUpdates(const FString& ItemId, const UObject* objectContext);
    
};

