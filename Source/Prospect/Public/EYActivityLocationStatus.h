#pragma once
#include "CoreMinimal.h"
#include "EYActivityLocationStatus.generated.h"

UENUM(BlueprintType)
enum class EYActivityLocationStatus : uint8 {
    Free,
    SpawnRequestPending,
    Occupied,
    Depleted,
    OnCooldown,
};

