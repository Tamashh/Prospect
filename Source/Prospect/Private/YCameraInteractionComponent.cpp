#include "YCameraInteractionComponent.h"

UYCameraInteractionComponent::UYCameraInteractionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_cameraFocusComponent = NULL;
    this->m_allowRotation = true;
}

void UYCameraInteractionComponent::SetCameraFocusComponent(USceneComponent* SceneComponent, bool cacheDefaultTransform) {
}

void UYCameraInteractionComponent::ResetRotation() const {
}


