#include "YTeamHelperFunctions.h"

UYTeamHelperFunctions::UYTeamHelperFunctions() {
}

bool UYTeamHelperFunctions::IsActorInSameTeamWithLocalPlayerOrLocallyControlled(AActor* actorContext, const FString& contextString) {
    return false;
}

bool UYTeamHelperFunctions::IsActorInSameTeamWithLocalPlayer(AActor* actorContext, const FString& contextString) {
    return false;
}

bool UYTeamHelperFunctions::IsActorInATeam(AActor* actorContext) {
    return false;
}

FYPlayerUITeamInfo UYTeamHelperFunctions::GetUITeamInfoForPlayer(AYPlayerState* PlayerState) {
    return FYPlayerUITeamInfo{};
}

EYTeam UYTeamHelperFunctions::FromGenericTeamToYTeam(const FGenericTeamId& TeamID) {
    return EYTeam::Compilexfix;
}

float UYTeamHelperFunctions::FindCurrencyShareMultiplierForSquad(AYPlayerState* PlayerState) {
    return 0.0f;
}

float UYTeamHelperFunctions::FindCurrencyMultiplierForTeamMembers(UObject* WorldContextObject) {
    return 0.0f;
}

TArray<AYPlayerState*> UYTeamHelperFunctions::FindAlliedPlayerStates(AActor* actorContext, bool onlyActivePlayers) {
    return TArray<AYPlayerState*>();
}

void UYTeamHelperFunctions::FindAlliedActors(AActor* actorContext, TArray<AActor*>& OutActors) {
}

float UYTeamHelperFunctions::FindActorTotalDBNOTime(AActor* actorContext) {
    return 0.0f;
}

int32 UYTeamHelperFunctions::CalculateCurrencySplit(AActor* actorContext, int32 currencyAmount, bool& outIsShared) {
    return 0;
}

bool UYTeamHelperFunctions::AreActorsInSameTeam(AActor* actorOne, AActor* actorTwo) {
    return false;
}


