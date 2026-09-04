#pragma once
#include "CoreMinimal.h"
#include "EYDebugActivitySpawnMode.generated.h"

UENUM(BlueprintType)
enum class EYDebugActivitySpawnMode : uint8 {
    None,
    DebugSet,
    DebugActivities,
};

