#include "YAreaStatusNotifyComponent.h"

UYAreaStatusNotifyComponent::UYAreaStatusNotifyComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_linkedAreaLocation = NULL;
    this->m_isEnabled = true;
}

void UYAreaStatusNotifyComponent::OnAreaStatusChanged(AYActivityLocation* Location) {
}

void UYAreaStatusNotifyComponent::OnActivitiesLoaded() {
}


