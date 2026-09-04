#pragma once
#include "CoreMinimal.h"
#include "EYItemType.h"
#include "EYInventoryListType.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemDraggingItemDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FYOnInventoryItemDraggingItem, EYItemType, ItemType, bool, isDragging, EYInventoryListType, Type, FYInventoryItem, Item);

