#pragma once
#include "CoreMinimal.h"
#include "ESlopeWarpQuality.generated.h"

UENUM(BlueprintType)
enum class ESlopeWarpQuality : uint8 {
    Capsule,
    PerFootRay,
    PerFootShape,
    LODBased,
};

