#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugReduceTechTreeUpgradeTimeResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReduceTechTreeUpgradeTimeResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 remaining;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugReduceTechTreeUpgradeTimeResult();
};

