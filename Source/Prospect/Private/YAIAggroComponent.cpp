#include "YAIAggroComponent.h"

UYAIAggroComponent::UYAIAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_aggroTarget = NULL;
    this->m_clearCombatTargetOnAggroLoss = false;
    this->m_keepLastKnowLocationOnCombatTargetLoss = false;
    this->m_blackboardKeyName_HighestSenseType = TEXT("HighestSenseType");
    this->m_blackboardKeyName_HighestSenseLocation = TEXT("HighestSenseLocation");
    this->m_blackboardKeyName_CombatTarget = TEXT("combatTarget");
    this->m_blackboardKeyName_LastKnownLocation = TEXT("LastKnownPosition");
    this->m_blackboardKeyName_DurationTargetNotVisible = TEXT("DurationTargetNotVisible");
    this->m_blackboardKeyName_IsCombatTargetVisible = TEXT("IsCombatTargetVisible");
    this->m_proximitySenseInterval = 1.0f;
    this->m_perceptionComponent = NULL;
}

bool UYAIAggroComponent::TryFindTargetInfo(AActor* Target, FYAITargetInfo& outTargetInfo) {
    return false;
}

bool UYAIAggroComponent::TryAddTarget(AActor* Target) {
    return false;
}

bool UYAIAggroComponent::SetTargetAggroMultiplayer(AActor* Target, float Multiplier, float Timeout) {
    return false;
}

void UYAIAggroComponent::SetCurrentAggroTarget(AActor* Target, const FString& reasonContext) {
}

void UYAIAggroComponent::SendSharedSense(AActor* Target) {
}

void UYAIAggroComponent::RunProximityCheck() {
}

void UYAIAggroComponent::OnTargetPerceptionUpdated(AActor* Target, FAIStimulus Stimulus) {
}

void UYAIAggroComponent::OnTakeDamage(const FYDealtDamageData& DamageEvent) {
}

void UYAIAggroComponent::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

bool UYAIAggroComponent::HasSeenAnyTargetsRecently(float Duration) const {
    return false;
}

FVector UYAIAggroComponent::GetCurrentTargetLastPerceivedSenseLocation() {
    return FVector{};
}

EYAISenseType UYAIAggroComponent::GetCurrentTargetHighestSense() {
    return EYAISenseType::None;
}

void UYAIAggroComponent::ClearCurrentAggroTargetInfo() {
}

void UYAIAggroComponent::ClearAllTargets(const FString& reasonContext) {
}


