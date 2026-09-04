#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.h"
#include "UObject/Object.h"
#include "YLeaderBoardData.h"
#include "YPlayerRankDataEntry.h"
#include "YRankEntries.h"
#include "YRankedSeasonData.h"
#include "YRankedExternalFunctions.generated.h"

class AYPlayerState;

UCLASS(Blueprintable)
class UYRankedExternalFunctions : public UObject {
    GENERATED_BODY()
public:
    UYRankedExternalFunctions();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRankedMode(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsRankedFeatureDisabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetStartRank(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetSquadAverage(UObject* WorldContextObject, AYPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FYRankedSeasonData GetSeasonDataForSeasonId(UObject* WorldContextObject, const FString& seasonId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetRankName(UObject* WorldContextObject, int32 rank, const FString& Context, FString& rankName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetRankBounds(UObject* WorldContextObject, int32 rank, int32& LowerBound, int32& UpperBound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetMatchRank(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetInitialMatchRank(UObject* WorldContextObject, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetIndexOfLocalPlayer(const FYRankEntries& leaderboardForGameModeData);
    
    UFUNCTION(BlueprintCallable)
    static TArray<EYMatchmakeGameModeType> GetCurrentActiveRankedGameModes(const UObject* objectContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAverageRankForPlayerStates(TArray<AYPlayerState*> playerStates, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAveragePreviousRankForPlayerStates(TArray<AYPlayerState*> playerStates, const FString& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool FindRankEntriesForGameMode(FYLeaderBoardData leaderBoardData, EYMatchmakeGameModeType gameModeType, TArray<FYPlayerRankDataEntry>& rankEntries);
    
};

