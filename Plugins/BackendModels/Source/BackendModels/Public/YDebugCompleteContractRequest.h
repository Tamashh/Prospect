#pragma once
#include "CoreMinimal.h"
#include "YDebugCompleteContractRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugCompleteContractRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    BACKENDMODELS_API FYDebugCompleteContractRequest();
};

