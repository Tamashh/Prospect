#include "YCharacterAbilityComponent.h"
#include "Net/UnrealNetwork.h"

UYCharacterAbilityComponent::UYCharacterAbilityComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->m_abilityState = EYAbilityState::Invalid;
    this->m_characterStateComponent = NULL;
    this->m_placementActor = NULL;
}

void UYCharacterAbilityComponent::ServerSetAbilityState_Implementation(EYAbilityState newAbilityState) {
}
bool UYCharacterAbilityComponent::ServerSetAbilityState_Validate(EYAbilityState newAbilityState) {
    return true;
}

void UYCharacterAbilityComponent::ServerOnEnterState_Activating_Implementation() {
}
bool UYCharacterAbilityComponent::ServerOnEnterState_Activating_Validate() {
    return true;
}

void UYCharacterAbilityComponent::OnStopWeaponSpinup(bool wasInterupted) {
}

void UYCharacterAbilityComponent::OnStartWeaponSpinup() {
}

void UYCharacterAbilityComponent::OnRep_AbilityState(EYAbilityState oldAbilityState) {
}

void UYCharacterAbilityComponent::OnRep_AbilityRowHandle() {
}

void UYCharacterAbilityComponent::OnHideAttachedMesh() {
}

void UYCharacterAbilityComponent::OnDeactivateAbilityCallback() {
}

float UYCharacterAbilityComponent::GetSpinUpTime() const {
    return 0.0f;
}

float UYCharacterAbilityComponent::GetRemainingSpinupTime() {
    return 0.0f;
}

int32 UYCharacterAbilityComponent::GetChargeAmount() {
    return 0;
}

void UYCharacterAbilityComponent::EnterState_Finished() {
}

void UYCharacterAbilityComponent::DeactivateAbilityCharacterState() {
}

void UYCharacterAbilityComponent::ActivateAbilityInput() {
}

void UYCharacterAbilityComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYCharacterAbilityComponent, m_abilityItemID);
    DOREPLIFETIME(UYCharacterAbilityComponent, m_abilityRowHandle);
    DOREPLIFETIME(UYCharacterAbilityComponent, m_abilityState);
}


