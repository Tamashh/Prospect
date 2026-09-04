#pragma once
#include "CoreMinimal.h"
#include "EYRollbackCheckResult.h"
#include "YCheckAndPerformUserRollbackIfNeededResult.generated.h"

USTRUCT(BlueprintType)
struct FYCheckAndPerformUserRollbackIfNeededResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYRollbackCheckResult Result;
    
    YPLATFORMUTILS_API FYCheckAndPerformUserRollbackIfNeededResult();
};

