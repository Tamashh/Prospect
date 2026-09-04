#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStateSpawnedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStateSpawned, APlayerState*, State);

