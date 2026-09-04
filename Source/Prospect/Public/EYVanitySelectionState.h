#pragma once
#include "CoreMinimal.h"
#include "EYVanitySelectionState.generated.h"

UENUM(BlueprintType)
enum class EYVanitySelectionState : uint8 {
    None,
    Categories,
    Items,
};

