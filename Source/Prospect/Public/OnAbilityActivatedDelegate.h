#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnAbilityActivatedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityActivated, const AActor*, Owner, const FYInventoryItem&, inventoryItem);

