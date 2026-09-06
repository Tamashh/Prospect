#include "YPlayerLocalEffectsComponent.h"

UYPlayerLocalEffectsComponent::UYPlayerLocalEffectsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYPlayerLocalEffectsComponent::ClientRPCApplyEffect_Implementation(EYPlayerLocalEffect Effect, FVector instigatorPosition) {
}
