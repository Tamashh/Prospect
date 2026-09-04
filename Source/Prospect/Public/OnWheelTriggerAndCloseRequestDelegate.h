#pragma once
#include "CoreMinimal.h"
#include "EYWheelType.h"
#include "OnWheelTriggerAndCloseRequestDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWheelTriggerAndCloseRequest, EYWheelType, wheelType);

