#include "YNotificationsFunctions.h"

UYNotificationsFunctions::UYNotificationsFunctions() {
}

void UYNotificationsFunctions::SetNotificationSilent(const UObject* objCtx, EYNotificationsCategory Category, bool silent) {
}

void UYNotificationsFunctions::SendNotificationToSelfNoParams(const UObject* objCtx, const FName& notificationRowName) {
}

void UYNotificationsFunctions::SendNotificationToSelf(const UObject* objCtx, const FName& notificationRowName, TMap<FString, FString> textParameters, TMap<FString, FString> localizedParameters) {
}

void UYNotificationsFunctions::SendNotificationLocal(const UObject* WorldContext, const FDataTableRowHandle& rowHandle) {
}

bool UYNotificationsFunctions::IsNotificationSilent(const UObject* objCtx, const FYNotificationDescription& notificationDescription) {
    return false;
}

bool UYNotificationsFunctions::GetNotificationsRow(const UObject* objCtx, FName RowName, FYNotificationsRow& row) {
    return false;
}


