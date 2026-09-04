#pragma once
#include "CoreMinimal.h"
#include "YDebugReduceTechTreeUpgradeTime.generated.h"

USTRUCT(BlueprintType)
struct FYDebugReduceTechTreeUpgradeTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Duration;
    
    BACKENDMODELS_API FYDebugReduceTechTreeUpgradeTime();
};

