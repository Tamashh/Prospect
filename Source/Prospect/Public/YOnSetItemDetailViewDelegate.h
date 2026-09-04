#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnSetItemDetailViewDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnSetItemDetailView, FYInventoryItem, Item);

