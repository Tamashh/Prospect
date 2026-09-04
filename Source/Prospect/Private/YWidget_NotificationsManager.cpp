#include "YWidget_NotificationsManager.h"

UYWidget_NotificationsManager::UYWidget_NotificationsManager() {
    this->m_notificationPanel = NULL;
}

void UYWidget_NotificationsManager::OnRemoveSocialNotification(const FYSocialNotification& notification) {
}

void UYWidget_NotificationsManager::OnNotificationRequestVisibilityChange(int32 Handle, bool animate) {
}

void UYWidget_NotificationsManager::OnNotificationAction(int32 Handle, EYNotificationAction Action) {
}

void UYWidget_NotificationsManager::OnAnimateVisibilityFinishedEntry(UYWidget* Widget, ESlateVisibility newVisibility) {
}

void UYWidget_NotificationsManager::OnAddSocialNotification(const FYSocialNotification& notification) {
}



