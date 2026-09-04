#pragma once
#include "CoreMinimal.h"
#include "EYEZProfileType.generated.h"

UENUM(BlueprintType)
enum class EYEZProfileType : uint8 {
    None,
    FullProfile,
    NetProfile,
    DefaultTrace,
    CPUTrace,
    GPUTrace,
    NETTrace,
};

