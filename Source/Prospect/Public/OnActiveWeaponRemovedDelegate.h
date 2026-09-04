#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnActiveWeaponRemovedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActiveWeaponRemoved, const FYInventoryItem&, removedWeapon);

