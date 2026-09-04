#pragma once
#include "CoreMinimal.h"
#include "YKeybindingData.h"
#include "YOnKeySetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnKeySet, FYKeybindingData, Key);

