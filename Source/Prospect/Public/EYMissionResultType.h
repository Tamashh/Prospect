#pragma once
#include "CoreMinimal.h"
#include "EYMissionResultType.generated.h"

UENUM(BlueprintType)
enum class EYMissionResultType : uint8 {
    Active,
    Failed,
    StepCompleted,
    MissionCompleted,
    Succeeded,
};

