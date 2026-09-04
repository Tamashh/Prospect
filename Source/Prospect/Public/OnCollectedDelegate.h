#pragma once
#include "CoreMinimal.h"
#include "OnCollectedDelegate.generated.h"

class AYPickupActor;
class AYPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnCollected, AYPickupActor*, pickUpActor, AYPlayerController*, PlayerController, bool, isCollectedSuccessfully);

