#pragma once
#include "CoreMinimal.h"
#include "YListPersistentSessionRequestsResult.generated.h"

USTRUCT(BlueprintType)
struct FYListPersistentSessionRequestsResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numServersShutdown;
    
    BACKENDMODELS_API FYListPersistentSessionRequestsResult();
};

