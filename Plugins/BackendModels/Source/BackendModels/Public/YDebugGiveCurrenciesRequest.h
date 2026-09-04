#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YDebugGiveCurrenciesRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugGiveCurrenciesRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString userPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> currencies;
    
    BACKENDMODELS_API FYDebugGiveCurrenciesRequest();
};

