#pragma once
#include "CoreMinimal.h"
#include "EYCameraIntentionType.generated.h"

UENUM(BlueprintType)
enum class EYCameraIntentionType : uint8 {
    None,
    Shop,
    Customization,
    Seasons,
    Launch,
    All,
};

