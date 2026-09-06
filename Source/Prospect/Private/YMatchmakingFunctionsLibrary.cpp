#include "YMatchmakingFunctionsLibrary.h"

UYMatchmakingFunctionsLibrary::UYMatchmakingFunctionsLibrary() {
}

void UYMatchmakingFunctionsLibrary::SetSelectedMapId(const UObject* objectContext, const FName& mapInfoRowId) {
}

void UYMatchmakingFunctionsLibrary::SetReadyForMatch(const UObject* objectContext, const bool isReadyForMatch) {
}

void UYMatchmakingFunctionsLibrary::SetIsSecretLeader(const UObject* objectContext, bool isSecretLeader) {
}

UDataTable* UYMatchmakingFunctionsLibrary::RetrieveGameModesDataTable(const UObject* objectContext) {
    return NULL;
}

FText UYMatchmakingFunctionsLibrary::MatchMapDifficultyToText(const EYMatchMapDifficulty difficulty) {
    return FText::GetEmpty();
}

FText UYMatchmakingFunctionsLibrary::MatchmakingResultToText(EYMatchmakingResult matchmakingResult) {
    return FText::GetEmpty();
}

bool UYMatchmakingFunctionsLibrary::IsUserReadyForMatchmaking(const UObject* objectContext) {
    return false;
}

bool UYMatchmakingFunctionsLibrary::IsMatchMapEnabled(const UObject* objectContext, const FString& fullMapName) {
    return false;
}

bool UYMatchmakingFunctionsLibrary::IsMatchmakingLockForMatchActive(const UObject* objectContext) {
    return false;
}

FYMapUnlockStatus UYMatchmakingFunctionsLibrary::IsMapUnlocked(UObject* playerContextObject, FDataTableRowHandle mapRowHandle) {
    return FYMapUnlockStatus{};
}

bool UYMatchmakingFunctionsLibrary::IsAbleToClickMatchmakingButton(const UObject* objectContext) {
    return false;
}

FString UYMatchmakingFunctionsLibrary::GetStringFromGameMode(EYMatchmakeGameModeType gameModeType) {
    return TEXT("");
}

FName UYMatchmakingFunctionsLibrary::GetSelectedMapId(const UObject* objectContext) {
    return NAME_None;
}

bool UYMatchmakingFunctionsLibrary::GetMapUnlockInfoForRow(UObject* playerContextObject, FDataTableRowHandle mapRowHandle, FYMapUnlockInfo& mapUnlockInfoOut) {
    return false;
}

FText UYMatchmakingFunctionsLibrary::GetGameModeTextFromGameModeType(const UObject* objectContext, EYMatchmakeGameModeType gameModeType) {
    return FText::GetEmpty();
}

FText UYMatchmakingFunctionsLibrary::GetGameModeTextFromGameMode(const UObject* objectContext, const FString& GameMode) {
    return FText::GetEmpty();
}

bool UYMatchmakingFunctionsLibrary::FindRelevantMatchmakingSetup(const UObject* objectContext, FYMatchmakingSetupEntry& outSetupEntry) {
    return false;
}

bool UYMatchmakingFunctionsLibrary::FindMatchmakingSetupForMatchMap(const UObject* objectContext, const FString& fullMapName, FYMatchmakingSetupMatchEntry& outSetupEntry) {
    return false;
}

bool UYMatchmakingFunctionsLibrary::FindMatchmakingSettings(const UObject* objectContext, FYMatchmakingSetupRow& outSetupRow) {
    return false;
}

UYMatchmakingManager* UYMatchmakingFunctionsLibrary::FindMatchmakingManager(const UObject* objectContext) {
    return NULL;
}

EYMatchmakeGameModeType UYMatchmakingFunctionsLibrary::ConvertStringToGameModeEnum(const FString& gameModeAsFString) {
    return EYMatchmakeGameModeType::NONE;
}

bool UYMatchmakingFunctionsLibrary::CanMatchmake(const UObject* objectContext) {
    return false;
}


