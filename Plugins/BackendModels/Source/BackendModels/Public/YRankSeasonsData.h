#pragma once
#include "CoreMinimal.h"
#include "YRankSeasonData.h"
#include "YRankSeasonsData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYRankSeasonsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYRankSeasonData> rankSeasons;
    
    FYRankSeasonsData();
};

