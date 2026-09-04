#pragma once
#include "CoreMinimal.h"
#include "EYStackManagement.generated.h"

UENUM(BlueprintType)
enum class EYStackManagement : uint8 {
    Pop,
    Handled,
    Invalid,
};

