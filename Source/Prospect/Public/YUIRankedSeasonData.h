#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YRankEntries.h"
#include "YUIRankedSeasonData.generated.h"

USTRUCT(BlueprintType)
struct FYUIRankedSeasonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_seasonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYMatchmakeGameModeType, FYRankEntries> m_rankDataPerGameMode;
    
    PROSPECT_API FYUIRankedSeasonData();
};

