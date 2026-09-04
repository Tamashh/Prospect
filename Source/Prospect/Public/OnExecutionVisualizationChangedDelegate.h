#pragma once
#include "CoreMinimal.h"
#include "OnExecutionVisualizationChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExecutionVisualizationChanged, bool, newState);

