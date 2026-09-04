#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemDetailViewDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInventoryItemDetailView, FYInventoryItem, Item);

