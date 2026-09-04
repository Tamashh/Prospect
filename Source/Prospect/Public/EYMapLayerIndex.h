#pragma once
#include "CoreMinimal.h"
#include "EYMapLayerIndex.generated.h"

UENUM(BlueprintType)
enum class EYMapLayerIndex : uint8 {
    BACKGROUND,
    ACTIVITIES,
    PLAYERS,
    SOCIALACTOR,
    MAX,
};

