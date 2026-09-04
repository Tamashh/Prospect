#pragma once
#include "CoreMinimal.h"
#include "EYLootContainerWidgetType.generated.h"

UENUM(BlueprintType)
enum class EYLootContainerWidgetType : uint8 {
    Undefined,
    Bag,
    Corpse,
    DeadDrop,
    AlienForge,
};

