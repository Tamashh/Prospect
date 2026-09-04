#pragma once
#include "CoreMinimal.h"
#include "YDebugForceCurrentSeasonPlayerLevelResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugForceCurrentSeasonPlayerLevelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYDebugForceCurrentSeasonPlayerLevelResult();
};

