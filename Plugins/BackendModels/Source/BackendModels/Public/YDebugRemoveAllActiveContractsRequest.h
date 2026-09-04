#pragma once
#include "CoreMinimal.h"
#include "YDebugRemoveAllActiveContractsRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugRemoveAllActiveContractsRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    BACKENDMODELS_API FYDebugRemoveAllActiveContractsRequest();
};

