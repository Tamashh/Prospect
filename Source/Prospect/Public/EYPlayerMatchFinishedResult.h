#pragma once
#include "CoreMinimal.h"
#include "EYPlayerMatchFinishedResult.generated.h"

UENUM(BlueprintType)
enum class EYPlayerMatchFinishedResult : uint8 {
    None,
    Dead,
    Escaped,
};

