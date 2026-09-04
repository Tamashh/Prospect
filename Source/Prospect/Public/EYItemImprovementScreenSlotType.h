#pragma once
#include "CoreMinimal.h"
#include "EYItemImprovementScreenSlotType.generated.h"

UENUM(BlueprintType)
enum class EYItemImprovementScreenSlotType : uint8 {
    Invalid,
    SellScreen,
    StashScreen,
    MAX,
};

