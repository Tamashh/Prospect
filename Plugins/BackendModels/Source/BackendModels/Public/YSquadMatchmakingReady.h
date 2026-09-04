#pragma once
#include "CoreMinimal.h"
#include "YUserMatchmakingSettings.h"
#include "YSquadMatchmakingReady.generated.h"

USTRUCT(BlueprintType)
struct FYSquadMatchmakingReady {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString squadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYUserMatchmakingSettings matchmakingSettings;
    
    BACKENDMODELS_API FYSquadMatchmakingReady();
};

