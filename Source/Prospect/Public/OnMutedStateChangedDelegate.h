#pragma once
#include "CoreMinimal.h"
#include "YMutingState.h"
#include "OnMutedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMutedStateChanged, const FYMutingState&, stateChanged);

