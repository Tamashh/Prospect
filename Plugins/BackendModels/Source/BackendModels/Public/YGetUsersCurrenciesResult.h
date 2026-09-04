#pragma once
#include "CoreMinimal.h"
#include "EYGetUsersCurrenciesResult.h"
#include "YUserCurrenciesItems.h"
#include "YGetUsersCurrenciesResult.generated.h"

USTRUCT(BlueprintType)
struct FYGetUsersCurrenciesResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYGetUsersCurrenciesResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYUserCurrenciesItems> currencyItems;
    
    BACKENDMODELS_API FYGetUsersCurrenciesResult();
};

