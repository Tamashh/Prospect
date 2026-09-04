#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLeftMatchDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLeftMatch, AYPlayerController_Match*, PlayerController);

