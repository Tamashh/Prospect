#pragma once
#include "CoreMinimal.h"
#include "OnBoostStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBoostStateChanged, bool, newState);

