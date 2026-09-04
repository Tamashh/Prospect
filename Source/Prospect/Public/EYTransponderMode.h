#pragma once
#include "CoreMinimal.h"
#include "EYTransponderMode.generated.h"

UENUM(BlueprintType)
enum class EYTransponderMode : uint8 {
    Friendly,
    Hostile,
};

