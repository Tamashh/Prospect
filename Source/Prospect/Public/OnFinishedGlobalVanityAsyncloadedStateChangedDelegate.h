#pragma once
#include "CoreMinimal.h"
#include "OnFinishedGlobalVanityAsyncloadedStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedGlobalVanityAsyncloadedStateChanged, bool, newState);

