#pragma once
#include "CoreMinimal.h"
#include "EYLootVelocityType.generated.h"

UENUM(BlueprintType)
enum class EYLootVelocityType : uint8 {
    Regular,
    ViewDirectionDependant,
};

