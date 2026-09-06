#include "YDamageFunctions.h"

UYDamageFunctions::UYDamageFunctions() {
}

FString UYDamageFunctions::RetrieveDamageOriginId(const FYDamageOriginInfo& damageOriginInfo) {
    return TEXT("");
}

void UYDamageFunctions::KillAllActors(TArray<AActor*> actors) {
}

bool UYDamageFunctions::IsTeamIdPlayer(const FGenericTeamId& damageTeamId) {
    return false;
}

bool UYDamageFunctions::IsFriendlyFireEnabled() {
    return false;
}

bool UYDamageFunctions::IsFriendlyFire(const FYDealtDamageData& damageDealt) {
    return false;
}

bool UYDamageFunctions::IsDamageDealtFromPlayer(const FYDealtDamageData& damageDealt) {
    return false;
}

bool UYDamageFunctions::IsAbleToHeal(AActor* DamageCauser, AActor* damageTaker) {
    return false;
}

bool UYDamageFunctions::IsAbleToDamage(AActor* damageTaker, AActor* DamageCauser, bool canDamageSelf) {
    return false;
}

TArray<AActor*> UYDamageFunctions::GetHostilePawns(AActor* queryActor, float Radius, AActor* teamActor) {
    return TArray<AActor*>();
}

FText UYDamageFunctions::GetDamageCauserNameLocalized(AActor* Actor) {
    return FText::GetEmpty();
}

bool UYDamageFunctions::FindActorsToDamageRadial(FYFindActorDealDamageRequestData Data, TArray<FYRadialDamageEntry>& outEntries) {
    return false;
}

bool UYDamageFunctions::FindActorsToDamageCapsule(FYFindActorDealDamageRequestData Data, TArray<FYRadialDamageEntry>& outEntries) {
    return false;
}

TArray<AActor*> UYDamageFunctions::ApplyRadialDamage(FYRadialDamageDealingData damageEntry) {
    return TArray<AActor*>();
}

bool UYDamageFunctions::ApplyDamage(FYDealtDamageData& Data) {
    return false;
}


