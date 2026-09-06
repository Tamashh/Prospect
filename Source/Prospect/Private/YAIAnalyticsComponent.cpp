#include "YAIAnalyticsComponent.h"

UYAIAnalyticsComponent::UYAIAnalyticsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYAIAnalyticsComponent::OnCombatTargetChanged(UYAIDataComponent* Component, AActor* combatTarget) {
}

void UYAIAnalyticsComponent::OnAITakeDamage(const FYDealtDamageData& damageDealt) {
}

void UYAIAnalyticsComponent::OnAIDealDamage(const FYDealtDamageData& damageDealt) {
}

void UYAIAnalyticsComponent::OnAICharacterSpawned(AYAICharacter* aiCharacter) {
}

void UYAIAnalyticsComponent::DebugTestSendKilledAIEvents() {
}


