#pragma once
#include "CoreMinimal.h"
#include "EYKillTypeAction.generated.h"

UENUM(BlueprintType)
enum class EYKillTypeAction : uint8 {
    Invalid,
    Players,
    Creatures,
    All,
    MAX,
};

