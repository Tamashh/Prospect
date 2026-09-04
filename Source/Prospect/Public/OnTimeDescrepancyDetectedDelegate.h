#pragma once
#include "CoreMinimal.h"
#include "OnTimeDescrepancyDetectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTimeDescrepancyDetected, float, currentTimeDiscrepancy, float, lifetimeRawTImeDiscrepancy, float, lifetime, float, currentMoveError);

