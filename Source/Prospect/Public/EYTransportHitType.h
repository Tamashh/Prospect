#pragma once
#include "CoreMinimal.h"
#include "EYTransportHitType.generated.h"

UENUM(BlueprintType)
enum class EYTransportHitType : uint8 {
    All,
    Enemy,
    Friendly,
    None,
};

