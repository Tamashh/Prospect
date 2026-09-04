#include "YFallingDamageComponent.h"

UYFallingDamageComponent::UYFallingDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYFallingDamageComponent::ResetFallingDueTeleport() {
}

void UYFallingDamageComponent::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void UYFallingDamageComponent::OnJumpOffCallback(AActor* movementBaseActor) {
}

float UYFallingDamageComponent::GetCurrentFallingDistance() const {
    return 0.0f;
}

void UYFallingDamageComponent::ClientOnFallingDamage_Implementation() {
}


