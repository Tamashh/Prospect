#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCustomItemInfo.h"
#include "YClaimStarterPackResult.generated.h"

USTRUCT(BlueprintType)
struct FYClaimStarterPackResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCustomItemInfo> claimedStarterPackItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> changedCurrencies;
    
    PROSPECT_API FYClaimStarterPackResult();
};

