#pragma once
#include "CoreMinimal.h"
#include "EYShopTabType.generated.h"

UENUM(BlueprintType)
enum class EYShopTabType : uint8 {
    Buy,
    Sell,
    MAX,
};

