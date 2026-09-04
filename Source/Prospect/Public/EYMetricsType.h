#pragma once
#include "CoreMinimal.h"
#include "EYMetricsType.generated.h"

UENUM(BlueprintType)
enum class EYMetricsType : uint8 {
    Unknown,
    Editor,
    Client,
    Server,
};

