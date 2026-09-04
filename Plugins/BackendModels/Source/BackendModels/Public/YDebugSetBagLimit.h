#pragma once
#include "CoreMinimal.h"
#include "YDebugSetBagLimit.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetBagLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bagLimit;
    
    BACKENDMODELS_API FYDebugSetBagLimit();
};

