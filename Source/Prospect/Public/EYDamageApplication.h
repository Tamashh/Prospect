#pragma once
#include "CoreMinimal.h"
#include "EYDamageApplication.generated.h"

UENUM(BlueprintType)
enum class EYDamageApplication : uint8 {
    Damage,
    Heal,
    HealAndDamage,
};

