#pragma once
#include "CoreMinimal.h"
#include "YUserMatchmakingSettings.h"
#include "YSquadMemberReadyUpNotification.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMemberReadyUpNotification {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUserMatchmakingSettings matchmakingSettings;
    
    BACKENDMODELS_API FYSquadMemberReadyUpNotification();
};

