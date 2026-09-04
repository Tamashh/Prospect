#include "YFactionsProgressUtils.h"

UYFactionsProgressUtils::UYFactionsProgressUtils() {
}

bool UYFactionsProgressUtils::TryGetPlayerFactionProgressUIData(UObject* wrldCtx, const FYUpdatedFactionProgression& Data, FYPlayerFactionProgressionUIData& playerFactionProgressionUIData) {
    return false;
}

bool UYFactionsProgressUtils::TryGetNextLevelFactionUnlocks(UObject* worldCtx, const FString& factionId, int32 currentFactionLevel, TArray<FString>& outRewards) {
    return false;
}

bool UYFactionsProgressUtils::TryGetFactionLocalCachedData(AActor* actorCtx, const FString& factionId, FYPlayerFactionProgressionUIData& playerFactionProgressionUIData) {
    return false;
}

bool UYFactionsProgressUtils::TryGetFactionId(UObject* WorldContext, const FString& factionProgressionString, FString& factionIdOut) {
    return false;
}

int32 UYFactionsProgressUtils::SetFactionProgressionLocalData(AActor* actorCtx, const FYUpdateFactionProgressionLocal& playerFactionProgressionLocal) {
    return 0;
}

FString UYFactionsProgressUtils::GetFactionUnlockID(const FString& factionId, int32 specificLevel) {
    return TEXT("");
}

EYFaction UYFactionsProgressUtils::GetFactionEnumFromString(const FString& factionId) {
    return EYFaction::Invalid;
}

EYFaction UYFactionsProgressUtils::GetFactionEnumFromName(const FName& factionId) {
    return EYFaction::Invalid;
}

bool UYFactionsProgressUtils::FindFactionRewardData(UObject* worldCtx, const FString& factionId, int32 specificLevel, FYFactionUnlockRewards& outRewardData) {
    return false;
}


