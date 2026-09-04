#pragma once
#include "CoreMinimal.h"
#include "YOnEnteredAnyMenuDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnEnteredAnyMenu, bool, entered);

