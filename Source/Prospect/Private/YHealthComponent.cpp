#include "YHealthComponent.h"
#include "Net/UnrealNetwork.h"

UYHealthComponent::UYHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_immortalmodeActivated = false;
    this->m_immortalModeHealthRatioResetTutorial = -1.0f;
    this->m_canDieByDamageOverTime = true;
    this->m_currentHealth = 0.0f;
    this->m_healthChangeInstigator = NULL;
    this->m_timstampServerTakenRegenRelevantDamage = -100.0f;
    this->m_gameplayAttributeComponent = NULL;
}

void UYHealthComponent::TakeDamage(FYDealtDamageData& Data) {
}

void UYHealthComponent::SetFakeTutorialDeathActive(bool bActive, AActor* Instigator) {
}

void UYHealthComponent::SetDatatableRow(FDataTableRowHandle desiredRowHandle) {
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

void UYHealthComponent::OnAIStateChanged(EYAIState previuousState, EYAIState currentState) {
}

void UYHealthComponent::LogHealthInfo(AActor* Actor) {
}

float UYHealthComponent::IsRegenerating() const {
    return 0.0f;
}

float UYHealthComponent::IsFakeTutorialDeathActive() const {
    return 0.0f;
}

bool UYHealthComponent::IsDead() const {
    return false;
}

bool UYHealthComponent::IsActorDead(const AActor* Actor) {
    return false;
}

float UYHealthComponent::GetRegenerationRate() const {
    return 0.0f;
}

float UYHealthComponent::GetRegenerationDelay() const {
    return 0.0f;
}

float UYHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

bool UYHealthComponent::GetHealthRowFromRowHandle(FDataTableRowHandle rowHandle, FYHealthDataTableRow& outData) {
    return false;
}

FDataTableRowHandle UYHealthComponent::GetHealthRow() const {
    return FDataTableRowHandle{};
}

float UYHealthComponent::GetHealthRatio() const {
    return 0.0f;
}

float UYHealthComponent::GetDegenerationRate() const {
    return 0.0f;
}

void UYHealthComponent::GetDegenerationInstigators(TArray<APawn*>& instigators) const {
}

float UYHealthComponent::GetCurrentHealth() const {
    return 0.0f;
}

void UYHealthComponent::CreateHealthWidgetDelayed() {
}

void UYHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYHealthComponent, m_healthData);
    DOREPLIFETIME(UYHealthComponent, m_currentHealth);
    DOREPLIFETIME(UYHealthComponent, m_healthChangeInstigator);
    DOREPLIFETIME(UYHealthComponent, m_timstampServerTakenRegenRelevantDamage);
}


