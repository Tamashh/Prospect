#pragma once
#include "CoreMinimal.h"
#include "OnInitializeInterpolationDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnInitializeInterpolation, float, Duration, float, startPercent, bool, Activate);

