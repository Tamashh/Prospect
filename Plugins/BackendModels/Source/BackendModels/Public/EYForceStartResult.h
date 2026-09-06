#pragma once
#include "CoreMinimal.h"
#include "EYForceStartResult.generated.h"

UENUM(BlueprintType)
enum class EYForceStartResult : uint8 {
    OK,
    EMPTY_QUEUE,
    WRONG_GAME_MODE,
    MAX,
};

