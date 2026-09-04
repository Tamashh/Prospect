#pragma once
#include "CoreMinimal.h"
#include "EYStateChangeType.h"
#include "YAnyStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYAnyStateChanged, EYStateChangeType, stateChangeType);

