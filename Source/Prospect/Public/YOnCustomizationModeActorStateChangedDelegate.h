#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationMode.h"
#include "YOnCustomizationModeActorStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnCustomizationModeActorStateChanged, EYCustomizationMode, modeChange, bool, stored);

