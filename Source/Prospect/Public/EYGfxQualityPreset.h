#pragma once
#include "CoreMinimal.h"
#include "EYGfxQualityPreset.generated.h"

UENUM(BlueprintType)
enum class EYGfxQualityPreset : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Custom,
};

