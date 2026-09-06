#pragma once
#include "CoreMinimal.h"
#include "EYLootSourceType.generated.h"

UENUM(BlueprintType)
enum class EYLootSourceType : uint8 {
    None,
    Generic,
    MapLoot,
    Removed,
    AILootDrop,
    PlayerItem,
    PlayerItemDroppedOnDeath,
    Debug,
    AIHowlerLoot,
};

