#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnWheelOpenRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWheelOpenRequest, EYWheelType, wheelType);

