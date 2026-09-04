#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnSocialWheelOpenRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSocialWheelOpenRequest, EYWheelType, wheelItemType);

