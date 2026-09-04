#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.generated.h"

USTRUCT(BlueprintType)
struct FYCurrencyItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString currencyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    BACKENDMODELS_API FYCurrencyItem();
};

