#include "YAIAggroComponent.h"

UYAIAggroComponent::UYAIAggroComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_aggroTarget = NULL;
    this->m_highestSenseType = EYAISenseType::None;
    this->m_perceptionComponent = NULL;
    this->m_blackboardKeyName_HighestSenseType = TEXT("HighestSenseType");
    this->m_blackboardKeyName_HighestSenseLocation = TEXT("HighestSenseLocation");
    this->m_blackboardKeyName_CombatTarget = TEXT("combatTarget");
    this->m_blackboardKeyName_LastKnownLocation = TEXT("LastKnownPosition");
    this->m_blackboardKeyName_DurationTargetNotVisible = TEXT("DurationTargetNotVisible");
    this->m_blackboardKeyName_IsCombatTargetVisible = TEXT("IsCombatTargetVisible");
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

void UYAIAggroComponent::SendSharedSense(AActor* TargetActor) {
}

void UYAIAggroComponent::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus) {
}

void UYAIAggroComponent::OnTakeDamage(const FYDealtDamageData& DamageEvent) {
}

void UYAIAggroComponent::OnPawnStateChanged(APawn* oldPawn, APawn* newPawn) {
}

bool UYAIAggroComponent::HasSeenTargetSince(float sightSenseTimeout) const {
    return false;
}

void UYAIAggroComponent::ClearCurrentAggroTargetInfo() {
}

void UYAIAggroComponent::ClearAllTargets(const FString& reasonContext) {
}


