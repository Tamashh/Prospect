#pragma once
#include "CoreMinimal.h"
#include "EYClaimGenericClaimableDataResponseType.h"
#include "EYGenericClaimableOrigin.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YClaimGenericClaimableDataResponse.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGenericClaimableDataResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGenericClaimableOrigin Origin;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClaimGenericClaimableDataResponseType responseType;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> GrantedItems;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> currencyBalances;

    BACKENDMODELS_API FYClaimGenericClaimableDataResponse();
};
