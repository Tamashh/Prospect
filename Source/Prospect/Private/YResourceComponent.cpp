#include "YResourceComponent.h"

UYResourceComponent::UYResourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

float UYResourceComponent::GetResourceValueRatio() const {
    return 0.0f;
}

float UYResourceComponent::GetResourceRegenerationProgressRatio() const {
    return 0.0f;
}

int32 UYResourceComponent::GetResourceNumSegments() const {
    return 0;
}

float UYResourceComponent::GetResourceMaxValueRatio() const {
    return 0.0f;
}

float UYResourceComponent::GetResourceMaxValue() const {
    return 0.0f;
}

float UYResourceComponent::GetResourceAbsoluteValueRatio() const {
    return 0.0f;
}

float UYResourceComponent::GetResourceAbsoluteMaxValue() const {
    return 0.0f;
}

int32 UYResourceComponent::GetGlobalResourceNumSegments() const {
    return 0;
}

float UYResourceComponent::GetGlobalResourceMaxValue() const {
    return 0.0f;
}


