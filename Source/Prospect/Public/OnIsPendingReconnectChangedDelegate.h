#pragma once
#include "CoreMinimal.h"
#include "OnIsPendingReconnectChangedDelegate.generated.h"

class AYPlayerCharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnIsPendingReconnectChanged, AYPlayerCharacter*, playerCharacter, bool, isPendingReconnect);

