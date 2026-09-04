#pragma once
#include "CoreMinimal.h"
#include "EYVoRowType.generated.h"

UENUM(BlueprintType)
enum class EYVoRowType : uint8 {
    Regular,
    FactionOverride,
    PlayerBodyTypeOverride,
};

