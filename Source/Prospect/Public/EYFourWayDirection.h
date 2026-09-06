#pragma once
#include "CoreMinimal.h"
#include "EYFourWayDirection.generated.h"

UENUM(BlueprintType)
enum class EYFourWayDirection : uint8 {
    Front,
    Right,
    Left,
    Back,
};
