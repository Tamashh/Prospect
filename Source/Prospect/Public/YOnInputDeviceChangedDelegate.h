#pragma once
#include "CoreMinimal.h"
#include "EYKeybindingInputDeviceType.h"
#include "YOnInputDeviceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInputDeviceChanged, EYKeybindingInputDeviceType, Type);

