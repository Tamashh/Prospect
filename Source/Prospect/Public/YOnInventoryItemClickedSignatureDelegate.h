#pragma once
#include "CoreMinimal.h"
#include "EYInventoryListType.h"
#include "EYPlayerSetType.h"
#include "YInventoryItem.h"
#include "YOnInventoryItemClickedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYOnInventoryItemClickedSignature, FYInventoryItem, Item, EYInventoryListType, Type, EYPlayerSetType, selectedInventorySlot);

