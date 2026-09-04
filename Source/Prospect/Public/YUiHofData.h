#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YRankEntries.h"
#include "YUiHofData.generated.h"

USTRUCT(BlueprintType)
struct FYUiHofData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_gameModeToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FYRankEntries> m_gameModeTopPlayersPerSeasons;
    
    PROSPECT_API FYUiHofData();
};

