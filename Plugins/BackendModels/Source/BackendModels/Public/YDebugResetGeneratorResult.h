#pragma once
#include "CoreMinimal.h"
#include "EYCheatResult.h"
#include "YDebugResetGeneratorResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetGeneratorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString generatorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYCheatResult Status;
    
    BACKENDMODELS_API FYDebugResetGeneratorResult();
};

