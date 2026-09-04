#pragma once
#include "CoreMinimal.h"
#include "EYProgressState.generated.h"

UENUM(BlueprintType)
enum class EYProgressState : uint8 {
    Idle,
    Running,
    Finished,
    Stopped,
    Paused,
    Resumed,
    ReverseRunning,
};

