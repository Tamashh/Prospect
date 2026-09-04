#pragma once
#include "CoreMinimal.h"
#include "YOnHealthStimStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnHealthStimStateChanged, int32, abilityIndex, bool, Active);

