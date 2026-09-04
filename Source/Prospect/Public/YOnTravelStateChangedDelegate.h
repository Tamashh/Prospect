#pragma once
#include "CoreMinimal.h"
#include "EYTravelState.h"
#include "YOnTravelStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnTravelStateChanged, EYTravelState, State);

