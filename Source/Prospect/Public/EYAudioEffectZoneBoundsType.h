#pragma once
#include "CoreMinimal.h"
#include "EYAudioEffectZoneBoundsType.generated.h"

UENUM(BlueprintType)
enum class EYAudioEffectZoneBoundsType : uint8 {
    Sphere,
    Box,
    MAX,
};

