#pragma once
#include "CoreMinimal.h"
#include "OnRequestVehicleOpenStateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestVehicleOpenState, bool, newState);

