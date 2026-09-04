#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YPlayerRankDataEntry.h"
#include "YPlayerLeaderBoardData.generated.h"

USTRUCT(BlueprintType)
struct FYPlayerLeaderBoardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EYMatchmakeGameModeType, FYPlayerRankDataEntry> m_playerRankData;
    
    PROSPECT_API FYPlayerLeaderBoardData();
};

