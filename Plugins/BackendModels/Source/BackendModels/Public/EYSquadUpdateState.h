#pragma once
#include "CoreMinimal.h"
#include "EYSquadUpdateState.generated.h"

UENUM(BlueprintType)
enum class EYSquadUpdateState : uint8 {
    JOINED,
    LEFT,
    GENERIC,
    DISBANDED,
};

