#pragma once
#include "CoreMinimal.h"
#include "OnPutCharacterIntoPendingReconnectStateDelegate.generated.h"

class AYPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPutCharacterIntoPendingReconnectState, AYPlayerCharacter*, playerCharacter);

