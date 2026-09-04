#pragma once
#include "CoreMinimal.h"
#include "EYAISquadGenerationTypesToggle.generated.h"

UENUM(BlueprintType)
enum class EYAISquadGenerationTypesToggle : uint8 {
    Enabled,
    Disabled,
    Forced,
};

