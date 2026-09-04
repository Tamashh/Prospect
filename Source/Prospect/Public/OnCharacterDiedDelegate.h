#pragma once
#include "CoreMinimal.h"
#include "OnCharacterDiedDelegate.generated.h"

class AYCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDied, AYCharacter*, deadCharacter);

