#pragma once
#include "CoreMinimal.h"
#include "YPlayerRankedSeasonGamemodeData.h"
#include "YPlayersRankedSeasonData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayersRankedSeasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayerRankedSeasonGamemodeData> playersRankedSeasonArray;
    
    FYPlayersRankedSeasonData();
};

