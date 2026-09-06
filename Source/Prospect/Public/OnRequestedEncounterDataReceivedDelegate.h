#pragma once
#include "CoreMinimal.h"
#include "YEncounters.h"
#include "OnRequestedEncounterDataReceivedDelegate.generated.h"

class UYBattleLogComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRequestedEncounterDataReceived, UYBattleLogComponent*, Component, const FString&, PlayerId, const TArray<FYEncounters>&, requestedEncounterData);

