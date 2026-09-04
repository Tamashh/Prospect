#pragma once
#include "CoreMinimal.h"
#include "OnEncounterDataReceivedDelegate.generated.h"

class UYBattleLogComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterDataReceived, UYBattleLogComponent*, Component);

