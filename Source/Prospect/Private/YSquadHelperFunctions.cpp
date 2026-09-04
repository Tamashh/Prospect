#include "YSquadHelperFunctions.h"

UYSquadHelperFunctions::UYSquadHelperFunctions() {
}

bool UYSquadHelperFunctions::TryGetSquadSecretLeaderName(const UObject* WorldContext, FString& leaderName) {
    return false;
}

FText UYSquadHelperFunctions::SquadActionResultToText(EYSquadActionResult squadActionResult) {
    return FText::GetEmpty();
}

void UYSquadHelperFunctions::RequestStartDeployFlow(const UObject* objectContext) {
}

void UYSquadHelperFunctions::RequestLeaveSquadModal(UObject* objectContext) {
}

void UYSquadHelperFunctions::RequestExitDeployFlow(const UObject* objectContext) {
}

void UYSquadHelperFunctions::RequestChangeMap(const UObject* objectContext, const FString& selectedMapName) {
}

bool UYSquadHelperFunctions::LeaveSquad(UObject* objectContext) {
    return false;
}

bool UYSquadHelperFunctions::IsUserInLocalSquad(const UObject* objectContext, const FString& UserId) {
    return false;
}

bool UYSquadHelperFunctions::IsSquadFull(const UObject* objectContext) {
    return false;
}

bool UYSquadHelperFunctions::IsPlayerInLocalSquad(AActor* playerContext) {
    return false;
}

bool UYSquadHelperFunctions::IsPlayerInGameSquad(AActor* playerContext) {
    return false;
}

bool UYSquadHelperFunctions::IsLocalPlayerSquadSecretLeader(const UObject* WorldContext) {
    return false;
}

bool UYSquadHelperFunctions::IsInSquad(const UObject* objectContext) {
    return false;
}

bool UYSquadHelperFunctions::IsAnyoneInTheSquadReadyForMatchmaking(const UObject* WorldContext) {
    return false;
}

bool UYSquadHelperFunctions::InviteToSquad(UObject* objectContext, const FString& targetUserId) {
    return false;
}

int32 UYSquadHelperFunctions::GetSquadSize(const UObject* objectContext) {
    return 0;
}

FText UYSquadHelperFunctions::GetSquadName(const EYSquadID squadId) {
    return FText::GetEmpty();
}

int32 UYSquadHelperFunctions::GetNumSquadMembersAliveOrEscaped(AActor* Context, const EYSquadID squadId) {
    return 0;
}

int32 UYSquadHelperFunctions::GetMaxSquadSize(const UObject* objectContext) {
    return 0;
}

bool UYSquadHelperFunctions::FindPendingInviteFromUser(UObject* objectContext, const FString& UserId, FString& outInviteId) {
    return false;
}

bool UYSquadHelperFunctions::DeclineSquadInvite(UObject* objectContext, const FString& inviteId) {
    return false;
}

bool UYSquadHelperFunctions::CanInviteToSquad(UObject* objectContext, const FString& UserId) {
    return false;
}

bool UYSquadHelperFunctions::AreSquadMembersReadyForMatchmaking(const UObject* WorldContext) {
    return false;
}

bool UYSquadHelperFunctions::AcceptSquadInvite(UObject* objectContext, const FString& inviteId) {
    return false;
}


