#pragma once
#include "CoreMinimal.h"
#include "EYInteractionType.h"
#include "OnPlayerInteractionStoppedDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInteractionStopped, EYInteractionType, interactionType, AYPlayerController_Match*, interactingPlayer);

