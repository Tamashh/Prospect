#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugReducePlayerQuartersUpgradeTimeResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReducePlayerQuartersUpgradeTimeResult {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 remainingUpgradeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugReducePlayerQuartersUpgradeTimeResult();
};

