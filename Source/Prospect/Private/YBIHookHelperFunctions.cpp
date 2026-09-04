#include "YBIHookHelperFunctions.h"

UYBIHookHelperFunctions::UYBIHookHelperFunctions() {
}

bool UYBIHookHelperFunctions::IsInStation(const UObject* WorldContextObject) {
    return false;
}

bool UYBIHookHelperFunctions::IsInLobby(const UObject* WorldContextObject) {
    return false;
}

FString UYBIHookHelperFunctions::GetUniquePlayerIDAsString(AActor* actorContext) {
    return TEXT("");
}

int32 UYBIHookHelperFunctions::GetTimeSinceJoined(APlayerState* PlayerState) {
    return 0;
}

int32 UYBIHookHelperFunctions::GetMatchTimeInSeconds(const UObject* WorldContextObject) {
    return 0;
}

int32 UYBIHookHelperFunctions::GetLobbyTimeInSecondsServer(const UObject* WorldContextObject) {
    return 0;
}

FString UYBIHookHelperFunctions::FindSpecificGameContext(UObject* WorldContextObject) {
    return TEXT("");
}


