#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingBlocker.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingBlocker : uint8 {
    None,
    MaintenanceMode,
    ClientOutdated,
    MapLocked,
    WrongSessionState,
    RegionBlocked,
};

