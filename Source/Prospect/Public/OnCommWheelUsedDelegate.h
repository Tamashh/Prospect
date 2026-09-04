#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OnCommWheelUsedDelegate.generated.h"

class UYCommWheelVOComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCommWheelUsed, UYCommWheelVOComponent*, commWheelComponent, FDataTableRowHandle, commWheelEntry);

