#pragma once
#include "CoreMinimal.h"
#include "EYNotificationAction.h"
#include "YOnNotificationActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnNotificationAction, int32, Handle, EYNotificationAction, Action);

