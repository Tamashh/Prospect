#pragma once
#include "CoreMinimal.h"
#include "EYDamageComponentType.generated.h"

UENUM(BlueprintType)
enum class EYDamageComponentType : uint8 {
    Normal,
    Player,
    Enemy,
    Invincible,
    Everything,
};

