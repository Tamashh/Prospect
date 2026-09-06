#include "YAIStaggerComponent.h"

UYAIStaggerComponent::UYAIStaggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_staggerEnabled = true;
    this->m_updateStaggeredBBKey = true;
    this->m_reuseLastHealthPercentageTrigger = false;
    this->m_currentPlayingMontage = NULL;
    this->m_forcedStaggerAnimation = NULL;
    this->m_character = NULL;
    this->m_healthComponent = NULL;
    this->m_animationComponent = NULL;
    this->m_animInstance = NULL;
}

void UYAIStaggerComponent::OnTakeDamage(const FYDealtDamageData& damageData) {
}

void UYAIStaggerComponent::OnResetRequestedCallback() {
}

void UYAIStaggerComponent::OnMontageEnded(UAnimMontage* montageEnded, bool interrupted) {
}

bool UYAIStaggerComponent::IsPlayingStaggerAnimation() const {
    return false;
}

void UYAIStaggerComponent::AddScalarParameterUpdate(FName ParameterName, float TargetValue, float originalValue, float InterpolationTime) {
}


