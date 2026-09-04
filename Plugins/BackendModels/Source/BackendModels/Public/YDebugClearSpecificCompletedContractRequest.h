#pragma once
#include "CoreMinimal.h"
#include "YDebugClearSpecificCompletedContractRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugClearSpecificCompletedContractRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYDebugClearSpecificCompletedContractRequest();
};

