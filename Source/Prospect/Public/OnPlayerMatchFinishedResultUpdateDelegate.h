#pragma once
#include "CoreMinimal.h"
#include "OnPlayerMatchFinishedResultUpdateDelegate.generated.h"

class AYPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerMatchFinishedResultUpdate, AYPlayerState*, Player);

