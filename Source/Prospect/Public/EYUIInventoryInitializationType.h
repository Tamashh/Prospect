#pragma once
#include "CoreMinimal.h"
#include "EYUIInventoryInitializationType.generated.h"

UENUM(BlueprintType)
enum class EYUIInventoryInitializationType : uint8 {
    NormalInitialization,
    FreeLoadout,
    EndOfMatch,
    LoadoutPreset,
    MAX,
};
