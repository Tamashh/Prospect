#pragma once
#include "CoreMinimal.h"
#include "YDebugResetFactionProgressRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugResetFactionProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    BACKENDMODELS_API FYDebugResetFactionProgressRequest();
};

