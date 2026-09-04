#pragma once
#include "CoreMinimal.h"
#include "EYClaimGrantResult.h"
#include "YGrant.h"
#include "YClaimGrantsResponseInfo.generated.h"

USTRUCT(BlueprintType)
struct FYClaimGrantsResponseInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYClaimGrantResult claimGrantResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYGrant grant;
    
    BACKENDMODELS_API FYClaimGrantsResponseInfo();
};

