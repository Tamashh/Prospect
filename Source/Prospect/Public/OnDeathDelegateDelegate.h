#pragma once
#include "CoreMinimal.h"
#include "OnDeathDelegateDelegate.generated.h"

class UYCharacterDeathComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeathDelegate, UYCharacterDeathComponent*, deathComponent);

