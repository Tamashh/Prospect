#pragma once
#include "CoreMinimal.h"
#include "EYLootAnalyticsAction.generated.h"

UENUM(BlueprintType)
enum class EYLootAnalyticsAction : uint8 {
    Dropped,
    PickedUp,
    Expired,
};

