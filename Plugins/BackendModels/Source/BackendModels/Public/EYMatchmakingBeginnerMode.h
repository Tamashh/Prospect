#pragma once
#include "CoreMinimal.h"
#include "EYMatchmakingBeginnerMode.generated.h"

UENUM(BlueprintType)
enum class EYMatchmakingBeginnerMode : uint8 {
    None,
    Solo,
    Duo,
    Trio,
};

