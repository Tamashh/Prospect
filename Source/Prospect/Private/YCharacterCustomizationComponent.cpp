#include "YCharacterCustomizationComponent.h"

UYCharacterCustomizationComponent::UYCharacterCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UYCharacterCustomizationComponent::OnFinishedLoadedAssets() {
}

void UYCharacterCustomizationComponent::OnCustomizationDataAvailable(FYActiveCustomizationData requestedBodyType) {
}

bool UYCharacterCustomizationComponent::IsThirdPersonMeshInitialized() {
    return false;
}

bool UYCharacterCustomizationComponent::IsMeshInitialized() {
    return false;
}


