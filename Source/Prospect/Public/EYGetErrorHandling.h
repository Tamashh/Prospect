#pragma once
#include "CoreMinimal.h"
#include "EYGetErrorHandling.generated.h"

UENUM(BlueprintType)
enum class EYGetErrorHandling : uint8 {
    LogAndReturnNull,
    ReturnNull,
};

