#pragma once
#include "CoreMinimal.h"
#include "EYInventoryPlace.generated.h"

UENUM(BlueprintType)
enum class EYInventoryPlace : uint8 {
    None,
    Stash,
    ActiveSet,
    Safe,
};

