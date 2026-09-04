#pragma once
#include "CoreMinimal.h"
#include "YPickupItem.h"
#include "OnLootCreatedDelegate.generated.h"

class AYPickupActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnLootCreated, const FYPickupItem&, pickupItem, AYPickupActor*, pickUpActor);

