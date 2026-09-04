#include "YStatsManager.h"

UYStatsManager::UYStatsManager() {
}

void UYStatsManager::SetStatsDirty() {
}

void UYStatsManager::OnFetchPlayerStatisticsResult(const FString& UserId, const FYGetPlayerStatisticsResponse& azureResult) {
}

float UYStatsManager::GetStatSumForAllSeasons(const FString& statName) const {
    return 0.0f;
}

float UYStatsManager::GetPlayerStatistic(const FString& statName, const int32 season) const {
    return 0.0f;
}

FString UYStatsManager::GetAllPlayerStatisticAsJsonString() const {
    return TEXT("");
}

UYStatsManager* UYStatsManager::Get(const UObject* WorldContext, EYGetErrorHandling errorHandling) {
    return NULL;
}

void UYStatsManager::FetchAllPlayFabStats(UObject* objCtx, bool checkDirty) {
}

bool UYStatsManager::AreStatsDirty() const {
    return false;
}


