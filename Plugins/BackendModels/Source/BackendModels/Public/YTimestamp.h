#pragma once
#include "CoreMinimal.h"
#include "YTimestamp.generated.h"

USTRUCT(BlueprintType)
struct FYTimestamp {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Seconds;
    
    BACKENDMODELS_API FYTimestamp();
};

