#pragma once
#include "CoreMinimal.h"
#include "EYPlayerEncounterType.generated.h"

UENUM(BlueprintType)
enum class EYPlayerEncounterType : uint8 {
    None,
    DamageTo,
    DamagedBy,
    Evacuated,
    VoiceOverIP,
    Distance,
};

