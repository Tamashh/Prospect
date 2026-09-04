#pragma once
#include "CoreMinimal.h"
#include "YDebugSetActionNumOfTimesExecutedResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActionNumOfTimesExecutedResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString setActionId;
    
    BACKENDMODELS_API FYDebugSetActionNumOfTimesExecutedResult();
};

