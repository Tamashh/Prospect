#pragma once
#include "CoreMinimal.h"
#include "EYTimerDisplayType.generated.h"

UENUM(BlueprintType)
enum class EYTimerDisplayType : uint8 {
    Custom,
    HoursMinutesSeconds,
    DaysHoursMinutes,
    DaysHoursMinutesSeconds,
};

