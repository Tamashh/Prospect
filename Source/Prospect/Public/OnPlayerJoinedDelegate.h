#pragma once
#include "CoreMinimal.h"
#include "OnPlayerJoinedDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerJoined, APlayerState*, PlayerState);

