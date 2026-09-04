#pragma once
#include "CoreMinimal.h"
#include "YSocialNotification.h"
#include "YOnSocialNotificationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSocialNotification, const FYSocialNotification&, entry);

