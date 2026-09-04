#pragma once
#include "CoreMinimal.h"
#include "EYPlayerAwarenessNotificationType.generated.h"

UENUM(BlueprintType)
enum class EYPlayerAwarenessNotificationType : uint8 {
    NONE,
    TeamMateDBNO,
    TeamMateTakeDamageByHostilePlayer,
    TeamMateDealDamageToHostilePlayer,
    TeamMateShieldBroken,
    LocalPlayerTargeted,
    MAX,
};

