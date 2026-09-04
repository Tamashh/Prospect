#pragma once
#include "CoreMinimal.h"
#include "EYDBNOTeleportState.h"
#include "OnTeleprtStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTeleprtStateChanged, EYDBNOTeleportState, newState);

