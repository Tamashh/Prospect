#pragma once
#include "CoreMinimal.h"
#include "EYClaimGenericClaimableDataResponseType.h"
#include "EYGenericClaimableOrigin.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YGenericClaimableData.h"
#include "UObject/Object.h"
#include "Engine/DataTable.h"
#include "YAzureFunctionResult.h"
#include "YClaimCouponCodeResult.h"
#include "YGenericClaimableDataManager.generated.h"

class UYGenericClaimableDataManager;

UCLASS(Blueprintable)
class UYGenericClaimableDataManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnNewlyClaimedData, const TArray<FYCustomItemInfo>&, Items, const TArray<FYCurrencyItem>&, currencies, const FString&, callerContext);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGenericClaimableDataReceived);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClaimGenericClaimableDataResponse, EYClaimGenericClaimableDataResponseType, response);

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenericClaimableDataReceived OnGenericClaimableDataReceived;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimGenericClaimableDataResponse ClaimGenericClaimableDataResponse;

    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNewlyClaimedData OnNewlyClaimedData;

    UYGenericClaimableDataManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnOwnedEntitlementsChanged(const TArray<FString>& ownedEntitlements);

    UFUNCTION(BlueprintCallable)
    void OnFetchDataFromPlayFabInternalResponse(const FYAzureFunctionResult& azureResult);

    UFUNCTION(BlueprintCallable)
    void OnCouponRedeemed(const FYClaimCouponCodeResult& redeemResult, const TArray<FDataTableRowHandle>& itemRows);

    UFUNCTION(BlueprintCallable)
    void OnClaimGenericClaimableDataResponse(const FYAzureFunctionResult& azureResult);

public:
    UFUNCTION(BlueprintCallable)
    static UYGenericClaimableDataManager* GetGenericClaimableDataManager(const UObject* objectContext);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FYGenericClaimableData> GetCachedGenericClaimableData(const UObject* objectContext);

    UFUNCTION(BlueprintCallable)
    static void ClaimOldestGenericClaimableData(const UObject* objectContext);

    UFUNCTION(BlueprintCallable)
    static void ClaimGenericClaimableData(const UObject* objectContext, const FString& ID, const EYGenericClaimableOrigin Origin);

};
