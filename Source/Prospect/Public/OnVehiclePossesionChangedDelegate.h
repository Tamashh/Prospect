#pragma once
#include "CoreMinimal.h"
#include "OnVehiclePossesionChangedDelegate.generated.h"

class AYVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehiclePossesionChanged, AYVehicle*, Vehicle);

