#pragma once
#include "CoreMinimal.h"
#include "YGameServerRequest.h"
#include "YTryDetectVpnUsageRequest.generated.h"

USTRUCT(BlueprintType)
struct FYTryDetectVpnUsageRequest : public FYGameServerRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ipAddress;
    
    BACKENDMODELS_API FYTryDetectVpnUsageRequest();
};

