#pragma once
#include "CoreMinimal.h"
#include "YCurrencyItem.h"
#include "YUserCurrenciesItems.generated.h"

USTRUCT(BlueprintType)
struct FYUserCurrenciesItems {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYCurrencyItem> currencies;
    
    BACKENDMODELS_API FYUserCurrenciesItems();
};

