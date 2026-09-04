#pragma once
#include "CoreMinimal.h"
#include "YDebugSetActionNumOfTimesExecutedRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActionNumOfTimesExecutedRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    BACKENDMODELS_API FYDebugSetActionNumOfTimesExecutedRequest();
};

