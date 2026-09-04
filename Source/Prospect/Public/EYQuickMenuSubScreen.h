#pragma once
#include "CoreMinimal.h"
#include "EYQuickMenuSubScreen.generated.h"

UENUM(BlueprintType)
enum class EYQuickMenuSubScreen : uint8 {
    Invalid,
    Play,
    FortunaPass,
    Inventory,
    Character,
    Shop,
    Objectives,
    AurumShop,
    MAX,
};

