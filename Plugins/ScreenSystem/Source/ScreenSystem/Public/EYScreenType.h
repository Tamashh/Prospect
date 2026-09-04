#pragma once
#include "CoreMinimal.h"
#include "EYScreenType.generated.h"

UENUM(BlueprintType)
enum class EYScreenType : uint8 {
    None,
    LaunchBay,
    FortunaPass,
    Loadout,
    Crafting,
    Factions,
    Apperence,
    Shop,
    Inventory,
};

