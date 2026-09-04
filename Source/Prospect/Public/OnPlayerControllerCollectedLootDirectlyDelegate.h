#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnPlayerControllerCollectedLootDirectlyDelegate.generated.h"

class AController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerControllerCollectedLootDirectly, AController*, Instigator, const FYInventoryItem&, Item);

