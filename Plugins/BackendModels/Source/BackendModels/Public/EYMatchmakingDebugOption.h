#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingDebugOption.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingDebugOption : uint8 {
    None,
    ForceMultiplayerStation,
    ForceSinglePlayerStation,
};

