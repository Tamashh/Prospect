#pragma once
#include "CoreMinimal.h"
#include "EYTraceShapeType.generated.h"

UENUM(BlueprintType)
enum class EYTraceShapeType : uint8 {
    LineTrace,
    Capsule,
};

