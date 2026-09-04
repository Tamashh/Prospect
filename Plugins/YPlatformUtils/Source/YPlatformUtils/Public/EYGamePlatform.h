#pragma once
#include "CoreMinimal.h"
#include "EYGamePlatform.generated.h"

UENUM(BlueprintType)
enum class EYGamePlatform : uint8 {
    NONE,
    EPIC,
    STEAM,
    ALL,
};

