#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugReduceCraftingTimeResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReduceCraftingTimeResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugReduceCraftingTimeResult();
};

