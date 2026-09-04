#include "YNotificationComponent.h"

UYNotificationComponent::UYNotificationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_playerActionNotifications = NULL;
}

void UYNotificationComponent::AddNotificationDataStatic(UObject* objectContext, FYNotificiationDataRequest notificationData) {
}

void UYNotificationComponent::AddNotificationData(UYNotificationData* notificationData, bool triggerUpdate) {
}


