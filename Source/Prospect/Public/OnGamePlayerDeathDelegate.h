#pragma once
#include "CoreMinimal.h"
#include "OnGamePlayerDeathDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGamePlayerDeath, APlayerState*, PlayerState);

