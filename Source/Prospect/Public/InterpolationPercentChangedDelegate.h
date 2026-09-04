#pragma once
#include "CoreMinimal.h"
#include "InterpolationPercentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInterpolationPercentChanged, float, percent);

