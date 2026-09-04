#pragma once
#include "CoreMinimal.h"
#include "EYInteractionUpdateType.generated.h"

UENUM(BlueprintType)
enum class EYInteractionUpdateType : uint8 {
    Start,
    Successful,
    Interrupted,
    MAX,
};

