#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnCommWheelOpenRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCommWheelOpenRequest, EYWheelType, wheelItemType);

