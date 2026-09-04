#pragma once
#include "CoreMinimal.h"
#include "OnSpectateTargetChangedDelegate.generated.h"

class AYPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectateTargetChanged, AYPlayerState*, PlayerState);

