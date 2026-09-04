#include "YAIAttackComponent.h"
#include "Net/UnrealNetwork.h"

UYAIAttackComponent::UYAIAttackComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentPhasePlayCount = 0;
    this->m_currentPhaseDuration = 0.0f;
    this->m_numShotsFiredInCurrentPhase = 0;
}

void UYAIAttackComponent::StartRangedAttack(int32 indexRangedAttack) {
}

void UYAIAttackComponent::StartNextPhase() {
}

void UYAIAttackComponent::OnRep_AttackRuntimeData() {
}

void UYAIAttackComponent::OnDeath(UYCharacterDeathComponent* deathComponent) {
}

bool UYAIAttackComponent::IsRangedAttackRunning() const {
    return false;
}

FYAIRangedAttackDefinition UYAIAttackComponent::GetCurrentRangedAttackTuningData() const {
    return FYAIRangedAttackDefinition{};
}

int32 UYAIAttackComponent::GetCurrentRangedAttackIndex() const {
    return 0;
}

FYAIAttackPhaseDefinition UYAIAttackComponent::GetCurrentPhaseTuningData() const {
    return FYAIAttackPhaseDefinition{};
}

void UYAIAttackComponent::FireTransport() {
}

void UYAIAttackComponent::CancelAttack() {
}


void UYAIAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYAIAttackComponent, m_replicatedRuntimeData);
}


