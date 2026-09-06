#pragma once
#include "CoreMinimal.h"
#include "EYMissionVOPlayContext.generated.h"

UENUM(BlueprintType)
enum class EYMissionVOPlayContext : uint8 {
    StationOnly,
    MatchOnly,
    Always,
};
