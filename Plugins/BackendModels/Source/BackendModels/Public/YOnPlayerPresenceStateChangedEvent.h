#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "YOnPlayerPresenceStateChangedEvent.generated.h"

USTRUCT(BlueprintType)
struct FYOnPlayerPresenceStateChangedEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPresencePlayerState presenceState;
    
    BACKENDMODELS_API FYOnPlayerPresenceStateChangedEvent();
};

