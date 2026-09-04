#pragma once
#include "CoreMinimal.h"
#include "OnMouseHoverStateChangedDelegate.generated.h"

class UYWidget_CommWheelItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMouseHoverStateChanged, UYWidget_CommWheelItem*, Item, bool, isMouseOver);

