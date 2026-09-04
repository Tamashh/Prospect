#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInventoryItemAdded, const FYInventoryItem&, Item);

