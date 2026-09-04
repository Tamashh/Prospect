#pragma once
#include "CoreMinimal.h"
#include "OnPlayerLeftDelegate.generated.h"

class APlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerLeft, APlayerState*, PlayerState);

