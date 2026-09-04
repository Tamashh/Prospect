#pragma once
#include "CoreMinimal.h"
#include "YStoredInventoryWeaponData.h"
#include "OnWeaponDroppedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWeaponDropped, AActor*, actorContext, const FYStoredInventoryWeaponData&, storedInformation);

