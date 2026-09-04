#pragma once
#include "CoreMinimal.h"
#include "OnHorizonTweenEventDelegate.generated.h"

class UHorizonTweenEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHorizonTweenEvent, UHorizonTweenEvent*, pTweenEvent);

