#pragma once
#include "CoreMinimal.h"
#include "YDebugResetActionNumOfTimesExecutedResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetActionNumOfTimesExecutedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString resetActionId;
    
    BACKENDMODELS_API FYDebugResetActionNumOfTimesExecutedResult();
};

