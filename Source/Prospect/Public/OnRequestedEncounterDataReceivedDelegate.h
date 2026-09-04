#pragma once
#include "CoreMinimal.h"
#include "YPlayerEncounters.h"
#include "OnRequestedEncounterDataReceivedDelegate.generated.h"

class UYBattleLogComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnRequestedEncounterDataReceived, UYBattleLogComponent*, Component, const FString&, PlayerId, const TArray<FYPlayerEncounters>&, requestedEncounterData);

