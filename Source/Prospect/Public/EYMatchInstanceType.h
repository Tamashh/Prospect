#pragma once
#include "CoreMinimal.h"
#include "EYMatchInstanceType.generated.h"

UENUM(BlueprintType)
enum class EYMatchInstanceType : uint8 {
    None,
    Room,
    Station,
};

