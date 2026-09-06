#pragma once
#include "CoreMinimal.h"
#include "EYPlayerLocalEffect.generated.h"

UENUM(BlueprintType)
enum class EYPlayerLocalEffect : uint8 {
    None,
    StunEffect,
    InstantStunEffect,
};
