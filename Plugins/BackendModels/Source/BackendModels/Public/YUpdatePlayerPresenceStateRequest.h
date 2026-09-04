#pragma once
#include "CoreMinimal.h"
#include "YUpdatePlayerPresenceStateRequest.generated.h"

USTRUCT(BlueprintType)
struct FYUpdatePlayerPresenceStateRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool inMatch;
    
    BACKENDMODELS_API FYUpdatePlayerPresenceStateRequest();
};

