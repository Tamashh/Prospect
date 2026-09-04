#include "YCharacterCameraTransitionComponent.h"

UYCharacterCameraTransitionComponent::UYCharacterCameraTransitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UYCharacterCameraTransitionComponent::StartCameraTransition(AActor* Owner, FYCameraTransitionData transitionData) {
    return false;
}

void UYCharacterCameraTransitionComponent::OnAnyStateChanged() {
}

bool UYCharacterCameraTransitionComponent::IsTransitionActive(AActor* Owner) {
    return false;
}


