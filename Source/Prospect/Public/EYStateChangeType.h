#pragma once
#include "CoreMinimal.h"
#include "EYStateChangeType.generated.h"

UENUM(BlueprintType)
enum class EYStateChangeType : uint8 {
    None,
    Deactivated,
    Activated,
    Both,
};

