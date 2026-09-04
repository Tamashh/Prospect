#pragma once
#include "CoreMinimal.h"
#include "YDebugResetActionNumOfTimesExecutedRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetActionNumOfTimesExecutedRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionId;
    
    BACKENDMODELS_API FYDebugResetActionNumOfTimesExecutedRequest();
};

