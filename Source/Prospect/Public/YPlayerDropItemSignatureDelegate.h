#pragma once
#include "CoreMinimal.h"
#include "EYLootSourceType.h"
#include "YInventoryItem.h"
#include "YPlayerDropItemSignatureDelegate.generated.h"

class UYPlayerDropComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FYPlayerDropItemSignature, UYPlayerDropComponent*, playerDropComponent, const FYInventoryItem&, Item, EYLootSourceType, lootType);

