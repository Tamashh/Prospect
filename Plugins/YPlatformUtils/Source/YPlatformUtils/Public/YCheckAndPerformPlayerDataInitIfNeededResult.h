#pragma once
#include "CoreMinimal.h"
#include "EYPlayerDataInitResult.h"
#include "YCheckAndPerformPlayerDataInitIfNeededResult.generated.h"

USTRUCT(BlueprintType)
struct FYCheckAndPerformPlayerDataInitIfNeededResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPlayerDataInitResult Result;
    
    YPLATFORMUTILS_API FYCheckAndPerformPlayerDataInitIfNeededResult();
};

