#include "YProspectorLevelFunctionsLibrary.h"

UYProspectorLevelFunctionsLibrary::UYProspectorLevelFunctionsLibrary() {
}

int32 UYProspectorLevelFunctionsLibrary::GetTotalRequiredProspectorLevelXPForNextLevel(UObject* objectContext, int32 Level) {
    return 0;
}

FText UYProspectorLevelFunctionsLibrary::GetTitleByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData) {
    return FText::GetEmpty();
}

int32 UYProspectorLevelFunctionsLibrary::GetRequiredProspectorLevelXPForNextLevel(UObject* objectContextn, int32 Level) {
    return 0;
}

bool UYProspectorLevelFunctionsLibrary::GetProspectorLevelRewardRowByLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData) {
    return false;
}

bool UYProspectorLevelFunctionsLibrary::GetProspectorLevelProgressionRowByLevel(UObject* objectContext, int32 Level, FYProspectorLevelProgressionDataTableRow& outData) {
    return false;
}

FText UYProspectorLevelFunctionsLibrary::GetNextUnlockableTitle(UObject* objectContext, FYProspectorLevelRewardsDataTableRow& outData, bool& isThereATitleToUnlockNext) {
    return FText::GetEmpty();
}

TSoftObjectPtr<UTexture2D> UYProspectorLevelFunctionsLibrary::GetNextUnlockableBorder(UObject* objectContext, FYProspectorLevelRewardsDataTableRow& outData, bool& isThereABorderToUnlockNext) {
    return NULL;
}

int32 UYProspectorLevelFunctionsLibrary::GetMissingProspectorLevelXPForLevelUp(UObject* objectContext) {
    return 0;
}

TSoftObjectPtr<UTexture2D> UYProspectorLevelFunctionsLibrary::GetIconByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData) {
    return NULL;
}

int32 UYProspectorLevelFunctionsLibrary::GetCurrentProspectorLevelXP(UObject* objectContext) {
    return 0;
}

int32 UYProspectorLevelFunctionsLibrary::GetCurrentProspectorLevelByName(UObject* objectContext, const FString& Username) {
    return 0;
}

int32 UYProspectorLevelFunctionsLibrary::GetCurrentProspectorLevelByInternalUserId(UObject* objectContext, const FString& UserId) {
    return 0;
}

int32 UYProspectorLevelFunctionsLibrary::GetCurrentProspectorLevel(UObject* objectContext) {
    return 0;
}

TSoftObjectPtr<UTexture2D> UYProspectorLevelFunctionsLibrary::GetBorderByProspectorLevel(UObject* objectContext, int32 Level, FYProspectorLevelRewardsDataTableRow& outData) {
    return NULL;
}

int32 UYProspectorLevelFunctionsLibrary::CalculateRequiredProspectorLevelXPForNextLevel(UObject* objectContext, int32 Level) {
    return 0;
}


