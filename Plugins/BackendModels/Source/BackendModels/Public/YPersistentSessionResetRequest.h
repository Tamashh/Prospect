#pragma once
#include "CoreMinimal.h"
#include "YPersistentSessionResetRequest.generated.h"

USTRUCT(BlueprintType)
struct FYPersistentSessionResetRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString desiredRegion;
    
    BACKENDMODELS_API FYPersistentSessionResetRequest();
};

