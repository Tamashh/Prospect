#include "YControllerTransitionComponent.h"

UYControllerTransitionComponent::UYControllerTransitionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_transitionObject = NULL;
    this->m_useTransitionWidget = false;
}

bool UYControllerTransitionComponent::StartTransition(const UObject* objCtx, const FYTransitionRequestData& requestData) {
    return false;
}

void UYControllerTransitionComponent::SetCameraTransitionMode(const UObject* objCtx, bool withTransitionWidget) {
}

void UYControllerTransitionComponent::OnRequestCompleted() {
}


