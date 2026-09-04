#pragma once
#include "CoreMinimal.h"
#include "EYFortunaPassToastReponseType.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YFortunaPassClaimRewardsResult.generated.h"

USTRUCT(BlueprintType)
struct FYFortunaPassClaimRewardsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYFortunaPassToastReponseType errorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> GrantedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    BACKENDMODELS_API FYFortunaPassClaimRewardsResult();
};

