#pragma once
#include "CoreMinimal.h"
#include "EYCustomizationModelType.generated.h"

UENUM(BlueprintType)
enum class EYCustomizationModelType : uint8 {
    None,
    Persistent,
    Pending,
};

