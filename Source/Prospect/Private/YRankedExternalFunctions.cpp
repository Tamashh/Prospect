#include "YRankedExternalFunctions.h"

UYRankedExternalFunctions::UYRankedExternalFunctions() {
}

bool UYRankedExternalFunctions::IsRankedMode(UObject* WorldContextObject, const FString& Context) {
    return false;
}

bool UYRankedExternalFunctions::IsRankedFeatureDisabled(UObject* WorldContextObject) {
    return false;
}

int32 UYRankedExternalFunctions::GetStartRank(UObject* WorldContextObject) {
    return 0;
}

int32 UYRankedExternalFunctions::GetSquadAverage(UObject* WorldContextObject, AYPlayerState* PlayerState) {
    return 0;
}

FYRankedSeasonData UYRankedExternalFunctions::GetSeasonDataForSeasonId(UObject* WorldContextObject, const FString& seasonId) {
    return FYRankedSeasonData{};
}

bool UYRankedExternalFunctions::GetRankName(UObject* WorldContextObject, int32 rank, const FString& Context, FString& rankName) {
    return false;
}

bool UYRankedExternalFunctions::GetRankBounds(UObject* WorldContextObject, int32 rank, int32& LowerBound, int32& UpperBound) {
    return false;
}

int32 UYRankedExternalFunctions::GetMatchRank(UObject* WorldContextObject, const FString& Context) {
    return 0;
}

int32 UYRankedExternalFunctions::GetInitialMatchRank(UObject* WorldContextObject, const FString& Context) {
    return 0;
}

int32 UYRankedExternalFunctions::GetIndexOfLocalPlayer(const FYRankEntries& leaderboardForGameModeData) {
    return 0;
}

TArray<EYMatchmakeGameModeType> UYRankedExternalFunctions::GetCurrentActiveRankedGameModes(const UObject* objectContext) {
    return TArray<EYMatchmakeGameModeType>();
}

int32 UYRankedExternalFunctions::GetAverageRankForPlayerStates(TArray<AYPlayerState*> playerStates, const FString& Context) {
    return 0;
}

int32 UYRankedExternalFunctions::GetAveragePreviousRankForPlayerStates(TArray<AYPlayerState*> playerStates, const FString& Context) {
    return 0;
}

bool UYRankedExternalFunctions::FindRankEntriesForGameMode(FYLeaderBoardData leaderBoardData, EYMatchmakeGameModeType gameModeType, TArray<FYPlayerRankDataEntry>& rankEntries) {
    return false;
}


