#pragma once
#include "CoreMinimal.h"
#include "EYReportPlayerType.generated.h"

UENUM(BlueprintType)
enum class EYReportPlayerType : uint8 {
    Cheating,
    AFK,
    Toxic,
    Griefing,
    Invalid,
};

