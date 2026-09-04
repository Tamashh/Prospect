#pragma once
#include "CoreMinimal.h"
#include "OnTryMoveItemResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTryMoveItemResult, bool, CanMoveItem, int32, targetInventoryComponentId);

