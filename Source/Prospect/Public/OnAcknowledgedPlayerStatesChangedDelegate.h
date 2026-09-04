#pragma once
#include "CoreMinimal.h"
#include "OnAcknowledgedPlayerStatesChangedDelegate.generated.h"

class AYSocialActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAcknowledgedPlayerStatesChanged, AYSocialActor*, Actor);

