#pragma once
#include "CoreMinimal.h"
#include "EYPromotionType.generated.h"

UENUM(BlueprintType)
enum class EYPromotionType : uint8 {
    None,
    SpecialDaily,
    SpecialWeekly,
    Currency,
    Season,
    StarterPacks,
    MAX,
};

