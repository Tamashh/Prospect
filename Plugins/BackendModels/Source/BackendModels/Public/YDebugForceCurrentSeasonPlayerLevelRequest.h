#pragma once
#include "CoreMinimal.h"
#include "YDebugForceCurrentSeasonPlayerLevelRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugForceCurrentSeasonPlayerLevelRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewLevel;
    
    BACKENDMODELS_API FYDebugForceCurrentSeasonPlayerLevelRequest();
};

