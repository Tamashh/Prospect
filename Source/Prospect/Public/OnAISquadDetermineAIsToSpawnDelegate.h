#pragma once
#include "CoreMinimal.h"
#include "OnAISquadDetermineAIsToSpawnDelegate.generated.h"

class AYAISquad;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAISquadDetermineAIsToSpawn, AYAISquad*, squadActor);

