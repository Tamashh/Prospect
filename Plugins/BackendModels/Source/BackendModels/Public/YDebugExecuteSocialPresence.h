#pragma once
#include "CoreMinimal.h"
#include "EYPresencePlayerState.h"
#include "YDebugExecuteSocialPresence.generated.h"

USTRUCT(BlueprintType)
struct FYDebugExecuteSocialPresence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYPresencePlayerState State;
    
    BACKENDMODELS_API FYDebugExecuteSocialPresence();
};

