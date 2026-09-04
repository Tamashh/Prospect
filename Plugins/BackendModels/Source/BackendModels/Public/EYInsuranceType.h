#pragma once
#include "CoreMinimal.h"
#include "EYInsuranceType.generated.h"

UENUM(BlueprintType)
enum class EYInsuranceType : uint8 {
    None,
    Basic,
    Premium,
};

