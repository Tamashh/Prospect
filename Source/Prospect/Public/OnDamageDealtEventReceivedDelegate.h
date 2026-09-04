#pragma once
#include "CoreMinimal.h"
#include "YDamageEvent.h"
#include "OnDamageDealtEventReceivedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDamageDealtEventReceived, const FYDamageEvent&, lastEvent);

