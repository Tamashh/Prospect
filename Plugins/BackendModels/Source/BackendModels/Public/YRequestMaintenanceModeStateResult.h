#pragma once
#include "CoreMinimal.h"
#include "YRequestMaintenanceModeStateResult.generated.h"

USTRUCT(BlueprintType)
struct FYRequestMaintenanceModeStateResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    BACKENDMODELS_API FYRequestMaintenanceModeStateResult();
};

