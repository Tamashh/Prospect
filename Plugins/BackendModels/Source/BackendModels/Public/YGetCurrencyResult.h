#pragma once
#include "CoreMinimal.h"
#include "EYGetCurrencyResult.h"
#include "YCurrency.h"
#include "YGetCurrencyResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetCurrencyResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYCurrency Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGetCurrencyResult Result;
    
    BACKENDMODELS_API FYGetCurrencyResult();
};

