#pragma once
#include "CoreMinimal.h"
#include "EYNotificationsPriority.generated.h"

UENUM(BlueprintType)
enum class EYNotificationsPriority : uint8 {
    None,
    Low,
    Medium,
    Warning,
    High,
    MAX,
};

