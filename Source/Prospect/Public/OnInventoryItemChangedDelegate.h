#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "OnInventoryItemChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInventoryItemChanged, FYInventoryItem, oldRowHandle, FYInventoryItem, newRowHandle);

