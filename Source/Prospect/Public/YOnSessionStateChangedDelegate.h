#pragma once
#include "CoreMinimal.h"
#include "EYSessionEventType.h"
#include "YOnSessionStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSessionStateChanged, EYSessionEventType, State);

