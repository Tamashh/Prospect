#pragma once
#include "CoreMinimal.h"
#include "YToggleStationHudVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYToggleStationHudVisibility, bool, Visibility);

