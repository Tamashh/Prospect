#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingDebugOption.h"
#include "YEnterMatchAzureFunction.h"
#include "YDebugEnterMatchAzureFunction.generated.h"

USTRUCT(BlueprintType)
struct FYDebugEnterMatchAzureFunction : public FYEnterMatchAzureFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakingDebugOption debugOption;
    
    BACKENDMODELS_API FYDebugEnterMatchAzureFunction();
};

