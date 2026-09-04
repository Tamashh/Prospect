#pragma once
#include "CoreMinimal.h"
#include "EYInteractionType.h"
#include "OnPlayerInteractionStartedDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInteractionStarted, EYInteractionType, interactionType, AYPlayerController_Match*, interactingPlayer);

