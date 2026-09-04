#pragma once
#include "CoreMinimal.h"
#include "EYSpawnRequestStatus.generated.h"

UENUM(BlueprintType)
enum class EYSpawnRequestStatus : uint8 {
    RequiresCharacter,
    RequiresController,
    RequiresBehavior,
    Completed,
    Failed,
};

