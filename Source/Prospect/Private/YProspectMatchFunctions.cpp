#include "YProspectMatchFunctions.h"

UYProspectMatchFunctions::UYProspectMatchFunctions() {
}

void UYProspectMatchFunctions::UpdateCharacterSelectionFinished(const UObject* objectContext, bool finishedCharacterSelection) {
}

bool UYProspectMatchFunctions::IsShowLoadingOverlay(const UObject* objectContext) {
    return false;
}

bool UYProspectMatchFunctions::IsPersistentMatch(const UObject* objectContext) {
    return false;
}

bool UYProspectMatchFunctions::IsInTutorial(const UObject* objectContext, const FString& contextString) {
    return false;
}

bool UYProspectMatchFunctions::IsInMatch(const UObject* objectContext, const FString& contextString) {
    return false;
}

bool UYProspectMatchFunctions::IsInLobby(const UObject* objectContext) {
    return false;
}

bool UYProspectMatchFunctions::IsInCharacterSelection(const UObject* objectContext, const FString& contextString) {
    return false;
}

bool UYProspectMatchFunctions::IsInBeginnerMatch(const UObject* objectContext, const FString& contextString) {
    return false;
}

bool UYProspectMatchFunctions::IsCharacterSelectionFinished(const UObject* objectContext) {
    return false;
}

EYMatchState UYProspectMatchFunctions::FindMatchState(const UObject* objectContext, const FString& contextString) {
    return EYMatchState::EnteringMap;
}


