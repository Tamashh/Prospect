#pragma once
#include "CoreMinimal.h"
#include "EYStateCancelationBehavior.generated.h"

UENUM(BlueprintType)
enum class EYStateCancelationBehavior : uint8 {
    Nothing,
    FirstPerson,
    ThirdPerson,
};

