#pragma once
#include "CoreMinimal.h"
#include "EYCharacterItemColumnType.generated.h"

UENUM(BlueprintType)
enum class EYCharacterItemColumnType : uint8 {
    Invalid,
    Item,
    Color,
    Archetype,
};

