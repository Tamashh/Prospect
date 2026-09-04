#include "YLeaningComponent.h"
#include "Net/UnrealNetwork.h"

UYLeaningComponent::UYLeaningComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_leanTargetAngle = 0.0f;
    this->m_leanTarget = EYLeanTarget::Middle;
    this->m_playerMovementComponent = NULL;
    this->m_playerCharacterStateComponent = NULL;
}

void UYLeaningComponent::OnRep_OnLeanTarget() {
}

void UYLeaningComponent::OnJumpedCallback(int32 jumpCount) {
}

void UYLeaningComponent::OnAnyStateChangedCallback(EYStateChangeType stateChangeType) {
}

void UYLeaningComponent::LeanRight_InputPressedCallback() {
}

void UYLeaningComponent::LeanLeft_InputPressedCallback() {
}

bool UYLeaningComponent::IsLeaning() const {
    return false;
}

float UYLeaningComponent::GetMaxLeanAngleThirdPerson() const {
    return 0.0f;
}

float UYLeaningComponent::GetMaxLeanAngleFirstPerson() const {
    return 0.0f;
}

float UYLeaningComponent::GetLeanTranslationThirdPerson() const {
    return 0.0f;
}

float UYLeaningComponent::GetLeanTranslationFirstPerson() const {
    return 0.0f;
}

float UYLeaningComponent::GetLeanAngleThirdPerson() const {
    return 0.0f;
}

float UYLeaningComponent::GetLeanAngleFirstPerson() const {
    return 0.0f;
}

void UYLeaningComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UYLeaningComponent, m_leanTargetAngle);
    DOREPLIFETIME(UYLeaningComponent, m_leanTarget);
}


