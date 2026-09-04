#pragma once
#include "CoreMinimal.h"
#include "EYPlayfabEnvironment.generated.h"

UENUM(BlueprintType)
enum class EYPlayfabEnvironment : uint8 {
    Invalid,
    Development,
    Dev1,
    Dev2,
    Dev3,
    Dev4,
    Staging,
    Testing,
    Sandbox,
    BE1,
    Hotfix,
};

