#include "YAIStaggerComponent.h"

UYAIStaggerComponent::UYAIStaggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_forcedStaggerAnimation = NULL;
    this->m_isStaggering = false;
    this->m_character = NULL;
    this->m_animationComponent = NULL;
    this->m_animInstance = NULL;
}

void UYAIStaggerComponent::OnTakeDamage(const FYDealtDamageData& damageData) {
}

void UYAIStaggerComponent::OnMontageEnded(UAnimMontage* montageEnded, bool interrupted) {
}

void UYAIStaggerComponent::AddScalarParameterUpdate(FName ParameterName, float TargetValue, float originalValue, float InterpolationTime) {
}


