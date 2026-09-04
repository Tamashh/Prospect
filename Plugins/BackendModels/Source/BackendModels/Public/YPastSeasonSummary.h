#pragma once
#include "CoreMinimal.h"
#include "YPlayersRankedSeasonData.h"
#include "YPastSeasonSummary.generated.h"

USTRUCT(BlueprintType)
struct BACKENDMODELS_API FYPastSeasonSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString seasonId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYPlayersRankedSeasonData Summary;
    
    FYPastSeasonSummary();
};

