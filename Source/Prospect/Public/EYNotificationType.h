#pragma once
#include "CoreMinimal.h"
#include "EYNotificationType.generated.h"

UENUM(BlueprintType)
enum class EYNotificationType : uint8 {
    Invalid,
    SimpleText,
    ImportantText,
    ImmidateText,
};

