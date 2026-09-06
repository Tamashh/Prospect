#pragma once
#include "CoreMinimal.h"
#include "EYImpactActorRotation.generated.h"

UENUM(BlueprintType)
enum class EYImpactActorRotation : uint8 {
    UpVector_ImpactNormal,
    UpVector_OwnerForwardVector,
    UpVector_TransportDirection,
};

