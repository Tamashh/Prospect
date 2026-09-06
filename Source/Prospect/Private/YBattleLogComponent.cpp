#include "YBattleLogComponent.h"

UYBattleLogComponent::UYBattleLogComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_enemiesToStoreDamageTo.AddDefaulted(1);
}

void UYBattleLogComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYBattleLogComponent::OnPlayerFinishedMatch(EYPlayerMatchFinishedResult Result) {
}

void UYBattleLogComponent::OnParticipantUpdated(const FString& PlayerId, const bool IsTalking) {
}

void UYBattleLogComponent::OnDealDamage(const FYDealtDamageData& Data) {
}

void UYBattleLogComponent::FinalizeEncounters() {
}

void UYBattleLogComponent::DistanceCheck() {
}

void UYBattleLogComponent::ClientSetData_Implementation(const TArray<FYEncounter>& allEncounters) {
}


