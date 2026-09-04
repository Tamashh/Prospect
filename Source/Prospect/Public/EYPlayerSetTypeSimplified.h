#pragma once
#include "CoreMinimal.h"
#include "EYPlayerSetTypeSimplified.generated.h"

UENUM(BlueprintType)
enum class EYPlayerSetTypeSimplified : uint8 {
    Invalid,
    StashItem,
    BagItem,
    ActiveSlot,
};

