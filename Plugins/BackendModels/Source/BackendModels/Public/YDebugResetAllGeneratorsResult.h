#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugResetAllGeneratorsResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetAllGeneratorsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugResetAllGeneratorsResult();
};

