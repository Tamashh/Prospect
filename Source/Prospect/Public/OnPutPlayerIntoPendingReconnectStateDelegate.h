#pragma once
#include "CoreMinimal.h"
#include "OnPutPlayerIntoPendingReconnectStateDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPutPlayerIntoPendingReconnectState, AYPlayerController_Match*, PlayerController);

