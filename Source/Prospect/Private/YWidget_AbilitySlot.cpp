#include "YWidget_AbilitySlot.h"

UYWidget_AbilitySlot::UYWidget_AbilitySlot() {
    this->m_abilityComponent = NULL;
    this->m_abilityImageBase = NULL;
    this->m_abilityCooldownText = NULL;
    this->m_abilityActiveTimeLeftText = NULL;
    this->m_currentAbilityState = EYAbilityState::Invalid;
}

void UYWidget_AbilitySlot::OnAbilityStateChanged(EYAbilityState newState, EYAbilityState oldState) {
}

void UYWidget_AbilitySlot::OnAbilityComponentInitialized() {
}

void UYWidget_AbilitySlot::DetermineAbilityComponent() {
}







