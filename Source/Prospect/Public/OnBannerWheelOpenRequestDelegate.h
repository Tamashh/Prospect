#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnBannerWheelOpenRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBannerWheelOpenRequest, EYWheelType, wheelItemType);

