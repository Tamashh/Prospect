#pragma once
#include "CoreMinimal.h"
#include "YOnControllerMatchmakingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnControllerMatchmakingStateChanged, bool, newState);

