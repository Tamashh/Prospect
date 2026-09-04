#pragma once
#include "CoreMinimal.h"
#include "EYSeasonWipeCheckResult.h"
#include "YCheckAndPerformSeasonWipeIfNeededResult.generated.h"

USTRUCT(BlueprintType)
struct FYCheckAndPerformSeasonWipeIfNeededResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYSeasonWipeCheckResult Result;
    
    YPLATFORMUTILS_API FYCheckAndPerformSeasonWipeIfNeededResult();
};

