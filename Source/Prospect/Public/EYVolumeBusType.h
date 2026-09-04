#pragma once
#include "CoreMinimal.h"
#include "EYVolumeBusType.generated.h"

UENUM(BlueprintType)
enum class EYVolumeBusType : uint8 {
    Master,
    Music,
    Sfx,
    VO,
    UI,
    HitMarker,
    MAX,
};

