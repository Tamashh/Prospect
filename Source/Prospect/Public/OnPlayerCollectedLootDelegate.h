#pragma once
#include "CoreMinimal.h"
#include "OnPlayerCollectedLootDelegate.generated.h"

class AController;
class AYPickupActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerCollectedLoot, AController*, Instigator, AYPickupActor*, pickup);

