#pragma once
#include "CoreMinimal.h"
#include "EYAIDetailAggroType.generated.h"

UENUM(BlueprintType)
enum class EYAIDetailAggroType : uint8 {
    Distance,
    Token,
    Visibility,
    DBNO,
    TargetType,
    DamageReceived,
    Shared,
    Hearing,
    FarSight,
    Max,
};

