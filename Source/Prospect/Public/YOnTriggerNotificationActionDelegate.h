#pragma once
#include "CoreMinimal.h"
#include "EYNotificationAction.h"
#include "YSocialNotification.h"
#include "YOnTriggerNotificationActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnTriggerNotificationAction, FYSocialNotification, notificationData, EYNotificationAction, Action);

