#pragma once
#include "CoreMinimal.h"
#include "YDebugSetActiveContractProgressRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugSetActiveContractProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString contractId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 objectiveIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 newProgress;
    
    BACKENDMODELS_API FYDebugSetActiveContractProgressRequest();
};

