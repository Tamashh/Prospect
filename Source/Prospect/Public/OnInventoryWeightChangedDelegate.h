#pragma once
#include "CoreMinimal.h"
#include "OnInventoryWeightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryWeightChanged, float, newWeight);

