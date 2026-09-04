#pragma once
#include "CoreMinimal.h"
#include "OnFakeTutorialDeathDelegate.generated.h"

class UYHealthComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFakeTutorialDeath, UYHealthComponent*, healthComponent);

