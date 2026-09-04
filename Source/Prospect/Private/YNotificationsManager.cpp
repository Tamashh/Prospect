#include "YNotificationsManager.h"

UYNotificationsManager::UYNotificationsManager() {
}

bool UYNotificationsManager::RequestSocialNotification(UObject* objectContext, const FYSocialNotification& Data) {
    return false;
}

bool UYNotificationsManager::RequestPermamentNotification(UObject* objectContext) {
    return false;
}

bool UYNotificationsManager::RemoveNotificationWithID(UObject* objectContext, const FString& ID) {
    return false;
}

void UYNotificationsManager::OnSocialProfileUpdated() {
}

bool UYNotificationsManager::ExecuteSocialNotificationActionById(UObject* objectContext, const FString& ID, EYNotificationAction Action) {
    return false;
}

bool UYNotificationsManager::ExecuteSocialNotificationAction(UObject* objectContext, const FYSocialNotification& Data, EYNotificationAction Action) {
    return false;
}


