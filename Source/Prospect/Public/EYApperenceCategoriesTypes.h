#pragma once
#include "CoreMinimal.h"
#include "EYApperenceCategoriesTypes.generated.h"

UENUM(BlueprintType)
enum class EYApperenceCategoriesTypes : uint8 {
    Overview,
    Archetype,
    Banner,
    Emote,
    Vehicle,
    Droppod,
    Spray,
    Pet,
    Invalid,
};

