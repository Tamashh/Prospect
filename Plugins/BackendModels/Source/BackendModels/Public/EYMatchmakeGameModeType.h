#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakeGameModeType.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakeGameModeType : uint8 {
    NONE,
    SOLO,
    DUO,
    SQUAD,
    MAX = 255,
};

