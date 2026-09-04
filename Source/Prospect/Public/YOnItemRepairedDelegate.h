#pragma once
#include "CoreMinimal.h"
#include "EYRepairItemResult.h"
#include "YInventoryItem.h"
#include "YOnItemRepairedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FYOnItemRepaired, const FYInventoryItem&, inventoryItem, EYRepairItemResult, Result);

