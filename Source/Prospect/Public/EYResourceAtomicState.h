#pragma once
#include "CoreMinimal.h"
#include "EYResourceAtomicState.generated.h"

UENUM(BlueprintType)
enum class EYResourceAtomicState : uint8 {
    None,
    Pending,
    Completed,
};

