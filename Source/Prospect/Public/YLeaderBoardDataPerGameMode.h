#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YRankEntries.h"
#include "YLeaderBoardDataPerGameMode.generated.h"

USTRUCT(BlueprintType)
struct FYLeaderBoardDataPerGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameModeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FYRankEntries m_leaderBoardData;
    
    PROSPECT_API FYLeaderBoardDataPerGameMode();
};

