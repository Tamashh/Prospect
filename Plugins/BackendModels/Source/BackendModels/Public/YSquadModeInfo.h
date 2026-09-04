#pragma once
#include "CoreMinimal.h"
#include "YRoomPlayer.h"
#include "YRoomSquad.h"
#include "YSquadModeInfo.generated.h"

USTRUCT(BlueprintType)
struct FYSquadModeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRoomSquad> squads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRoomPlayer> users;
    
    BACKENDMODELS_API FYSquadModeInfo();
};

