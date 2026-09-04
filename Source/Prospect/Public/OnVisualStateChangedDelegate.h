#pragma once
#include "CoreMinimal.h"
#include "EYWeaponVisualState.h"
#include "OnVisualStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVisualStateChanged, EYWeaponVisualState, currentVisualState);

