#pragma once
#include "CoreMinimal.h"
#include "EYAudioEffectZoneEffectType.generated.h"

UENUM(BlueprintType)
enum class EYAudioEffectZoneEffectType : uint8 {
    Movement,
    Reload,
    MAX,
};

