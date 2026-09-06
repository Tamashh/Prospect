#include "YCharacterCameraTransitionComponent.h"

UYCharacterCameraTransitionComponent::UYCharacterCameraTransitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYCharacterCameraTransitionComponent::StartCameraTransition(AActor* Owner, FYCameraTransitionData transitionData) {
    return false;
}

void UYCharacterCameraTransitionComponent::OnAnyStatesDeactivated(const TArray<EYPlayerStateBlueprint>& states) {
}

void UYCharacterCameraTransitionComponent::OnAnyStateChanged() {
}

void UYCharacterCameraTransitionComponent::OnAnyStateActivated(EYPlayerStateBlueprint State) {
}

bool UYCharacterCameraTransitionComponent::IsTransitionActive(AActor* Owner) {
    return false;
}


