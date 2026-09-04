#pragma once
#include "CoreMinimal.h"
#include "OnVehicleInteractedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleInteracted, bool, State);

