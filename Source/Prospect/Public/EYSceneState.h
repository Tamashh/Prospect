#pragma once
#include "CoreMinimal.h"
#include "EYSceneState.generated.h"

UENUM(BlueprintType)
enum class EYSceneState : uint8 {
    None,
    Normal,
    Detail,
    MAX,
};

