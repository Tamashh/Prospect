#pragma once
#include "CoreMinimal.h"
#include "EYPassiveGeneratorRewardType.generated.h"

UENUM(BlueprintType)
enum class EYPassiveGeneratorRewardType : uint8 {
    None,
    Aurum,
    SoftCurrency,
    Ammo,
    Material,
    Crate,
    InsuranceClaim,
    SpecialDeliveries,
    MAX,
};

