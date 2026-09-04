#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnAbilityEquipedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityEquiped, const AActor*, PlayerController, const FYInventoryItem&, inventoryItem);

