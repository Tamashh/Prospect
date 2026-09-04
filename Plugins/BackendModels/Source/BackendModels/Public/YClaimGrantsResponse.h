#pragma once
#include "CoreMinimal.h"
#include "YClaimGrantsResponseInfo.h"
#include "YClaimGrantsResponse.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGrantsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYClaimGrantsResponseInfo> claimGrantsResponseInfos;
    
    BACKENDMODELS_API FYClaimGrantsResponse();
};

