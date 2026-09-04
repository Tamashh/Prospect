#pragma once
#include "CoreMinimal.h"
#include "EStrideVectorMethod.generated.h"

UENUM(BlueprintType)
enum class EStrideVectorMethod : uint8 {
    ManualVelocity,
    ActorVelocity,
};

