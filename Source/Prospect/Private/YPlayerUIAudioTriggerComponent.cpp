#include "YPlayerUIAudioTriggerComponent.h"

UYPlayerUIAudioTriggerComponent::UYPlayerUIAudioTriggerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_audioComponentLocalLowHealth = NULL;
}

void UYPlayerUIAudioTriggerComponent::UpdateLowHealthSound() {
}

void UYPlayerUIAudioTriggerComponent::OnPawnStatusChanged(APawn* oldPawn, APawn* newPawn) {
}

void UYPlayerUIAudioTriggerComponent::OnPawnPendingDestroy(APawn* Pawn) {
}

void UYPlayerUIAudioTriggerComponent::OnHealthEmpty(UYHealthComponent* healthComponent, AActor* Instigator) {
}

void UYPlayerUIAudioTriggerComponent::OnHealthChanged(float CurrentHealth, AActor* Instigator) {
}


