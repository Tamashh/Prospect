#pragma once
#include "CoreMinimal.h"
#include "YDebugActivateContractRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugActivateContractRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYDebugActivateContractRequest();
};

