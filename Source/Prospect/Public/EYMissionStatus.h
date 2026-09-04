#pragma once
#include "CoreMinimal.h"
#include "EYMissionStatus.generated.h"

UENUM(BlueprintType)
enum class EYMissionStatus : uint8 {
    Started,
    Paused,
    Reset,
};

