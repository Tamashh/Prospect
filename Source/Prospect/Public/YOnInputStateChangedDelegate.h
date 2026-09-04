#pragma once
#include "CoreMinimal.h"
#include "YOnInputStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnInputStateChanged, int32, stateChangeType, bool, Active);

