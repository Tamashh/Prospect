#pragma once
#include "CoreMinimal.h"
#include "EYNotificationAction.generated.h"

UENUM(BlueprintType)
enum class EYNotificationAction : uint8 {
    None,
    Accept,
    Decline,
    Remove,
};

