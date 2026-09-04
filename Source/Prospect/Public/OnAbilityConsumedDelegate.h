#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnAbilityConsumedDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnAbilityConsumed, const AActor*, Owner, const FYInventoryItem&, inventoryItem);

