#include "YHealthComponent.h"
#include "Net/UnrealNetwork.h"

UYHealthComponent::UYHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_godModeDamageMaxHealthPercentage = 1.5f;
    this->m_canDieByDamageOverTime = true;
    this->m_healthChangeInstigator = NULL;
    this->m_timstampServerTakenRegenRelevantDamage = -100.0f;
    this->m_gameplayAttributeComponent = NULL;
    this->m_currentHealth = 0.0f;
}

void UYHealthComponent::TakeDamage(FYDealtDamageData& Data) {
}

void UYHealthComponent::SetFakeTutorialDeathActive(bool bActive, AActor* Instigator) {
}

void UYHealthComponent::SetCurrentHealth(float newCurrentHealth, AActor* Instigator) {
}

void UYHealthComponent::ResetHealth() {
}

void UYHealthComponent::OnRep_IsRegeneratingOrDegenerating() {
}

void UYHealthComponent::OnRep_HealthData() {
}

void UYHealthComponent::OnRep_CurrentHealth() {
}

void UYHealthComponent::OnGPAModifierChanged(EYGameplayAttribute Attribute, bool added, const FGuid& Guid) {
}

void UYHealthComponent::OnAIStateChanged(EYAIState PreviousState, EYAIState currentState) {
}

bool UYHealthComponent::IsDead() const {
    return false;
}

bool UYHealthComponent::IsActorDead(const AActor* Actor) {
    return false;
}

float UYHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

float UYHealthComponent::GetHealthRatio() const {
    return 0.0f;
}

float UYHealthComponent::GetCurrentHealth() const {
    return 0.0f;
}

void UYHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYHealthComponent, m_healthData);
    DOREPLIFETIME(UYHealthComponent, m_healthChangeInstigator);
    DOREPLIFETIME(UYHealthComponent, m_timstampServerTakenRegenRelevantDamage);
    DOREPLIFETIME(UYHealthComponent, m_currentHealth);
}


