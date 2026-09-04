#pragma once
#include "CoreMinimal.h"
#include "EYInventoryListType.generated.h"

UENUM(BlueprintType)
enum class EYInventoryListType : uint8 {
    None,
    CurrentEquipped,
    FullList,
};

