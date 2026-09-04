#pragma once
#include "CoreMinimal.h"
#include "YPlayersRankedSeasonData.h"
#include "YPlayersRankedSeasonsData.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPlayersRankedSeasonsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> seasonIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FYPlayersRankedSeasonData> playersRankedSeasonsArray;
    
    FYPlayersRankedSeasonsData();
};

