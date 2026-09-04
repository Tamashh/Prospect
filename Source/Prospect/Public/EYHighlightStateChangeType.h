#pragma once
#include "CoreMinimal.h"
#include "EYHighlightStateChangeType.generated.h"

UENUM(BlueprintType)
enum class EYHighlightStateChangeType : uint8 {
    Added,
    Removed,
    Notified,
};

