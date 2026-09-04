#pragma once
#include "CoreMinimal.h"
#include "EYGameplayContextType.generated.h"

UENUM(BlueprintType)
enum class EYGameplayContextType : uint8 {
    Unknown,
    Weapon,
    Ability,
    Melee,
    Storm,
    Vehicle,
    Armor,
    Fall,
    All,
};

