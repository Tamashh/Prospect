#include "YBattleLogComponent.h"

UYBattleLogComponent::UYBattleLogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYBattleLogComponent::SetupEncountersOrdered() {
}

void UYBattleLogComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYBattleLogComponent::OnRep_AllEncountersOrdered() {
}

void UYBattleLogComponent::OnPlayerFinishedMatch(EYPlayerMatchFinishedResult Result) {
}

void UYBattleLogComponent::OnParticipantUpdated(const FString& PlayerId, const bool IsTalking) {
}

void UYBattleLogComponent::OnDealDamage(const FYDealtDamageData& Data) {
}

void UYBattleLogComponent::DistanceCheck() {
}

void UYBattleLogComponent::ClientSetData_Implementation(const TArray<FYPlayerEncounter>& allEncounters) {
}


