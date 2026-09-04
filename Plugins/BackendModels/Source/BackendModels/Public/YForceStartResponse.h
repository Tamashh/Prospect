#pragma once
#include "CoreMinimal.h"
#include "EYForceStartResult.h"
#include "YForceStartResponse.generated.h"

USTRUCT(BlueprintType)
struct FYForceStartResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYForceStartResult Error;
    
    BACKENDMODELS_API FYForceStartResponse();
};

