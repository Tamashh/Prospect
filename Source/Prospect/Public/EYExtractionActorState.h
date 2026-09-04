#pragma once
#include "CoreMinimal.h"
#include "EYExtractionActorState.generated.h"

UENUM(BlueprintType)
enum class EYExtractionActorState : uint8 {
    Inactive,
    Activating,
    Active,
};

