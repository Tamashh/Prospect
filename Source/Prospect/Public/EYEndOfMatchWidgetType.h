#pragma once
#include "CoreMinimal.h"
#include "EYEndOfMatchWidgetType.generated.h"

UENUM(BlueprintType)
enum class EYEndOfMatchWidgetType : uint8 {
    EvacFailed,
    EvacSuccess,
    Missions,
    Contracts,
    Encounters,
    Honors,
    PlayerProgression,
    SeasonProgression,
    MAX,
};

