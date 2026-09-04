#pragma once
#include "CoreMinimal.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemHoveredSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FYOnInventoryItemHoveredSignature, FYInventoryItem, Item);

