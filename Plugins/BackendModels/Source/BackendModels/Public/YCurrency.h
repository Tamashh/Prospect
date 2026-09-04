#pragma once
#include "CoreMinimal.h"
#include "YCurrency.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYCurrency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 hardCurrency;
    
    FYCurrency();
};

