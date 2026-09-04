#pragma once
#include "CoreMinimal.h"
#include "EYGPAModifierType.generated.h"

UENUM(BlueprintType)
enum class EYGPAModifierType : uint8 {
    Additive,
    Multiplicitive_PreAdd,
    Division_PreAdd,
    Multiplicitive_PostAdd,
    Division_PostAdd,
    Override,
};

