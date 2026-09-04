#pragma once
#include "CoreMinimal.h"
#include "EYMatchState.h"
#include "MatchStateUpdatedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMatchStateUpdatedEvent, EYMatchState, matchState);

