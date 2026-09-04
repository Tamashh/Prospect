#pragma once
#include "CoreMinimal.h"
#include "YOnDragDetectedDelegate.generated.h"

class UYWidget_SetItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnDragDetected, UYWidget_SetItem*, SetItem);

