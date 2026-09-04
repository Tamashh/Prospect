#pragma once
#include "CoreMinimal.h"
#include "YKilledEventContext.h"
#include "YPlayerKilledEvent.h"
#include "OnTrySendingKilledEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTrySendingKilledEvent, const FYKilledEventContext&, Context, const FYPlayerKilledEvent&, killedEvent);

