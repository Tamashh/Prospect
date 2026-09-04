#pragma once
#include "CoreMinimal.h"
#include "YStashLimitUpdated.generated.h"

USTRUCT(BlueprintType)
struct FYStashLimitUpdated {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stashLimit;
    
    BACKENDMODELS_API FYStashLimitUpdated();
};

