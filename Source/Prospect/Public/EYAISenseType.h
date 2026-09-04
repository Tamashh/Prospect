#pragma once
#include "CoreMinimal.h"
#include "EYAISenseType.generated.h"

UENUM(BlueprintType)
enum class EYAISenseType : uint8 {
    None,
    Hearing,
    Shared,
    Damage,
    Sight,
    FarSight,
};

