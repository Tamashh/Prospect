#include "YGenericNotificationsModel.h"

UYGenericNotificationsModel::UYGenericNotificationsModel() {
}

TSet<EYNotificationsCategory> UYGenericNotificationsModel::GetSilentNotificationCategories() const {
    return TSet<EYNotificationsCategory>();
}

TArray<FYNotificationDescription> UYGenericNotificationsModel::GetNotifications() {
    return TArray<FYNotificationDescription>();
}

TArray<FYNotificationDescription> UYGenericNotificationsModel::GetAccountNotifications() {
    return TArray<FYNotificationDescription>();
}

UYGenericNotificationsModel* UYGenericNotificationsModel::FindGenericNotificationsModel(const UObject* objCtx) {
    return NULL;
}


