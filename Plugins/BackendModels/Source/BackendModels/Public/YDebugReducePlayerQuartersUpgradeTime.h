#pragma once
#include "CoreMinimal.h"
#include "YDebugReducePlayerQuartersUpgradeTime.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReducePlayerQuartersUpgradeTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    BACKENDMODELS_API FYDebugReducePlayerQuartersUpgradeTime();
};

