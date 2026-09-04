#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedSeasonGamemodeData.h"
#include "YRankSeasonData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYRankSeasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString seasonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerRankedSeasonGamemodeData> playersRankedSeasonData;
    
    FYRankSeasonData();
};

