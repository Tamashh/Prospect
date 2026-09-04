#pragma once
#include "CoreMinimal.h"
#include "OnAICharacterSpawnedDelegate.generated.h"

class AYAICharacter;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAICharacterSpawned, AYAICharacter*, characterSpawned);

