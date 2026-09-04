#pragma once
#include "CoreMinimal.h"
#include "EYMatchState.h"
#include "OnMatchTimerElapsedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchTimerElapsed, EYMatchState, elapsedMatchState);

