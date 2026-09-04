#pragma once
#include "CoreMinimal.h"
#include "EYInteractionType.h"
#include "OnPlayerInteractionCompletedDelegate.generated.h"

class AYPlayerController_Match;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInteractionCompleted, EYInteractionType, interactionType, AYPlayerController_Match*, interactingPlayer);

