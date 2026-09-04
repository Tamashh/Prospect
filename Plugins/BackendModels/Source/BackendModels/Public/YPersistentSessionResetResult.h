#pragma once
#include "CoreMinimal.h"
#include "YPersistentSessionResetResult.generated.h"

USTRUCT(BlueprintType)
struct FYPersistentSessionResetResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool success;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numServersShutdown;
    
    BACKENDMODELS_API FYPersistentSessionResetResult();
};

