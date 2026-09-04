#pragma once
#include "CoreMinimal.h"
#include "EYBrightcapDropReason.generated.h"

UENUM(BlueprintType)
enum class EYBrightcapDropReason : uint8 {
    player_damage,
    ai_damage,
    fall_damage,
    delivered,
};

