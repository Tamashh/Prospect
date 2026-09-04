#pragma once
#include "CoreMinimal.h"
#include "EYVirtualCursorState.generated.h"

UENUM(BlueprintType)
enum class EYVirtualCursorState : uint8 {
    None,
    Idle,
    Hovering,
};

