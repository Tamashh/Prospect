#include "YHelmetGoggleComponent.h"
#include "Net/UnrealNetwork.h"

UYHelmetGoggleComponent::UYHelmetGoggleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_character = NULL;
    this->m_staminaComponent = NULL;
    this->m_ownerGameplayAttributeComponent = NULL;
    this->m_disableTargetingWithVisionModification = false;
    this->m_isVisionModificationEnabled = false;
    this->m_totalVisionTransitionTime = 2.0f;
    this->m_visionTransitionStaminaDrainPoint = 1.0f;
    this->m_visionModificationTransitionTime = 0.0f;
}

void UYHelmetGoggleComponent::ToggleVisionModification() {
}

void UYHelmetGoggleComponent::SetVisionModificationEnabled(bool IsEnabled) {
}

void UYHelmetGoggleComponent::ServerSetVisionModificationEnabled_Implementation(bool IsEnabled) {
}

void UYHelmetGoggleComponent::OnStartedTargeting() {
}

void UYHelmetGoggleComponent::OnStaminaChanged(float currentStamina) {
}

void UYHelmetGoggleComponent::OnRep_IsVisionModificationEnabled() {
}

void UYHelmetGoggleComponent::OnPlayerStateSet(AYPlayerState* PlayerState) {
}

void UYHelmetGoggleComponent::OnArmorBroken(UYArmorComponent* armorComponent) {
}

bool UYHelmetGoggleComponent::IsVisionModificationEnabled() const {
    return false;
}

bool UYHelmetGoggleComponent::HasThermalVisionMod() const {
    return false;
}

bool UYHelmetGoggleComponent::HasNightVisionMod() const {
    return false;
}

void UYHelmetGoggleComponent::HandlePlayerSetItemRemoved(UYStateInventoryComponent* stateInventoryComponent, const FYInventoryItem& Item, EYPlayerSetType equippedSetType) {
}

bool UYHelmetGoggleComponent::CanEnableVisionModification() const {
    return false;
}

void UYHelmetGoggleComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYHelmetGoggleComponent, m_isVisionModificationEnabled);
}


