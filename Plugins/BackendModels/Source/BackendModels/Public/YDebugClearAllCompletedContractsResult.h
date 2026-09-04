#pragma once
#include "CoreMinimal.h"
#include "YDebugClearAllCompletedContractsResult.generated.h"

USTRUCT(BlueprintType)
struct FYDebugClearAllCompletedContractsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Error;
    
    BACKENDMODELS_API FYDebugClearAllCompletedContractsResult();
};

