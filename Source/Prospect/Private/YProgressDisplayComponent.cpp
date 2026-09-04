#include "YProgressDisplayComponent.h"

UYProgressDisplayComponent::UYProgressDisplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_currentProgress = NULL;
}

void UYProgressDisplayComponent::ShowProgress(UYProgressComponent* progress) {
}

void UYProgressDisplayComponent::HideProgress(UYProgressComponent* progress) {
}

UYProgressComponent* UYProgressDisplayComponent::GetCurrentProgress() {
    return NULL;
}

UYProgressDisplayComponent* UYProgressDisplayComponent::FindProgressDisplayComponent(UObject* objectContext) {
    return NULL;
}


