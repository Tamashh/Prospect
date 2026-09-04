#pragma once
#include "CoreMinimal.h"
#include "OnMatchTimerUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchTimerUpdated, int32, currentSeconds);

