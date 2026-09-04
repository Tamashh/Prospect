#pragma once
#include "CoreMinimal.h"
#include "OnPlayerTeleportedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerTeleported, AActor*, playerCharacter);

