#pragma once
#include "CoreMinimal.h"
#include "YDebugClearSpecificCompletedContractResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugClearSpecificCompletedContractResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYDebugClearSpecificCompletedContractResult();
};

