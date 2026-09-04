#pragma once
#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "YOnMouseButtonDownDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnMouseButtonDown, const FGeometry&, InGeometry, const FPointerEvent&, InMouseEvent);

