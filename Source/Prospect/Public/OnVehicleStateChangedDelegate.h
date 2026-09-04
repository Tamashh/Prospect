#pragma once
#include "CoreMinimal.h"
#include "EYVehicleStateType.h"
#include "OnVehicleStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleStateChanged, EYVehicleStateType, newVehicleState);

