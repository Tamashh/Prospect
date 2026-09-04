#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedSeasonData.h"
#include "YPlayersRankedSeasonData.h"
#include "YRankSeasonsData.h"
#include "YGetBatchedRankedSeasonsResponse.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYGetBatchedRankedSeasonsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRankSeasonsData hofData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayersRankedSeasonData topNPlayersActiveRankedSeason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayerRankedSeasonData localPlayerRankedSeasonData;
    
    FYGetBatchedRankedSeasonsResponse();
};

