#include "YCaptureFrameBufferComponent.h"

UYCaptureFrameBufferComponent::UYCaptureFrameBufferComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_texture = NULL;
}

void UYCaptureFrameBufferComponent::UpdateFrameBuffer() {
}

void UYCaptureFrameBufferComponent::OnFrameBufferCaptureQueued() {
}

void UYCaptureFrameBufferComponent::OnFrameBufferCaptureComplete() {
}

void UYCaptureFrameBufferComponent::CaptureBackBufferToTexture(float InDeltaTime) {
}
