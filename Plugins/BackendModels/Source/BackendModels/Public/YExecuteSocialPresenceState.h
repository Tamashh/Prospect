#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "YExecuteSocialPresenceState.generated.h"

USTRUCT(BlueprintType)
struct FYExecuteSocialPresenceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPresencePlayerState State;
    
    BACKENDMODELS_API FYExecuteSocialPresenceState();
};

