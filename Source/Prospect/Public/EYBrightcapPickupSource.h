#pragma once
#include "CoreMinimal.h"
#include "EYBrightcapPickupSource.generated.h"

UENUM(BlueprintType)
enum class EYBrightcapPickupSource : uint8 {
    spawn,
    player_drop,
    enemy_drop,
};

