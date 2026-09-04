#include "YGeneratorsUtils.h"

UYGeneratorsUtils::UYGeneratorsUtils() {
}

FText UYGeneratorsUtils::RewardToText(EYPassiveGeneratorRewardType generatorRewardType) {
    return FText::GetEmpty();
}

FTimespan UYGeneratorsUtils::GetTimespanUntilNextPassiveGeneratorReward(UObject* WorldContext, const FString& contextString, const FName& generatorId) {
    return FTimespan{};
}

TArray<FYPassiveGenerator> UYGeneratorsUtils::GetPassiveGenerators(const UObject* WorldContext) {
    return TArray<FYPassiveGenerator>();
}

int32 UYGeneratorsUtils::GetMaxClaimableAmountForPassiveGenerator(UObject* WorldContext, const FString& contextString, const FName& generatorId) {
    return 0;
}

FYUIDailyCrateTimerInfo UYGeneratorsUtils::GetGeneratorTimerInfo(UObject* WorldContext, const FYGeneratorInfo& Generator) {
    return FYUIDailyCrateTimerInfo{};
}

float UYGeneratorsUtils::GetEffectiveGenRateForPassiveGenerator(UObject* WorldContext, const FString& callerContext, const FName& generatorId) {
    return 0.0f;
}

int32 UYGeneratorsUtils::GetCurrentDailyCrateLevel(UObject* WorldContext, const FString& contextString) {
    return 0;
}

float UYGeneratorsUtils::GetCurrentClaimableAmountForPassiveGenerator(UObject* WorldContext, const FString& contextString, const FName& generatorId) {
    return 0.0f;
}

bool UYGeneratorsUtils::GetCrateItems(UObject* WorldContext, int32 crateLevel, TArray<FYRewardDataTableRow>& crateItems) {
    return false;
}

bool UYGeneratorsUtils::FindPassiveGeneratorRow(const UObject* objectContext, const FString& contextString, const FName& rowId, FYGeneratorRow& outPassiveGeneratorRow) {
    return false;
}

bool UYGeneratorsUtils::ClaimPassiveGeneratorIncome(UObject* WorldContext, const FName& generatorId) {
    return false;
}


