#pragma once
#include "CoreMinimal.h"
#include "EYSocialNotificationBackend.generated.h"

UENUM(BlueprintType)
enum class EYSocialNotificationBackend : uint8 {
    NONE,
    ONLINE,
    OFFLINE,
    ADDED,
    MATCH,
};

