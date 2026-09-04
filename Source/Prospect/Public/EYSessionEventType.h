#pragma once
#include "CoreMinimal.h"
#include "EYSessionEventType.generated.h"

UENUM(BlueprintType)
enum class EYSessionEventType : uint8 {
    Invalid,
    Warning,
    Finishing,
    MAX,
};

