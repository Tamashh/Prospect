#pragma once
#include "CoreMinimal.h"
#include "EYWeaponTransportType.generated.h"

UENUM(BlueprintType)
enum class EYWeaponTransportType : uint8 {
    Invalid,
    Hitscan,
    Projectile,
    Sphere,
    PhysicsActor,
    Capsule,
};

