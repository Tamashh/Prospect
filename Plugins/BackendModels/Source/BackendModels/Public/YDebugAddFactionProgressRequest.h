#pragma once
#include "CoreMinimal.h"
#include "YDebugAddFactionProgressRequest.generated.h"

USTRUCT(BlueprintType)
struct FYDebugAddFactionProgressRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString factionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 reputationIncrement;
    
    BACKENDMODELS_API FYDebugAddFactionProgressRequest();
};

