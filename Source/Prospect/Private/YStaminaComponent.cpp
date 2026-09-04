#include "YStaminaComponent.h"
#include "Net/UnrealNetwork.h"

UYStaminaComponent::UYStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_staminaBelowTenPercent = 0;
    this->m_infiniteStaminaActivated = false;
    this->m_currentStamina = 0.0f;
    this->m_characterStateComponent = NULL;
    this->m_character = NULL;
    this->m_ownerGameplayAttributeComponent = NULL;
    this->m_characterMovementComponent = NULL;
    this->m_characterHelmetGoggleComponent = NULL;
}

void UYStaminaComponent::SetResourceDataRow(FDataTableRowHandle newRowHandle) {
}

void UYStaminaComponent::SetResourceCurrentValue(float newCurrentValue) {
}

void UYStaminaComponent::RemoveFromResourceCurrentValue(float deltaValue) {
}

void UYStaminaComponent::OnWeaponFired(UYWeaponPlayerControllerRuntimeComponent* Component) {
}

void UYStaminaComponent::OnTakeDamage(const FYDealtDamageData& Data) {
}

void UYStaminaComponent::OnStartClimbing() {
}

void UYStaminaComponent::OnRep_CurrentStamina(float previousStamina) {
}

void UYStaminaComponent::OnMeleeStateStarted() {
}

void UYStaminaComponent::OnMeleeHeavyStateStarted() {
}

void UYStaminaComponent::OnControllerChanged(AController* Controller) {
}

float UYStaminaComponent::IsResourceRegenerating() const {
    return 0.0f;
}

float UYStaminaComponent::IsResourceDegenerating() const {
    return 0.0f;
}

void UYStaminaComponent::HandleOnPlayerStateSet(APlayerState* PlayerState) {
}

void UYStaminaComponent::HandleOnPlayerSetUpdated(UYStateInventoryComponent* stateInventoryComponent) {
}

void UYStaminaComponent::HandleOnMatchStateUpdated(EYMatchState matchState) {
}

void UYStaminaComponent::HandleOnJumped() {
}

float UYStaminaComponent::GetResourceRegenerationRate() const {
    return 0.0f;
}

float UYStaminaComponent::GetResourceRegenerationDelay() const {
    return 0.0f;
}

float UYStaminaComponent::GetResourceDegenerationRate() const {
    return 0.0f;
}

float UYStaminaComponent::GetResourceCurrentValue() const {
    return 0.0f;
}

float UYStaminaComponent::GetConsumedStamina() {
    return 0.0f;
}

void UYStaminaComponent::AddToResourceCurrentValue(float deltaValue) {
}

void UYStaminaComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYStaminaComponent, m_infiniteStaminaActivated);
    DOREPLIFETIME(UYStaminaComponent, m_currentStamina);
}


