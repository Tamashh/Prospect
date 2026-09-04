#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YCurrenciesUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYCurrenciesUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> updatedCurrencies;
    
    BACKENDMODELS_API FYCurrenciesUpdated();
};

