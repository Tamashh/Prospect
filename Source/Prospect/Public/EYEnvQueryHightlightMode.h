#pragma once
#include "CoreMinimal.h"
#include "EYEnvQueryHightlightMode.generated.h"

UENUM(BlueprintType)
enum class EYEnvQueryHightlightMode : uint8 {
    All,
    Best5Pct,
    Best25Pct,
};

