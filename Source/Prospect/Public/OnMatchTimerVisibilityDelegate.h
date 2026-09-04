#pragma once
#include "CoreMinimal.h"
#include "OnMatchTimerVisibilityDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchTimerVisibility, bool, Visibility);

