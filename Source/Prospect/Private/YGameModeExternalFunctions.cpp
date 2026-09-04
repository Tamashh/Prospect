#include "YGameModeExternalFunctions.h"

UYGameModeExternalFunctions::UYGameModeExternalFunctions() {
}

bool UYGameModeExternalFunctions::IsTravelingPostAuthorization(const UObject* objectContext) {
    return false;
}

bool UYGameModeExternalFunctions::IsMatchSpecificInformationEnabled(const UObject* objectContext) {
    return false;
}

bool UYGameModeExternalFunctions::IsInStation(const UObject* objectContext) {
    return false;
}

bool UYGameModeExternalFunctions::IsInMultiPlayerStation(const UObject* objectContext) {
    return false;
}

bool UYGameModeExternalFunctions::IsInMatch(const UObject* objectContext) {
    return false;
}

bool UYGameModeExternalFunctions::IsInCharacterSelection(const UObject* objectContext) {
    return false;
}

TArray<FYPlayerStartCluster> UYGameModeExternalFunctions::GeneratePlayerStartClusters(const UObject* WorldContextObject, AActor* testActor) {
    return TArray<FYPlayerStartCluster>();
}

void UYGameModeExternalFunctions::ForceTransitionToTutorial(UObject* objectContext) {
}

void UYGameModeExternalFunctions::ForceTransitionToStation(UObject* objectContext) {
}

void UYGameModeExternalFunctions::ForceTransitionToCharacterSelection(UObject* objectContext) {
}

bool UYGameModeExternalFunctions::FindQuestItemRow(const FDataTableRowHandle rowHandle, FYQuestItemRow& outItemRow) {
    return false;
}

FString UYGameModeExternalFunctions::FindGameModeName(const UObject* objectContext) {
    return TEXT("");
}

FVector UYGameModeExternalFunctions::FindDropPodSpawnLocation(const FVector StartLocation, const FRotator startRotation, const UObject* contextObject, const AActor* actorContext) {
    return FVector{};
}

FString UYGameModeExternalFunctions::FindCurrentRegion() {
    return TEXT("");
}

EYPresencePlayerState UYGameModeExternalFunctions::FindCurrentPresenceState(const UObject* objectContext) {
    return EYPresencePlayerState::IN_STATION;
}

AActor* UYGameModeExternalFunctions::ChoosePlayerStart(const FYSelectPlayerStart& Data) {
    return NULL;
}


