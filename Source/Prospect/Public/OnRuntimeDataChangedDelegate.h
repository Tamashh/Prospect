#pragma once
#include "CoreMinimal.h"
#include "YRuntimeVehicleData.h"
#include "OnRuntimeDataChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRuntimeDataChanged, FYRuntimeVehicleData, oldData, FYRuntimeVehicleData, newData);

