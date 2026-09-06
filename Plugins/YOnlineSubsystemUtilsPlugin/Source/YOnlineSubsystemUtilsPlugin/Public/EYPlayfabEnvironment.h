#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabEnvironment.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabEnvironment : uint8 {
    Invalid,
    Staging,
    Hotfix,
};

