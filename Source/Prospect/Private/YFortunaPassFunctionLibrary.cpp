#include "YFortunaPassFunctionLibrary.h"

UYFortunaPassFunctionLibrary::UYFortunaPassFunctionLibrary() {
}

void UYFortunaPassFunctionLibrary::UpdateSeasonWipeData(const UObject* ctxObj) {
}

bool UYFortunaPassFunctionLibrary::TryGetActionConfigData(const UObject* worldCtx, const FString& ActionId, FYFortunaPassAction& actionOut) {
    return false;
}

void UYFortunaPassFunctionLibrary::RequestSkipPassLevels(const UObject* ctxObj, const int32& levelToSkip) {
}

void UYFortunaPassFunctionLibrary::RequestSeasonWipeData(const UObject* ctxObj) {
}

void UYFortunaPassFunctionLibrary::RequestClaimRewards(const UObject* ctxObj, const TArray<FName>& rewardsIds) {
}

bool UYFortunaPassFunctionLibrary::IsSeasonActiveForSpecificDateTime(const FYSeasonRow& seasonRow, const FDateTime& nowTime) {
    return false;
}

bool UYFortunaPassFunctionLibrary::IsFortunaPassPremiumUnlocked(const UObject* ctxObj) {
    return false;
}

bool UYFortunaPassFunctionLibrary::HasEnoughStashSpaceForFortunaPassRewards(const AActor* ctxActor, const TArray<FName>& rewardsIds) {
    return false;
}

FTimespan UYFortunaPassFunctionLibrary::GetTimeDifferenceBetweenNow(const UObject* ctxObj, const FYTimestamp& Timestamp) {
    return FTimespan{};
}

FText UYFortunaPassFunctionLibrary::GetRemainingSeasonTimeTextFormatted(const UObject* ctxObj) {
    return FText::GetEmpty();
}

FTimespan UYFortunaPassFunctionLibrary::GetRemainingSeasonTime(const UObject* ctxObj) {
    return FTimespan{};
}

bool UYFortunaPassFunctionLibrary::GetNextSeasonStartTimeUtc(const UObject* ctxObj, FDateTime& startTimeUtc) {
    return false;
}

FText UYFortunaPassFunctionLibrary::GetFortunaPassRewardTypeText(const UObject* ctxObj, const FYFortunaPassReward& reward) {
    return FText::GetEmpty();
}

EYItemRarityType UYFortunaPassFunctionLibrary::GetFortunaPassRewardRarity(const UObject* ctxObj, const FYFortunaPassReward& reward) {
    return EYItemRarityType::Invalid;
}

bool UYFortunaPassFunctionLibrary::GetFortunaPassLevelForXpAmount(const UObject* ctxObj, int32 xpAmount, int32& calculatedLevel) {
    return false;
}

bool UYFortunaPassFunctionLibrary::GetCurrentSeasonPremiumTrackUnlockCost(const UObject* ctxObj, bool withSkipLevels, int32& resultCost) {
    return false;
}

bool UYFortunaPassFunctionLibrary::GetCurrentSeasonEndTimeUtc(const UObject* ctxObj, FDateTime& endTimeUtc) {
    return false;
}

int32 UYFortunaPassFunctionLibrary::GetCurrentFortunaPassSeasonXp(const UObject* ctxObj) {
    return 0;
}

bool UYFortunaPassFunctionLibrary::GetCurrentAndNextFortunaPassLevelsXp(const UObject* ctxObj, const FString& callerContext, FYCurrentNextLevelData& currentNextLevelData) {
    return false;
}

bool UYFortunaPassFunctionLibrary::GetClaimedFortunaPassRewards(const UObject* ctxObj, FYFortunaPassClaimedRewards& claimedRewardsIds) {
    return false;
}

TArray<FName> UYFortunaPassFunctionLibrary::GetClaimableRewards(const UObject* ctxObj) {
    return TArray<FName>();
}

FName UYFortunaPassFunctionLibrary::GetActiveFortunaPassSeasonRowId(const UObject* ctxObj) {
    return NAME_None;
}

FDataTableRowHandle UYFortunaPassFunctionLibrary::GetActiveFortunaPassSeasonRow(const UObject* ctxObj) {
    return FDataTableRowHandle{};
}

bool UYFortunaPassFunctionLibrary::GetActiveFortunaPassSeasonLevelsRows(const UObject* ctxObj, TArray<FYFortunaPassLevel>& outLevels) {
    return false;
}

int32 UYFortunaPassFunctionLibrary::ComputePremiumXpBoost(const AActor* Owner, const FYFortunaPassPlayerData& fortunaPassPlayerData) {
    return 0;
}


