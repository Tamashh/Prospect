#pragma once
#include "CoreMinimal.h"
#include "EFSRUpscalingMode.generated.h"

UENUM(BlueprintType)
enum class EFSRUpscalingMode : uint8 {
    Off,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    HybridUltraQuality,
    HybridQuality,
    HybridBalanced,
    HybridPerformance,
};

