#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "YWidget.h"
#include "YRankEntries.h"
#include "YWidget_CurrentRankedSeasonTopPlayers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PROSPECT_API UYWidget_CurrentRankedSeasonTopPlayers : public UYWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_amountofTopPlayersToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EYMatchmakeGameModeType m_matchmakeGameModeType;
    
    UYWidget_CurrentRankedSeasonTopPlayers();

protected:
    UFUNCTION(BlueprintCallable)
    static bool CheckAndLogIfStringIsEmpty(const FString& Str);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCurrentSeasonDataReceived(const FYRankEntries& leaderboardForGamemode);
    
};

