#pragma once
#include "CoreMinimal.h"
#include "YDebugSetStashLimit.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetStashLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 stashLimit;
    
    BACKENDMODELS_API FYDebugSetStashLimit();
};

