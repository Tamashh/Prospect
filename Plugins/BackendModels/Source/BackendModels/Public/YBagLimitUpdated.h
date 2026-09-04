#pragma once
#include "CoreMinimal.h"
#include "YBagLimitUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYBagLimitUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bagLimit;
    
    BACKENDMODELS_API FYBagLimitUpdated();
};

