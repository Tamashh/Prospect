#pragma once
#include "CoreMinimal.h"
#include "OnInputModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInputModeChanged, bool, isUIOnly);

