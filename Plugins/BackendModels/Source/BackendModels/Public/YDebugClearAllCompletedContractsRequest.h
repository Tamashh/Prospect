#pragma once
#include "CoreMinimal.h"
#include "YDebugClearAllCompletedContractsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugClearAllCompletedContractsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugClearAllCompletedContractsRequest();
};

