#pragma once
#include "CoreMinimal.h"
#include "YDebugReduceCraftingTimeRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReduceCraftingTimeRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    BACKENDMODELS_API FYDebugReduceCraftingTimeRequest();
};

