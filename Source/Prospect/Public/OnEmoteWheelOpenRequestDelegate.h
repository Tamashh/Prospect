#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnEmoteWheelOpenRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEmoteWheelOpenRequest, EYWheelType, wheelItemType);

