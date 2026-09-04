#pragma once
#include "CoreMinimal.h"
#include "YGetTopNPlayersActiveRankedSeasonRequest.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetTopNPlayersActiveRankedSeasonRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 numTopPlayers;
    
    FYGetTopNPlayersActiveRankedSeasonRequest();
};

