#pragma once
#include "CoreMinimal.h"
#include "InterpolationStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterpolationStateChanged, bool, newState);

