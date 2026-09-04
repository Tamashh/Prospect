#pragma once
#include "CoreMinimal.h"
#include "YDebugAddCurrency.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddCurrency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    BACKENDMODELS_API FYDebugAddCurrency();
};

