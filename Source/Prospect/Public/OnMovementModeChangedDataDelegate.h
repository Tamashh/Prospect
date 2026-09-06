#pragma once
#include "CoreMinimal.h"
#include "YMovementModeDataChanged.h"
#include "OnMovementModeChangedDataDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMovementModeChangedData, const FYMovementModeDataChanged&, newData);

